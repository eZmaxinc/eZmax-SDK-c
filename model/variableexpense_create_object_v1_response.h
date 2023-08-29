/*
 * variableexpense_create_object_v1_response.h
 *
 * Response for POST /1/object/variableexpense
 */

#ifndef _variableexpense_create_object_v1_response_H_
#define _variableexpense_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_create_object_v1_response_t variableexpense_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "variableexpense_create_object_v1_response_m_payload.h"



typedef struct variableexpense_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct variableexpense_create_object_v1_response_m_payload_t *m_payload; //model

} variableexpense_create_object_v1_response_t;

variableexpense_create_object_v1_response_t *variableexpense_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    variableexpense_create_object_v1_response_m_payload_t *m_payload
);

void variableexpense_create_object_v1_response_free(variableexpense_create_object_v1_response_t *variableexpense_create_object_v1_response);

variableexpense_create_object_v1_response_t *variableexpense_create_object_v1_response_parseFromJSON(cJSON *variableexpense_create_object_v1_responseJSON);

cJSON *variableexpense_create_object_v1_response_convertToJSON(variableexpense_create_object_v1_response_t *variableexpense_create_object_v1_response);

#endif /* _variableexpense_create_object_v1_response_H_ */

