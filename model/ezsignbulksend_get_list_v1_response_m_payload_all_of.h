/*
 * ezsignbulksend_get_list_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _ezsignbulksend_get_list_v1_response_m_payload_all_of_H_
#define _ezsignbulksend_get_list_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_get_list_v1_response_m_payload_all_of_t ezsignbulksend_get_list_v1_response_m_payload_all_of_t;

#include "ezsignbulksend_list_element.h"



typedef struct ezsignbulksend_get_list_v1_response_m_payload_all_of_t {
    list_t *a_obj_ezsignbulksend; //nonprimitive container

} ezsignbulksend_get_list_v1_response_m_payload_all_of_t;

ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_ezsignbulksend
);

void ezsignbulksend_get_list_v1_response_m_payload_all_of_free(ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of);

ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *ezsignbulksend_get_list_v1_response_m_payload_all_ofJSON);

cJSON *ezsignbulksend_get_list_v1_response_m_payload_all_of_convertToJSON(ezsignbulksend_get_list_v1_response_m_payload_all_of_t *ezsignbulksend_get_list_v1_response_m_payload_all_of);

#endif /* _ezsignbulksend_get_list_v1_response_m_payload_all_of_H_ */

