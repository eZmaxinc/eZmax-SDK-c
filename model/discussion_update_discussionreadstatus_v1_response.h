/*
 * discussion_update_discussionreadstatus_v1_response.h
 *
 * Response for GET /1/object/discussion/{pkiDiscussionID}/updateDiscussionreadstatus
 */

#ifndef _discussion_update_discussionreadstatus_v1_response_H_
#define _discussion_update_discussionreadstatus_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_update_discussionreadstatus_v1_response_t discussion_update_discussionreadstatus_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct discussion_update_discussionreadstatus_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} discussion_update_discussionreadstatus_v1_response_t;

__attribute__((deprecated)) discussion_update_discussionreadstatus_v1_response_t *discussion_update_discussionreadstatus_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void discussion_update_discussionreadstatus_v1_response_free(discussion_update_discussionreadstatus_v1_response_t *discussion_update_discussionreadstatus_v1_response);

discussion_update_discussionreadstatus_v1_response_t *discussion_update_discussionreadstatus_v1_response_parseFromJSON(cJSON *discussion_update_discussionreadstatus_v1_responseJSON);

cJSON *discussion_update_discussionreadstatus_v1_response_convertToJSON(discussion_update_discussionreadstatus_v1_response_t *discussion_update_discussionreadstatus_v1_response);

#endif /* _discussion_update_discussionreadstatus_v1_response_H_ */

