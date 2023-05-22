/*
 * sessionhistory_get_list_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _sessionhistory_get_list_v1_response_m_payload_all_of_H_
#define _sessionhistory_get_list_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sessionhistory_get_list_v1_response_m_payload_all_of_t sessionhistory_get_list_v1_response_m_payload_all_of_t;

#include "sessionhistory_list_element.h"



typedef struct sessionhistory_get_list_v1_response_m_payload_all_of_t {
    list_t *a_obj_sessionhistory; //nonprimitive container

} sessionhistory_get_list_v1_response_m_payload_all_of_t;

sessionhistory_get_list_v1_response_m_payload_all_of_t *sessionhistory_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_sessionhistory
);

void sessionhistory_get_list_v1_response_m_payload_all_of_free(sessionhistory_get_list_v1_response_m_payload_all_of_t *sessionhistory_get_list_v1_response_m_payload_all_of);

sessionhistory_get_list_v1_response_m_payload_all_of_t *sessionhistory_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *sessionhistory_get_list_v1_response_m_payload_all_ofJSON);

cJSON *sessionhistory_get_list_v1_response_m_payload_all_of_convertToJSON(sessionhistory_get_list_v1_response_m_payload_all_of_t *sessionhistory_get_list_v1_response_m_payload_all_of);

#endif /* _sessionhistory_get_list_v1_response_m_payload_all_of_H_ */

