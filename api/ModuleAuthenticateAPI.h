#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/authenticate_authenticate_v2_request.h"
#include "../model/authenticate_authenticate_v2_response.h"
#include "../model/common_response_error.h"

// Enum ESESSIONTYPE for ModuleAuthenticateAPI_authenticateAuthenticateV2
typedef enum  { ezmax_api_definition_authenticateAuthenticateV2_ESESSIONTYPE_NULL = 0, ezmax_api_definition_authenticateAuthenticateV2_ESESSIONTYPE_ezsignuser } ezmax_api_definition_authenticateAuthenticateV2_eSessionType_e;


// Authenticate a user
//
// This endpoint authenticates a user.
//
authenticate_authenticate_v2_response_t*
ModuleAuthenticateAPI_authenticateAuthenticateV2(apiClient_t *apiClient, ezmax_api_definition_authenticateAuthenticateV2_eSessionType_e eSessionType , authenticate_authenticate_v2_request_t * authenticate_authenticate_v2_request );


