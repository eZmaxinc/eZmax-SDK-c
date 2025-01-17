/*
 * ezsignsigningreason_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignsigningreason/getList
 */

#ifndef _ezsignsigningreason_get_list_v1_response_m_payload_H_
#define _ezsignsigningreason_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_get_list_v1_response_m_payload_t ezsignsigningreason_get_list_v1_response_m_payload_t;

#include "ezsignsigningreason_list_element.h"



typedef struct ezsignsigningreason_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_ezsignsigningreason; //nonprimitive container

} ezsignsigningreason_get_list_v1_response_m_payload_t;

ezsignsigningreason_get_list_v1_response_m_payload_t *ezsignsigningreason_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_ezsignsigningreason
);

void ezsignsigningreason_get_list_v1_response_m_payload_free(ezsignsigningreason_get_list_v1_response_m_payload_t *ezsignsigningreason_get_list_v1_response_m_payload);

ezsignsigningreason_get_list_v1_response_m_payload_t *ezsignsigningreason_get_list_v1_response_m_payload_parseFromJSON(cJSON *ezsignsigningreason_get_list_v1_response_m_payloadJSON);

cJSON *ezsignsigningreason_get_list_v1_response_m_payload_convertToJSON(ezsignsigningreason_get_list_v1_response_m_payload_t *ezsignsigningreason_get_list_v1_response_m_payload);

#endif /* _ezsignsigningreason_get_list_v1_response_m_payload_H_ */

