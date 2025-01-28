/*
 * discussionmessage_create_object_v1_response.h
 *
 * Response for POST /1/object/discussionmessage
 */

#ifndef _discussionmessage_create_object_v1_response_H_
#define _discussionmessage_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmessage_create_object_v1_response_t discussionmessage_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "discussionmessage_create_object_v1_response_m_payload.h"



typedef struct discussionmessage_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct discussionmessage_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} discussionmessage_create_object_v1_response_t;

__attribute__((deprecated)) discussionmessage_create_object_v1_response_t *discussionmessage_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    discussionmessage_create_object_v1_response_m_payload_t *m_payload
);

void discussionmessage_create_object_v1_response_free(discussionmessage_create_object_v1_response_t *discussionmessage_create_object_v1_response);

discussionmessage_create_object_v1_response_t *discussionmessage_create_object_v1_response_parseFromJSON(cJSON *discussionmessage_create_object_v1_responseJSON);

cJSON *discussionmessage_create_object_v1_response_convertToJSON(discussionmessage_create_object_v1_response_t *discussionmessage_create_object_v1_response);

#endif /* _discussionmessage_create_object_v1_response_H_ */

