#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/discussion_create_object_v1_request.h"
#include "../model/discussion_create_object_v1_response.h"
#include "../model/discussion_get_object_v2_response.h"
#include "../model/discussion_patch_object_v1_request.h"
#include "../model/discussion_update_discussionreadstatus_v1_request.h"


// Create a new Discussion
//
// The endpoint allows to create one or many elements at once.
//
discussion_create_object_v1_response_t*
ObjectDiscussionAPI_discussionCreateObjectV1(apiClient_t *apiClient, discussion_create_object_v1_request_t *discussion_create_object_v1_request);


// Delete an existing Discussion
//
// 
//
common_response_t*
ObjectDiscussionAPI_discussionDeleteObjectV1(apiClient_t *apiClient, int *pkiDiscussionID);


// Retrieve an existing Discussion
//
// 
//
discussion_get_object_v2_response_t*
ObjectDiscussionAPI_discussionGetObjectV2(apiClient_t *apiClient, int *pkiDiscussionID);


// Patch an existing Discussion
//
// 
//
common_response_t*
ObjectDiscussionAPI_discussionPatchObjectV1(apiClient_t *apiClient, int *pkiDiscussionID, discussion_patch_object_v1_request_t *discussion_patch_object_v1_request);


// Update the read status of the discussion
//
common_response_t*
ObjectDiscussionAPI_discussionUpdateDiscussionreadstatusV1(apiClient_t *apiClient, int *pkiDiscussionID, discussion_update_discussionreadstatus_v1_request_t *discussion_update_discussionreadstatus_v1_request);


