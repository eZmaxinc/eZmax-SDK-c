/*
 * discussionmessage_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/discussionmessage/{pkiDiscussionmessageID}
 */

#ifndef _discussionmessage_delete_object_v1_response_H_
#define _discussionmessage_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmessage_delete_object_v1_response_t discussionmessage_delete_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct discussionmessage_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} discussionmessage_delete_object_v1_response_t;

discussionmessage_delete_object_v1_response_t *discussionmessage_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void discussionmessage_delete_object_v1_response_free(discussionmessage_delete_object_v1_response_t *discussionmessage_delete_object_v1_response);

discussionmessage_delete_object_v1_response_t *discussionmessage_delete_object_v1_response_parseFromJSON(cJSON *discussionmessage_delete_object_v1_responseJSON);

cJSON *discussionmessage_delete_object_v1_response_convertToJSON(discussionmessage_delete_object_v1_response_t *discussionmessage_delete_object_v1_response);

#endif /* _discussionmessage_delete_object_v1_response_H_ */

