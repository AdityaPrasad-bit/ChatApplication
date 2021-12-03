

import UIKit
import Firebase
class ChatViewController: UIViewController {

    @IBOutlet weak var tableView: UITableView!
    @IBOutlet weak var messageTextfield: UITextField!
    
    let db = Firestore.firestore()
    
    var message:[Message] = []
    
    override func viewDidLoad() {
        super.viewDidLoad()
        tableView.dataSource = self
        title = "💬ChatApplication"
        navigationItem.hidesBackButton = true
        tableView.register(UINib(nibName: "MessageCell", bundle: nil), forCellReuseIdentifier: "ReusableCell")
        
        loadMessages()
    }
    
    func loadMessages(){
        
        
        
        db.collection("messages").order(by: "date").addSnapshotListener { querySnapshot, error in
            self.message = []

            if let e = error{
                print("There was an issue in retrieving data from firestore \(e)")
            }
            else{
                if let snapshotDocuments = querySnapshot?.documents{
                    for doc in snapshotDocuments{
                        let data = doc.data()
                        if let messageSender = data["sender"] as? String, let messageBody = data["body"] as? String{
                            let newMessage = Message(sender:messageSender,body:messageBody)
                            self.message.append(newMessage)
                            
                            
                            DispatchQueue.main.async {
                                self.tableView.reloadData()
                                let indexPath = IndexPath(row: self.message.count - 1, section: 0)
                                self.tableView.scrollToRow(at: indexPath, at: .top, animated:  true)
                                
                                
                            }
                            
                        }
                    }
                }
            }
        }
    }
    
    @IBAction func sendPressed(_ sender: UIButton) {
        if let messageBody = messageTextfield.text,let messageSender = Auth.auth().currentUser?.email{
            db.collection("messages").addDocument(data: ["sender":messageSender,"body":messageBody,"date":Date().timeIntervalSince1970]) { error in
                if let e = error {
                    print("There was an issue saving data to firestore, \(e)")
                }
                else{
                    print("Successfully")
                    DispatchQueue.main.async {
                        self.messageTextfield.text = ""
                    }
             
                }
            }
        }
        
        
    }
    
    @IBAction func logoutPressed(_ sender: UIBarButtonItem) {
   do {
      try  Auth.auth().signOut()
    navigationController?.popToRootViewController(animated: true)
    } catch let signOutError as NSError {
      print("Error signing out: %@", signOutError)
    }
      
    }
    
}

extension ChatViewController:UITableViewDataSource{
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return message.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        let m = message[indexPath.row]
        
        
        
        let cell = tableView.dequeueReusableCell(withIdentifier: "ReusableCell", for: indexPath) as! MessageCell
        cell.label.text = m.body
        
        
        if m.sender == Auth.auth().currentUser?.email{
            cell.leftImageView.isHidden = true
            cell.rightImageView.isHidden = false
            cell.messageBubble.backgroundColor = UIColor(named: "BrandLightPurple")
            cell.label.textColor = UIColor(named: "BrandBlue")
        }
        else{
            cell.leftImageView.isHidden = false
            cell.rightImageView.isHidden = true
            cell.messageBubble.backgroundColor = UIColor(named: "BrandBlue")
            cell.label.textColor = UIColor(named: "BrandLightPurple")
        }
        
        
        
        
        return cell
    }
    
    
}
