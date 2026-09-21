/*
 * salary_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/salary/getList
 */

#ifndef _salary_get_list_v1_response_m_payload_H_
#define _salary_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct salary_get_list_v1_response_m_payload_t salary_get_list_v1_response_m_payload_t;

#include "salary_list_element.h"



typedef struct salary_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_salary; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} salary_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) salary_get_list_v1_response_m_payload_t *salary_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_salary
);

void salary_get_list_v1_response_m_payload_free(salary_get_list_v1_response_m_payload_t *salary_get_list_v1_response_m_payload);

salary_get_list_v1_response_m_payload_t *salary_get_list_v1_response_m_payload_parseFromJSON(cJSON *salary_get_list_v1_response_m_payloadJSON);

cJSON *salary_get_list_v1_response_m_payload_convertToJSON(salary_get_list_v1_response_m_payload_t *salary_get_list_v1_response_m_payload);

#endif /* _salary_get_list_v1_response_m_payload_H_ */

