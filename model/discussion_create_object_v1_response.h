/*
 * discussion_create_object_v1_response.h
 *
 * Response for POST /1/object/discussion
 */

#ifndef _discussion_create_object_v1_response_H_
#define _discussion_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_create_object_v1_response_t discussion_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "discussion_create_object_v1_response_m_payload.h"



typedef struct discussion_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct discussion_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} discussion_create_object_v1_response_t;

__attribute__((deprecated)) discussion_create_object_v1_response_t *discussion_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    discussion_create_object_v1_response_m_payload_t *m_payload
);

void discussion_create_object_v1_response_free(discussion_create_object_v1_response_t *discussion_create_object_v1_response);

discussion_create_object_v1_response_t *discussion_create_object_v1_response_parseFromJSON(cJSON *discussion_create_object_v1_responseJSON);

cJSON *discussion_create_object_v1_response_convertToJSON(discussion_create_object_v1_response_t *discussion_create_object_v1_response);

#endif /* _discussion_create_object_v1_response_H_ */

