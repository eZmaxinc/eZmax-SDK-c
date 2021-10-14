/*
 * ezsignfolder_get_list_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _ezsignfolder_get_list_v1_response_m_payload_all_of_H_
#define _ezsignfolder_get_list_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_get_list_v1_response_m_payload_all_of_t ezsignfolder_get_list_v1_response_m_payload_all_of_t;

#include "ezsignfolder_list_element.h"



typedef struct ezsignfolder_get_list_v1_response_m_payload_all_of_t {
    list_t *a_obj_ezsignfolder; //nonprimitive container

} ezsignfolder_get_list_v1_response_m_payload_all_of_t;

ezsignfolder_get_list_v1_response_m_payload_all_of_t *ezsignfolder_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_ezsignfolder
);

void ezsignfolder_get_list_v1_response_m_payload_all_of_free(ezsignfolder_get_list_v1_response_m_payload_all_of_t *ezsignfolder_get_list_v1_response_m_payload_all_of);

ezsignfolder_get_list_v1_response_m_payload_all_of_t *ezsignfolder_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *ezsignfolder_get_list_v1_response_m_payload_all_ofJSON);

cJSON *ezsignfolder_get_list_v1_response_m_payload_all_of_convertToJSON(ezsignfolder_get_list_v1_response_m_payload_all_of_t *ezsignfolder_get_list_v1_response_m_payload_all_of);

#endif /* _ezsignfolder_get_list_v1_response_m_payload_all_of_H_ */

