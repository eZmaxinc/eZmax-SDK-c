/*
 * communication_get_list_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _communication_get_list_v1_response_m_payload_all_of_H_
#define _communication_get_list_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_get_list_v1_response_m_payload_all_of_t communication_get_list_v1_response_m_payload_all_of_t;

#include "communication_list_element.h"



typedef struct communication_get_list_v1_response_m_payload_all_of_t {
    list_t *a_obj_communication; //nonprimitive container

} communication_get_list_v1_response_m_payload_all_of_t;

communication_get_list_v1_response_m_payload_all_of_t *communication_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_communication
);

void communication_get_list_v1_response_m_payload_all_of_free(communication_get_list_v1_response_m_payload_all_of_t *communication_get_list_v1_response_m_payload_all_of);

communication_get_list_v1_response_m_payload_all_of_t *communication_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *communication_get_list_v1_response_m_payload_all_ofJSON);

cJSON *communication_get_list_v1_response_m_payload_all_of_convertToJSON(communication_get_list_v1_response_m_payload_all_of_t *communication_get_list_v1_response_m_payload_all_of);

#endif /* _communication_get_list_v1_response_m_payload_all_of_H_ */

