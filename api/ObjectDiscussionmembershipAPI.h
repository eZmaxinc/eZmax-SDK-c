#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/discussionmembership_create_object_v1_request.h"
#include "../model/discussionmembership_create_object_v1_response.h"


// Create a new Discussionmembership
//
// The endpoint allows to create one or many elements at once.
//
discussionmembership_create_object_v1_response_t*
ObjectDiscussionmembershipAPI_discussionmembershipCreateObjectV1(apiClient_t *apiClient, discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request);


// Delete an existing Discussionmembership
//
// 
//
common_response_t*
ObjectDiscussionmembershipAPI_discussionmembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiDiscussionmembershipID);


