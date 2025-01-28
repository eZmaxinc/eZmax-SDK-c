/*
 * invoice_get_communication_count_v1_response_m_payload.h
 *
 * Response for GET /1/object/invoice/{pkiInvoiceID}/getCommunicationCount
 */

#ifndef _invoice_get_communication_count_v1_response_m_payload_H_
#define _invoice_get_communication_count_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_get_communication_count_v1_response_m_payload_t invoice_get_communication_count_v1_response_m_payload_t;




typedef struct invoice_get_communication_count_v1_response_m_payload_t {
    int i_communication_count; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} invoice_get_communication_count_v1_response_m_payload_t;

__attribute__((deprecated)) invoice_get_communication_count_v1_response_m_payload_t *invoice_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
);

void invoice_get_communication_count_v1_response_m_payload_free(invoice_get_communication_count_v1_response_m_payload_t *invoice_get_communication_count_v1_response_m_payload);

invoice_get_communication_count_v1_response_m_payload_t *invoice_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *invoice_get_communication_count_v1_response_m_payloadJSON);

cJSON *invoice_get_communication_count_v1_response_m_payload_convertToJSON(invoice_get_communication_count_v1_response_m_payload_t *invoice_get_communication_count_v1_response_m_payload);

#endif /* _invoice_get_communication_count_v1_response_m_payload_H_ */

