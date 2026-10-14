/*
 * purchase_get_communication_count_v1_response_m_payload.h
 *
 * Response for GET /1/object/purchase/{pkiPurchaseID}/getCommunicationCount
 */

#ifndef _purchase_get_communication_count_v1_response_m_payload_H_
#define _purchase_get_communication_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct purchase_get_communication_count_v1_response_m_payload_t purchase_get_communication_count_v1_response_m_payload_t;




typedef struct purchase_get_communication_count_v1_response_m_payload_t {
    int *i_communication_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} purchase_get_communication_count_v1_response_m_payload_t;

__attribute__((deprecated)) purchase_get_communication_count_v1_response_m_payload_t *purchase_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
);

void purchase_get_communication_count_v1_response_m_payload_free(purchase_get_communication_count_v1_response_m_payload_t *purchase_get_communication_count_v1_response_m_payload);

purchase_get_communication_count_v1_response_m_payload_t *purchase_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *purchase_get_communication_count_v1_response_m_payloadJSON);

cJSON *purchase_get_communication_count_v1_response_m_payload_convertToJSON(purchase_get_communication_count_v1_response_m_payload_t *purchase_get_communication_count_v1_response_m_payload);

#endif /* _purchase_get_communication_count_v1_response_m_payload_H_ */

