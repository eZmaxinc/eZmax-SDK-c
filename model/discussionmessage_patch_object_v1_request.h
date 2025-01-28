/*
 * discussionmessage_patch_object_v1_request.h
 *
 * Request for PATCH /1/object/discussionmessage/{pkiDiscussionmessageID}
 */

#ifndef _discussionmessage_patch_object_v1_request_H_
#define _discussionmessage_patch_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmessage_patch_object_v1_request_t discussionmessage_patch_object_v1_request_t;

#include "discussionmessage_request_patch.h"



typedef struct discussionmessage_patch_object_v1_request_t {
    struct discussionmessage_request_patch_t *obj_discussionmessage; //model

    int _library_owned; // Is the library responsible for freeing this object?
} discussionmessage_patch_object_v1_request_t;

__attribute__((deprecated)) discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request_create(
    discussionmessage_request_patch_t *obj_discussionmessage
);

void discussionmessage_patch_object_v1_request_free(discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request);

discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request_parseFromJSON(cJSON *discussionmessage_patch_object_v1_requestJSON);

cJSON *discussionmessage_patch_object_v1_request_convertToJSON(discussionmessage_patch_object_v1_request_t *discussionmessage_patch_object_v1_request);

#endif /* _discussionmessage_patch_object_v1_request_H_ */

