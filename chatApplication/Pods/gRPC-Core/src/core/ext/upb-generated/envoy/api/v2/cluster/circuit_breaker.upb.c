/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/cluster/circuit_breaker.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/api/v2/cluster/circuit_breaker.upb.h"
#else
  #include  "envoy/api/v2/cluster/circuit_breaker.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/api/v2/core/base.upb.h"
#else
  #include  "envoy/api/v2/core/base.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/type/percent.upb.h"
#else
  #include  "envoy/type/percent.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/wrappers.upb.h"
#else
  #include  "google/protobuf/wrappers.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/migrate.upb.h"
#else
  #include  "udpa/annotations/migrate.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/validate/validate.upb.h"
#else
  #include  "validate/validate.upb.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

static const upb_msglayout *const envoy_api_v2_cluster_CircuitBreakers_submsgs[1] = {
  &envoy_api_v2_cluster_CircuitBreakers_Thresholds_msginit,
};

static const upb_msglayout_field envoy_api_v2_cluster_CircuitBreakers__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 3},
};

const upb_msglayout envoy_api_v2_cluster_CircuitBreakers_msginit = {
  &envoy_api_v2_cluster_CircuitBreakers_submsgs[0],
  &envoy_api_v2_cluster_CircuitBreakers__fields[0],
  UPB_SIZE(4, 8), 1, false,
};

static const upb_msglayout *const envoy_api_v2_cluster_CircuitBreakers_Thresholds_submsgs[6] = {
  &envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_cluster_CircuitBreakers_Thresholds__fields[8] = {
  {1, UPB_SIZE(0, 0), 0, 0, 14, 1},
  {2, UPB_SIZE(12, 16), 0, 1, 11, 1},
  {3, UPB_SIZE(16, 24), 0, 1, 11, 1},
  {4, UPB_SIZE(20, 32), 0, 1, 11, 1},
  {5, UPB_SIZE(24, 40), 0, 1, 11, 1},
  {6, UPB_SIZE(8, 8), 0, 0, 8, 1},
  {7, UPB_SIZE(28, 48), 0, 1, 11, 1},
  {8, UPB_SIZE(32, 56), 0, 0, 11, 1},
};

const upb_msglayout envoy_api_v2_cluster_CircuitBreakers_Thresholds_msginit = {
  &envoy_api_v2_cluster_CircuitBreakers_Thresholds_submsgs[0],
  &envoy_api_v2_cluster_CircuitBreakers_Thresholds__fields[0],
  UPB_SIZE(40, 64), 8, false,
};

static const upb_msglayout *const envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_submsgs[2] = {
  &envoy_type_Percent_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
  {2, UPB_SIZE(4, 8), 0, 1, 11, 1},
};

const upb_msglayout envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_msginit = {
  &envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget_submsgs[0],
  &envoy_api_v2_cluster_CircuitBreakers_Thresholds_RetryBudget__fields[0],
  UPB_SIZE(8, 16), 2, false,
};

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

