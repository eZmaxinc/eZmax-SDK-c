#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezmaxmaillinglist_subscribe_v1_request.h"
#include "../model/ezmaxmaillinglist_subscribe_v1_response.h"


// Subscribe to specific Ezmaxmaillinglist
//
// Users can subscribe to specific Ezmaxmaillinglist
//
ezmaxmaillinglist_subscribe_v1_response_t*
ModuleEzmaxmaillinglistAPI_ezmaxmaillinglistSubscribeV1(apiClient_t *apiClient, ezmaxmaillinglist_subscribe_v1_request_t *ezmaxmaillinglist_subscribe_v1_request);


