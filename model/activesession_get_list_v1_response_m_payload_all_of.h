/*
 * activesession_get_list_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _activesession_get_list_v1_response_m_payload_all_of_H_
#define _activesession_get_list_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_get_list_v1_response_m_payload_all_of_t activesession_get_list_v1_response_m_payload_all_of_t;

#include "activesession_list_element.h"



typedef struct activesession_get_list_v1_response_m_payload_all_of_t {
    list_t *a_obj_activesession; //nonprimitive container

} activesession_get_list_v1_response_m_payload_all_of_t;

activesession_get_list_v1_response_m_payload_all_of_t *activesession_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_activesession
);

void activesession_get_list_v1_response_m_payload_all_of_free(activesession_get_list_v1_response_m_payload_all_of_t *activesession_get_list_v1_response_m_payload_all_of);

activesession_get_list_v1_response_m_payload_all_of_t *activesession_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *activesession_get_list_v1_response_m_payload_all_ofJSON);

cJSON *activesession_get_list_v1_response_m_payload_all_of_convertToJSON(activesession_get_list_v1_response_m_payload_all_of_t *activesession_get_list_v1_response_m_payload_all_of);

#endif /* _activesession_get_list_v1_response_m_payload_all_of_H_ */

