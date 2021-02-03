#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/user_create_ezsignuser_v1_request.h"
#include "../model/user_create_ezsignuser_v1_response.h"


// Create a new User of type Ezsignuser
//
// The endpoint allows to initiate the creation or a user of type Ezsignuser.  The user will be created only once the email verification process will be completed
//
user_create_ezsignuser_v1_response_t*
ModuleUserAPI_userCreateEzsignuserV1(apiClient_t *apiClient, list_t * user_create_ezsignuser_v1_request );


