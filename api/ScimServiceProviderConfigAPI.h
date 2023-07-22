#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/scim_service_provider_config.h"


// Get Service Provider Configuration
//
scim_service_provider_config_t*
ScimServiceProviderConfigAPI_serviceProviderConfigGetObjectScimV2(apiClient_t *apiClient);


