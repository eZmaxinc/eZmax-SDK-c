/*
 * supplier_get_communication_count_v1_response_m_payload.h
 *
 * Response for GET /1/object/supplier/{pkiSupplierID}/getCommunicationCount
 */

#ifndef _supplier_get_communication_count_v1_response_m_payload_H_
#define _supplier_get_communication_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supplier_get_communication_count_v1_response_m_payload_t supplier_get_communication_count_v1_response_m_payload_t;




typedef struct supplier_get_communication_count_v1_response_m_payload_t {
    int *i_communication_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} supplier_get_communication_count_v1_response_m_payload_t;

__attribute__((deprecated)) supplier_get_communication_count_v1_response_m_payload_t *supplier_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
);

void supplier_get_communication_count_v1_response_m_payload_free(supplier_get_communication_count_v1_response_m_payload_t *supplier_get_communication_count_v1_response_m_payload);

supplier_get_communication_count_v1_response_m_payload_t *supplier_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *supplier_get_communication_count_v1_response_m_payloadJSON);

cJSON *supplier_get_communication_count_v1_response_m_payload_convertToJSON(supplier_get_communication_count_v1_response_m_payload_t *supplier_get_communication_count_v1_response_m_payload);

#endif /* _supplier_get_communication_count_v1_response_m_payload_H_ */

