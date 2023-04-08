/*
 * variableexpense_get_list_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _variableexpense_get_list_v1_response_m_payload_all_of_H_
#define _variableexpense_get_list_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_get_list_v1_response_m_payload_all_of_t variableexpense_get_list_v1_response_m_payload_all_of_t;

#include "variableexpense_list_element.h"



typedef struct variableexpense_get_list_v1_response_m_payload_all_of_t {
    list_t *a_obj_variableexpense; //nonprimitive container

} variableexpense_get_list_v1_response_m_payload_all_of_t;

variableexpense_get_list_v1_response_m_payload_all_of_t *variableexpense_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_variableexpense
);

void variableexpense_get_list_v1_response_m_payload_all_of_free(variableexpense_get_list_v1_response_m_payload_all_of_t *variableexpense_get_list_v1_response_m_payload_all_of);

variableexpense_get_list_v1_response_m_payload_all_of_t *variableexpense_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *variableexpense_get_list_v1_response_m_payload_all_ofJSON);

cJSON *variableexpense_get_list_v1_response_m_payload_all_of_convertToJSON(variableexpense_get_list_v1_response_m_payload_all_of_t *variableexpense_get_list_v1_response_m_payload_all_of);

#endif /* _variableexpense_get_list_v1_response_m_payload_all_of_H_ */

