/*
 * lead_get_communication_count_v1_response_m_payload.h
 *
 * Response for GET /1/object/lead/{pkiLeadID}/getCommunicationCount
 */

#ifndef _lead_get_communication_count_v1_response_m_payload_H_
#define _lead_get_communication_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct lead_get_communication_count_v1_response_m_payload_t lead_get_communication_count_v1_response_m_payload_t;




typedef struct lead_get_communication_count_v1_response_m_payload_t {
    int *i_communication_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} lead_get_communication_count_v1_response_m_payload_t;

__attribute__((deprecated)) lead_get_communication_count_v1_response_m_payload_t *lead_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
);

void lead_get_communication_count_v1_response_m_payload_free(lead_get_communication_count_v1_response_m_payload_t *lead_get_communication_count_v1_response_m_payload);

lead_get_communication_count_v1_response_m_payload_t *lead_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *lead_get_communication_count_v1_response_m_payloadJSON);

cJSON *lead_get_communication_count_v1_response_m_payload_convertToJSON(lead_get_communication_count_v1_response_m_payload_t *lead_get_communication_count_v1_response_m_payload);

#endif /* _lead_get_communication_count_v1_response_m_payload_H_ */

