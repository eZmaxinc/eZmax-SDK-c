/*
 * employee_get_list_v1_response.h
 *
 * Response for GET /1/object/employee/getList
 */

#ifndef _employee_get_list_v1_response_H_
#define _employee_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_get_list_v1_response_t employee_get_list_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "employee_get_list_v1_response_m_payload.h"



typedef struct employee_get_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct employee_get_list_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} employee_get_list_v1_response_t;

__attribute__((deprecated)) employee_get_list_v1_response_t *employee_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    employee_get_list_v1_response_m_payload_t *m_payload
);

void employee_get_list_v1_response_free(employee_get_list_v1_response_t *employee_get_list_v1_response);

employee_get_list_v1_response_t *employee_get_list_v1_response_parseFromJSON(cJSON *employee_get_list_v1_responseJSON);

cJSON *employee_get_list_v1_response_convertToJSON(employee_get_list_v1_response_t *employee_get_list_v1_response);

#endif /* _employee_get_list_v1_response_H_ */

