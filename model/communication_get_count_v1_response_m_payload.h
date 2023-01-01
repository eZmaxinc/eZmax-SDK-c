/*
 * communication_get_count_v1_response_m_payload.h
 *
 * Payload for GET /1/module/communication/getCount
 */

#ifndef _communication_get_count_v1_response_m_payload_H_
#define _communication_get_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_get_count_v1_response_m_payload_t communication_get_count_v1_response_m_payload_t;




typedef struct communication_get_count_v1_response_m_payload_t {
    int i_communication_count; //numeric

} communication_get_count_v1_response_m_payload_t;

communication_get_count_v1_response_m_payload_t *communication_get_count_v1_response_m_payload_create(
    int i_communication_count
);

void communication_get_count_v1_response_m_payload_free(communication_get_count_v1_response_m_payload_t *communication_get_count_v1_response_m_payload);

communication_get_count_v1_response_m_payload_t *communication_get_count_v1_response_m_payload_parseFromJSON(cJSON *communication_get_count_v1_response_m_payloadJSON);

cJSON *communication_get_count_v1_response_m_payload_convertToJSON(communication_get_count_v1_response_m_payload_t *communication_get_count_v1_response_m_payload);

#endif /* _communication_get_count_v1_response_m_payload_H_ */

