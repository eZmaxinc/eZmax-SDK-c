/*
 * variableexpense_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/variableexpense/getList
 */

#ifndef _variableexpense_get_list_v1_response_m_payload_H_
#define _variableexpense_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_get_list_v1_response_m_payload_t variableexpense_get_list_v1_response_m_payload_t;

#include "variableexpense_list_element.h"



typedef struct variableexpense_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_variableexpense; //nonprimitive container

} variableexpense_get_list_v1_response_m_payload_t;

variableexpense_get_list_v1_response_m_payload_t *variableexpense_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_variableexpense
);

void variableexpense_get_list_v1_response_m_payload_free(variableexpense_get_list_v1_response_m_payload_t *variableexpense_get_list_v1_response_m_payload);

variableexpense_get_list_v1_response_m_payload_t *variableexpense_get_list_v1_response_m_payload_parseFromJSON(cJSON *variableexpense_get_list_v1_response_m_payloadJSON);

cJSON *variableexpense_get_list_v1_response_m_payload_convertToJSON(variableexpense_get_list_v1_response_m_payload_t *variableexpense_get_list_v1_response_m_payload);

#endif /* _variableexpense_get_list_v1_response_m_payload_H_ */

