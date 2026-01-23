#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/notificationtest_get_elements_v2_response.h"


// Retrieve an existing Notificationtest's Elements
//
// 
//
notificationtest_get_elements_v2_response_t*
ObjectNotificationtestAPI_notificationtestGetElementsV2(apiClient_t *apiClient, int *pkiNotificationtestID);


