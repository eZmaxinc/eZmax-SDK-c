/*
 * inscriptiontemp_get_communication_count_v1_response_m_payload.h
 *
 * Response for GET /1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationCount
 */

#ifndef _inscriptiontemp_get_communication_count_v1_response_m_payload_H_
#define _inscriptiontemp_get_communication_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptiontemp_get_communication_count_v1_response_m_payload_t inscriptiontemp_get_communication_count_v1_response_m_payload_t;




typedef struct inscriptiontemp_get_communication_count_v1_response_m_payload_t {
    int i_communication_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptiontemp_get_communication_count_v1_response_m_payload_t;

__attribute__((deprecated)) inscriptiontemp_get_communication_count_v1_response_m_payload_t *inscriptiontemp_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
);

void inscriptiontemp_get_communication_count_v1_response_m_payload_free(inscriptiontemp_get_communication_count_v1_response_m_payload_t *inscriptiontemp_get_communication_count_v1_response_m_payload);

inscriptiontemp_get_communication_count_v1_response_m_payload_t *inscriptiontemp_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *inscriptiontemp_get_communication_count_v1_response_m_payloadJSON);

cJSON *inscriptiontemp_get_communication_count_v1_response_m_payload_convertToJSON(inscriptiontemp_get_communication_count_v1_response_m_payload_t *inscriptiontemp_get_communication_count_v1_response_m_payload);

#endif /* _inscriptiontemp_get_communication_count_v1_response_m_payload_H_ */

