/*
 * ezsigntemplatepublic_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigntemplatepublic/getList
 */

#ifndef _ezsigntemplatepublic_get_list_v1_response_m_payload_H_
#define _ezsigntemplatepublic_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_get_list_v1_response_m_payload_t ezsigntemplatepublic_get_list_v1_response_m_payload_t;

#include "common_get_list_v1_response_m_payload.h"
#include "ezsigntemplatepublic_list_element.h"



typedef struct ezsigntemplatepublic_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_ezsigntemplatepublic; //nonprimitive container

} ezsigntemplatepublic_get_list_v1_response_m_payload_t;

ezsigntemplatepublic_get_list_v1_response_m_payload_t *ezsigntemplatepublic_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezsigntemplatepublic
);

void ezsigntemplatepublic_get_list_v1_response_m_payload_free(ezsigntemplatepublic_get_list_v1_response_m_payload_t *ezsigntemplatepublic_get_list_v1_response_m_payload);

ezsigntemplatepublic_get_list_v1_response_m_payload_t *ezsigntemplatepublic_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_get_list_v1_response_m_payloadJSON);

cJSON *ezsigntemplatepublic_get_list_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_get_list_v1_response_m_payload_t *ezsigntemplatepublic_get_list_v1_response_m_payload);

#endif /* _ezsigntemplatepublic_get_list_v1_response_m_payload_H_ */

