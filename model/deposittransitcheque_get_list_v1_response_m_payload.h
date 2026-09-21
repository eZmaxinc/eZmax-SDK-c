/*
 * deposittransitcheque_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/deposittransitcheque/getList
 */

#ifndef _deposittransitcheque_get_list_v1_response_m_payload_H_
#define _deposittransitcheque_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposittransitcheque_get_list_v1_response_m_payload_t deposittransitcheque_get_list_v1_response_m_payload_t;

#include "deposittransitcheque_list_element.h"



typedef struct deposittransitcheque_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_deposittransitcheque; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} deposittransitcheque_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) deposittransitcheque_get_list_v1_response_m_payload_t *deposittransitcheque_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_deposittransitcheque
);

void deposittransitcheque_get_list_v1_response_m_payload_free(deposittransitcheque_get_list_v1_response_m_payload_t *deposittransitcheque_get_list_v1_response_m_payload);

deposittransitcheque_get_list_v1_response_m_payload_t *deposittransitcheque_get_list_v1_response_m_payload_parseFromJSON(cJSON *deposittransitcheque_get_list_v1_response_m_payloadJSON);

cJSON *deposittransitcheque_get_list_v1_response_m_payload_convertToJSON(deposittransitcheque_get_list_v1_response_m_payload_t *deposittransitcheque_get_list_v1_response_m_payload);

#endif /* _deposittransitcheque_get_list_v1_response_m_payload_H_ */

