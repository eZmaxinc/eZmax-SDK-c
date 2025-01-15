#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/discussionmessage_create_object_v1_request.h"
#include "../model/discussionmessage_create_object_v1_response.h"
#include "../model/discussionmessage_patch_object_v1_request.h"


// Create a new Discussionmessage
//
// The endpoint allows to create one or many elements at once.
//
discussionmessage_create_object_v1_response_t*
ObjectDiscussionmessageAPI_discussionmessageCreateObjectV1(apiClient_t *apiClient, discussionmessage_create_object_v1_request_t *discussionmessage_create_object_v1_request);


// Delete an existing Discussionmessage
//
// 
//
common_response_t*
ObjectDiscussionmessageAPI_discussionmessageDeleteObjectV1(apiClient_t *apiClient, int *pkiDiscussionmessageID);


// Patch an existing Discussionmessage
//
// 
//
common_response_t*
ObjectDiscussionmessageAPI_discussionmessagePatchObjectV1(apiClient_t *apiClient, int *pkiDiscussionmessageID, discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request);


