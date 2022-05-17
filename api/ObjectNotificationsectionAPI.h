#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/notificationsection_get_notificationtests_v1_response.h"


// Retrieve an existing Notificationsection's Notificationtests
//
// 
//
notificationsection_get_notificationtests_v1_response_t*
ObjectNotificationsectionAPI_notificationsectionGetNotificationtestsV1(apiClient_t *apiClient, int pkiNotificationsectionID , int bShowHidden );


