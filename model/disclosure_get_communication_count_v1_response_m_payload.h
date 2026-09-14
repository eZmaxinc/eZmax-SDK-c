/*
 * disclosure_get_communication_count_v1_response_m_payload.h
 *
 * Response for GET /1/object/disclosure/{pkiDisclosureID}/getCommunicationCount
 */

#ifndef _disclosure_get_communication_count_v1_response_m_payload_H_
#define _disclosure_get_communication_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct disclosure_get_communication_count_v1_response_m_payload_t disclosure_get_communication_count_v1_response_m_payload_t;




typedef struct disclosure_get_communication_count_v1_response_m_payload_t {
    int *i_communication_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} disclosure_get_communication_count_v1_response_m_payload_t;

__attribute__((deprecated)) disclosure_get_communication_count_v1_response_m_payload_t *disclosure_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
);

void disclosure_get_communication_count_v1_response_m_payload_free(disclosure_get_communication_count_v1_response_m_payload_t *disclosure_get_communication_count_v1_response_m_payload);

disclosure_get_communication_count_v1_response_m_payload_t *disclosure_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *disclosure_get_communication_count_v1_response_m_payloadJSON);

cJSON *disclosure_get_communication_count_v1_response_m_payload_convertToJSON(disclosure_get_communication_count_v1_response_m_payload_t *disclosure_get_communication_count_v1_response_m_payload);

#endif /* _disclosure_get_communication_count_v1_response_m_payload_H_ */

