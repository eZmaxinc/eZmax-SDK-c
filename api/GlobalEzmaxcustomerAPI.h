#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/global_ezmaxcustomer_get_configuration_v1_response.h"


// Get ezmaxcustomer configuration
//
// Retrieve the ezmaxcustomer's specific configuration. This will help locate the proper region (ie: sInfrastructureregionCode) and the proper environment (ie: sInfrastructureenvironmenttypeDescription) where the customer's data is stored.
//
global_ezmaxcustomer_get_configuration_v1_response_t*
GlobalEzmaxcustomerAPI_globalEzmaxcustomerGetConfigurationV1(apiClient_t *apiClient, char *pksEzmaxcustomerCode);


