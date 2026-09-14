/*
 * externalbroker_get_communication_count_v1_response_m_payload.h
 *
 * Response for GET /1/object/externalbroker/{pkiExternalbrokerID}/getCommunicationCount
 */

#ifndef _externalbroker_get_communication_count_v1_response_m_payload_H_
#define _externalbroker_get_communication_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct externalbroker_get_communication_count_v1_response_m_payload_t externalbroker_get_communication_count_v1_response_m_payload_t;




typedef struct externalbroker_get_communication_count_v1_response_m_payload_t {
    int *i_communication_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} externalbroker_get_communication_count_v1_response_m_payload_t;

__attribute__((deprecated)) externalbroker_get_communication_count_v1_response_m_payload_t *externalbroker_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
);

void externalbroker_get_communication_count_v1_response_m_payload_free(externalbroker_get_communication_count_v1_response_m_payload_t *externalbroker_get_communication_count_v1_response_m_payload);

externalbroker_get_communication_count_v1_response_m_payload_t *externalbroker_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *externalbroker_get_communication_count_v1_response_m_payloadJSON);

cJSON *externalbroker_get_communication_count_v1_response_m_payload_convertToJSON(externalbroker_get_communication_count_v1_response_m_payload_t *externalbroker_get_communication_count_v1_response_m_payload);

#endif /* _externalbroker_get_communication_count_v1_response_m_payload_H_ */

