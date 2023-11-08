/*
 * invoice_get_communication_list_v1_response_m_payload.h
 *
 * Response for GET /1/object/invoice/{pkiInvoiceID}/getCommunicationList
 */

#ifndef _invoice_get_communication_list_v1_response_m_payload_H_
#define _invoice_get_communication_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_get_communication_list_v1_response_m_payload_t invoice_get_communication_list_v1_response_m_payload_t;

#include "custom_communication_list_element_response.h"



typedef struct invoice_get_communication_list_v1_response_m_payload_t {
    list_t *a_obj_communication; //nonprimitive container

} invoice_get_communication_list_v1_response_m_payload_t;

invoice_get_communication_list_v1_response_m_payload_t *invoice_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
);

void invoice_get_communication_list_v1_response_m_payload_free(invoice_get_communication_list_v1_response_m_payload_t *invoice_get_communication_list_v1_response_m_payload);

invoice_get_communication_list_v1_response_m_payload_t *invoice_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *invoice_get_communication_list_v1_response_m_payloadJSON);

cJSON *invoice_get_communication_list_v1_response_m_payload_convertToJSON(invoice_get_communication_list_v1_response_m_payload_t *invoice_get_communication_list_v1_response_m_payload);

#endif /* _invoice_get_communication_list_v1_response_m_payload_H_ */

