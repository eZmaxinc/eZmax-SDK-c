/*
 * discussionmembership_create_object_v1_response.h
 *
 * Response for POST /1/object/discussionmembership
 */

#ifndef _discussionmembership_create_object_v1_response_H_
#define _discussionmembership_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussionmembership_create_object_v1_response_t discussionmembership_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "discussionmembership_create_object_v1_response_m_payload.h"



typedef struct discussionmembership_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct discussionmembership_create_object_v1_response_m_payload_t *m_payload; //model

} discussionmembership_create_object_v1_response_t;

discussionmembership_create_object_v1_response_t *discussionmembership_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    discussionmembership_create_object_v1_response_m_payload_t *m_payload
);

void discussionmembership_create_object_v1_response_free(discussionmembership_create_object_v1_response_t *discussionmembership_create_object_v1_response);

discussionmembership_create_object_v1_response_t *discussionmembership_create_object_v1_response_parseFromJSON(cJSON *discussionmembership_create_object_v1_responseJSON);

cJSON *discussionmembership_create_object_v1_response_convertToJSON(discussionmembership_create_object_v1_response_t *discussionmembership_create_object_v1_response);

#endif /* _discussionmembership_create_object_v1_response_H_ */

