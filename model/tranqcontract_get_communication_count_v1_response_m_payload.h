/*
 * tranqcontract_get_communication_count_v1_response_m_payload.h
 *
 * Response for GET /1/object/tranqcontract/{pkiTranqcontractID}/getCommunicationCount
 */

#ifndef _tranqcontract_get_communication_count_v1_response_m_payload_H_
#define _tranqcontract_get_communication_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tranqcontract_get_communication_count_v1_response_m_payload_t tranqcontract_get_communication_count_v1_response_m_payload_t;




typedef struct tranqcontract_get_communication_count_v1_response_m_payload_t {
    int i_communication_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} tranqcontract_get_communication_count_v1_response_m_payload_t;

__attribute__((deprecated)) tranqcontract_get_communication_count_v1_response_m_payload_t *tranqcontract_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
);

void tranqcontract_get_communication_count_v1_response_m_payload_free(tranqcontract_get_communication_count_v1_response_m_payload_t *tranqcontract_get_communication_count_v1_response_m_payload);

tranqcontract_get_communication_count_v1_response_m_payload_t *tranqcontract_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *tranqcontract_get_communication_count_v1_response_m_payloadJSON);

cJSON *tranqcontract_get_communication_count_v1_response_m_payload_convertToJSON(tranqcontract_get_communication_count_v1_response_m_payload_t *tranqcontract_get_communication_count_v1_response_m_payload);

#endif /* _tranqcontract_get_communication_count_v1_response_m_payload_H_ */

