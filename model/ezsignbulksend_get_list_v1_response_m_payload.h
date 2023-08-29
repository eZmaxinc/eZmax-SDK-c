/*
 * ezsignbulksend_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignbulksend/getList
 */

#ifndef _ezsignbulksend_get_list_v1_response_m_payload_H_
#define _ezsignbulksend_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_get_list_v1_response_m_payload_t ezsignbulksend_get_list_v1_response_m_payload_t;

#include "ezsignbulksend_list_element.h"



typedef struct ezsignbulksend_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_ezsignbulksend; //nonprimitive container

} ezsignbulksend_get_list_v1_response_m_payload_t;

ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezsignbulksend
);

void ezsignbulksend_get_list_v1_response_m_payload_free(ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload);

ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_get_list_v1_response_m_payloadJSON);

cJSON *ezsignbulksend_get_list_v1_response_m_payload_convertToJSON(ezsignbulksend_get_list_v1_response_m_payload_t *ezsignbulksend_get_list_v1_response_m_payload);

#endif /* _ezsignbulksend_get_list_v1_response_m_payload_H_ */

