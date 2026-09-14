/*
 * deposittransitcheque_get_communication_list_v1_response_m_payload.h
 *
 * Response for GET /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/getCommunicationList
 */

#ifndef _deposittransitcheque_get_communication_list_v1_response_m_payload_H_
#define _deposittransitcheque_get_communication_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposittransitcheque_get_communication_list_v1_response_m_payload_t deposittransitcheque_get_communication_list_v1_response_m_payload_t;

#include "custom_communication_list_element_response.h"



typedef struct deposittransitcheque_get_communication_list_v1_response_m_payload_t {
    list_t *a_obj_communication; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} deposittransitcheque_get_communication_list_v1_response_m_payload_t;

__attribute__((deprecated)) deposittransitcheque_get_communication_list_v1_response_m_payload_t *deposittransitcheque_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
);

void deposittransitcheque_get_communication_list_v1_response_m_payload_free(deposittransitcheque_get_communication_list_v1_response_m_payload_t *deposittransitcheque_get_communication_list_v1_response_m_payload);

deposittransitcheque_get_communication_list_v1_response_m_payload_t *deposittransitcheque_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *deposittransitcheque_get_communication_list_v1_response_m_payloadJSON);

cJSON *deposittransitcheque_get_communication_list_v1_response_m_payload_convertToJSON(deposittransitcheque_get_communication_list_v1_response_m_payload_t *deposittransitcheque_get_communication_list_v1_response_m_payload);

#endif /* _deposittransitcheque_get_communication_list_v1_response_m_payload_H_ */

