/*
 * discussion_patch_object_v1_request.h
 *
 * Request for PATCH /1/object/discussion/{pkiDiscussionID}
 */

#ifndef _discussion_patch_object_v1_request_H_
#define _discussion_patch_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_patch_object_v1_request_t discussion_patch_object_v1_request_t;

#include "discussion_request_patch.h"



typedef struct discussion_patch_object_v1_request_t {
    struct discussion_request_patch_t *obj_discussion; //model

} discussion_patch_object_v1_request_t;

discussion_patch_object_v1_request_t *discussion_patch_object_v1_request_create(
    discussion_request_patch_t *obj_discussion
);

void discussion_patch_object_v1_request_free(discussion_patch_object_v1_request_t *discussion_patch_object_v1_request);

discussion_patch_object_v1_request_t *discussion_patch_object_v1_request_parseFromJSON(cJSON *discussion_patch_object_v1_requestJSON);

cJSON *discussion_patch_object_v1_request_convertToJSON(discussion_patch_object_v1_request_t *discussion_patch_object_v1_request);

#endif /* _discussion_patch_object_v1_request_H_ */

