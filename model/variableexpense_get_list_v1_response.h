/*
 * variableexpense_get_list_v1_response.h
 *
 * Response for GET /1/object/variableexpense/getList
 */

#ifndef _variableexpense_get_list_v1_response_H_
#define _variableexpense_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_get_list_v1_response_t variableexpense_get_list_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "variableexpense_get_list_v1_response_m_payload.h"



typedef struct variableexpense_get_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct variableexpense_get_list_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} variableexpense_get_list_v1_response_t;

__attribute__((deprecated)) variableexpense_get_list_v1_response_t *variableexpense_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    variableexpense_get_list_v1_response_m_payload_t *m_payload
);

void variableexpense_get_list_v1_response_free(variableexpense_get_list_v1_response_t *variableexpense_get_list_v1_response);

variableexpense_get_list_v1_response_t *variableexpense_get_list_v1_response_parseFromJSON(cJSON *variableexpense_get_list_v1_responseJSON);

cJSON *variableexpense_get_list_v1_response_convertToJSON(variableexpense_get_list_v1_response_t *variableexpense_get_list_v1_response);

#endif /* _variableexpense_get_list_v1_response_H_ */

