#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/modulegroup_get_all_v1_response.h"

// Enum ECONTEXT for ObjectModulegroupAPI_modulegroupGetAllV1
typedef enum  { ezmax_api_definition__full_modulegroupGetAllV1_ECONTEXT_NULL = 0, ezmax_api_definition__full_modulegroupGetAllV1_ECONTEXT_Api, ezmax_api_definition__full_modulegroupGetAllV1_ECONTEXT_User } ezmax_api_definition__full_modulegroupGetAllV1_eContext_e;


// Retrieve all Modulegroups
//
modulegroup_get_all_v1_response_t*
ObjectModulegroupAPI_modulegroupGetAllV1(apiClient_t *apiClient, ezmax_api_definition__full_modulegroupGetAllV1_eContext_e eContext );


