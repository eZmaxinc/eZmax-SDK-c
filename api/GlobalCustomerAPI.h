#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/global_customer_get_endpoint_v1_response.h"

// Enum SINFRASTRUCTUREPRODUCTCODE for GlobalCustomerAPI_globalCustomerGetEndpointV1
typedef enum  { ezmax_api_definition__full_globalCustomerGetEndpointV1_SINFRASTRUCTUREPRODUCTCODE_NULL = 0, ezmax_api_definition__full_globalCustomerGetEndpointV1_SINFRASTRUCTUREPRODUCTCODE_appcluster01, ezmax_api_definition__full_globalCustomerGetEndpointV1_SINFRASTRUCTUREPRODUCTCODE_ezsignuser } ezmax_api_definition__full_globalCustomerGetEndpointV1_sInfrastructureproductCode_e;


// Get customer endpoint
//
// Retrieve the customer's specific server endpoint where to send requests. This will help locate the proper region (ie: sInfrastructureregionCode) and the proper environment (ie: sInfrastructureenvironmenttypeDescription) where the customer's data is stored.
//
global_customer_get_endpoint_v1_response_t*
GlobalCustomerAPI_globalCustomerGetEndpointV1(apiClient_t *apiClient, char * pksCustomerCode , ezmax_api_definition__full_globalCustomerGetEndpointV1_sInfrastructureproductCode_e sInfrastructureproductCode );


