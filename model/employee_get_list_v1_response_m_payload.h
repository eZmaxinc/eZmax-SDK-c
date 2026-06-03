/*
 * employee_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/employee/getList
 */

#ifndef _employee_get_list_v1_response_m_payload_H_
#define _employee_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_get_list_v1_response_m_payload_t employee_get_list_v1_response_m_payload_t;

#include "employee_list_element.h"



typedef struct employee_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_employee; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} employee_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) employee_get_list_v1_response_m_payload_t *employee_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_employee
);

void employee_get_list_v1_response_m_payload_free(employee_get_list_v1_response_m_payload_t *employee_get_list_v1_response_m_payload);

employee_get_list_v1_response_m_payload_t *employee_get_list_v1_response_m_payload_parseFromJSON(cJSON *employee_get_list_v1_response_m_payloadJSON);

cJSON *employee_get_list_v1_response_m_payload_convertToJSON(employee_get_list_v1_response_m_payload_t *employee_get_list_v1_response_m_payload);

#endif /* _employee_get_list_v1_response_m_payload_H_ */

