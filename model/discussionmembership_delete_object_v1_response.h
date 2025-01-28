/*
 * discussionmembership_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/discussionmembership/{pkiDiscussionmembershipID}
 */

#ifndef _discussionmembership_delete_object_v1_response_H_
#define _discussionmembership_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmembership_delete_object_v1_response_t discussionmembership_delete_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct discussionmembership_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} discussionmembership_delete_object_v1_response_t;

__attribute__((deprecated)) discussionmembership_delete_object_v1_response_t *discussionmembership_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void discussionmembership_delete_object_v1_response_free(discussionmembership_delete_object_v1_response_t *discussionmembership_delete_object_v1_response);

discussionmembership_delete_object_v1_response_t *discussionmembership_delete_object_v1_response_parseFromJSON(cJSON *discussionmembership_delete_object_v1_responseJSON);

cJSON *discussionmembership_delete_object_v1_response_convertToJSON(discussionmembership_delete_object_v1_response_t *discussionmembership_delete_object_v1_response);

#endif /* _discussionmembership_delete_object_v1_response_H_ */

