/*
 * ezsignfoldertype_get_list_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _ezsignfoldertype_get_list_v1_response_m_payload_all_of_H_
#define _ezsignfoldertype_get_list_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_get_list_v1_response_m_payload_all_of_t ezsignfoldertype_get_list_v1_response_m_payload_all_of_t;

#include "ezsignfoldertype_list_element.h"



typedef struct ezsignfoldertype_get_list_v1_response_m_payload_all_of_t {
    list_t *a_obj_ezsignfoldertype; //nonprimitive container

} ezsignfoldertype_get_list_v1_response_m_payload_all_of_t;

ezsignfoldertype_get_list_v1_response_m_payload_all_of_t *ezsignfoldertype_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_ezsignfoldertype
);

void ezsignfoldertype_get_list_v1_response_m_payload_all_of_free(ezsignfoldertype_get_list_v1_response_m_payload_all_of_t *ezsignfoldertype_get_list_v1_response_m_payload_all_of);

ezsignfoldertype_get_list_v1_response_m_payload_all_of_t *ezsignfoldertype_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *ezsignfoldertype_get_list_v1_response_m_payload_all_ofJSON);

cJSON *ezsignfoldertype_get_list_v1_response_m_payload_all_of_convertToJSON(ezsignfoldertype_get_list_v1_response_m_payload_all_of_t *ezsignfoldertype_get_list_v1_response_m_payload_all_of);

#endif /* _ezsignfoldertype_get_list_v1_response_m_payload_all_of_H_ */
