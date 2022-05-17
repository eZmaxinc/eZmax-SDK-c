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

#include "common_get_list_v1_response_m_payload.h"
#include "ezsignfoldertype_get_list_v1_response_m_payload_all_of.h"
#include "ezsignfoldertype_list_element.h"



typedef struct ezsignfoldertype_get_list_v1_response_m_payload_t {
    list_t *a_obj_ezsignfoldertype; //nonprimitive container
    int i_row_returned; //numeric
    int i_row_filtered; //numeric

} ezsignfoldertype_get_list_v1_response_m_payload_t;

ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload_create(
    list_t *a_obj_ezsignfoldertype,
    int i_row_returned,
    int i_row_filtered
);

void ezsignfoldertype_get_list_v1_response_m_payload_free(ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload);

ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsignfoldertype_get_list_v1_response_m_payloadJSON);

cJSON *ezsignfoldertype_get_list_v1_response_m_payload_convertToJSON(ezsignfoldertype_get_list_v1_response_m_payload_t *ezsignfoldertype_get_list_v1_response_m_payload);

#endif /* _ezsignfoldertype_get_list_v1_response_m_payload_H_ */

