/*
 * discussion_get_object_v2_response.h
 *
 * Response for GET /2/object/discussion/{pkiDiscussionID}
 */

#ifndef _discussion_get_object_v2_response_H_
#define _discussion_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_get_object_v2_response_t discussion_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "discussion_get_object_v2_response_m_payload.h"



typedef struct discussion_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct discussion_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} discussion_get_object_v2_response_t;

__attribute__((deprecated)) discussion_get_object_v2_response_t *discussion_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    discussion_get_object_v2_response_m_payload_t *m_payload
);

void discussion_get_object_v2_response_free(discussion_get_object_v2_response_t *discussion_get_object_v2_response);

discussion_get_object_v2_response_t *discussion_get_object_v2_response_parseFromJSON(cJSON *discussion_get_object_v2_responseJSON);

cJSON *discussion_get_object_v2_response_convertToJSON(discussion_get_object_v2_response_t *discussion_get_object_v2_response);

#endif /* _discussion_get_object_v2_response_H_ */

