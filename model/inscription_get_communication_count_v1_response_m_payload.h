/*
 * inscription_get_communication_count_v1_response_m_payload.h
 *
 * Response for GET /1/object/inscription/{pkiInscriptionID}/getCommunicationCount
 */

#ifndef _inscription_get_communication_count_v1_response_m_payload_H_
#define _inscription_get_communication_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscription_get_communication_count_v1_response_m_payload_t inscription_get_communication_count_v1_response_m_payload_t;




typedef struct inscription_get_communication_count_v1_response_m_payload_t {
    int i_communication_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} inscription_get_communication_count_v1_response_m_payload_t;

__attribute__((deprecated)) inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
);

void inscription_get_communication_count_v1_response_m_payload_free(inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload);

inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *inscription_get_communication_count_v1_response_m_payloadJSON);

cJSON *inscription_get_communication_count_v1_response_m_payload_convertToJSON(inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload);

#endif /* _inscription_get_communication_count_v1_response_m_payload_H_ */

