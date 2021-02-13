#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"


// Remind of forgotten username(s)
//
// This endpoint returns an email with the username(s) matching the email address provided in case of forgotten username
//
void
ModuleSsprAPI_ssprRemindUsernamesV1(apiClient_t *apiClient);


