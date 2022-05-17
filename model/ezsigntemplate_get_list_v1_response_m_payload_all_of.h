/*
 * ezsigntemplate_get_list_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplate_get_list_v1_response_m_payload_all_of_H_
#define _ezsigntemplate_get_list_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_get_list_v1_response_m_payload_all_of_t ezsigntemplate_get_list_v1_response_m_payload_all_of_t;

#include "ezsigntemplate_list_element.h"



typedef struct ezsigntemplate_get_list_v1_response_m_payload_all_of_t {
    list_t *a_obj_ezsigntemplate; //nonprimitive container

} ezsigntemplate_get_list_v1_response_m_payload_all_of_t;

ezsigntemplate_get_list_v1_response_m_payload_all_of_t *ezsigntemplate_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_ezsigntemplate
);

void ezsigntemplate_get_list_v1_response_m_payload_all_of_free(ezsigntemplate_get_list_v1_response_m_payload_all_of_t *ezsigntemplate_get_list_v1_response_m_payload_all_of);

ezsigntemplate_get_list_v1_response_m_payload_all_of_t *ezsigntemplate_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *ezsigntemplate_get_list_v1_response_m_payload_all_ofJSON);

cJSON *ezsigntemplate_get_list_v1_response_m_payload_all_of_convertToJSON(ezsigntemplate_get_list_v1_response_m_payload_all_of_t *ezsigntemplate_get_list_v1_response_m_payload_all_of);

#endif /* _ezsigntemplate_get_list_v1_response_m_payload_all_of_H_ */

