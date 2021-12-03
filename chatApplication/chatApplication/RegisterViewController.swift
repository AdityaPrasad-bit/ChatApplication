
import UIKit
import Firebase
class RegisterViewController: UIViewController {

    @IBOutlet weak var emailTextfield: UITextField!
    @IBOutlet weak var passwordTextfield: UITextField!
    
    @IBAction func registerPressed(_ sender: UIButton) {
        if let email = emailTextfield.text, let password = passwordTextfield.text{
            Auth.auth().createUser(withEmail: email, password: password) { authResult, error in
                if let e = error{
                    print(e.localizedDescription)
                    let alert = UIAlertController(title: "Please follow this", message: e.localizedDescription, preferredStyle: .alert)
                    let defaultButton = UIAlertAction(title: "Okay", style: .default)
                    alert.addAction(defaultButton)
                    self.present(alert,animated: true,completion: nil)
                }else {
                    self.performSegue(withIdentifier: "RegisterToChat", sender: self)
                }
            }
        }
        

    }
    
}
