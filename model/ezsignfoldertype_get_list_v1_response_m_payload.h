/*
 * ezsignfoldertype_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignfoldertype/getList
 */

#ifndef _ezsignfoldertype_get_list_v1_response_m_payload_H_
#define _ezsignfoldertype_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_get_list_v1_response_m_payload_t ezsignfoldertype_get_list_v1_response_m_payload_t;

#include "ezsignfoldertype_list_element.h"



typedef struct ezsignfoldertype_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_ezsignfoldertype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldertype_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezsignfoldertype
);

void ezsignfoldertype_get_list_v1_response_m_payload_free(ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload);

ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsignfoldertype_get_list_v1_response_m_payloadJSON);

cJSON *ezsignfoldertype_get_list_v1_response_m_payload_convertToJSON(ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload);

#endif /* _ezsignfoldertype_get_list_v1_response_m_payload_H_ */

