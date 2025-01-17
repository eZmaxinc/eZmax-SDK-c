/*
 * ezsigntemplate_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigntemplate/getList
 */

#ifndef _ezsigntemplate_get_list_v1_response_m_payload_H_
#define _ezsigntemplate_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_get_list_v1_response_m_payload_t ezsigntemplate_get_list_v1_response_m_payload_t;

#include "common_get_list_v1_response_m_payload.h"
#include "ezsigntemplate_list_element.h"



typedef struct ezsigntemplate_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_ezsigntemplate; //nonprimitive container

} ezsigntemplate_get_list_v1_response_m_payload_t;

ezsigntemplate_get_list_v1_response_m_payload_t *ezsigntemplate_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezsigntemplate
);

void ezsigntemplate_get_list_v1_response_m_payload_free(ezsigntemplate_get_list_v1_response_m_payload_t *ezsigntemplate_get_list_v1_response_m_payload);

ezsigntemplate_get_list_v1_response_m_payload_t *ezsigntemplate_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplate_get_list_v1_response_m_payloadJSON);

cJSON *ezsigntemplate_get_list_v1_response_m_payload_convertToJSON(ezsigntemplate_get_list_v1_response_m_payload_t *ezsigntemplate_get_list_v1_response_m_payload);

#endif /* _ezsigntemplate_get_list_v1_response_m_payload_H_ */

