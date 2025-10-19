/*
 * invoice_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/invoice/{pkiInvoiceID}/importIntoEDM
 */

#ifndef _invoice_import_into_edm_v1_response_m_payload_H_
#define _invoice_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_import_into_edm_v1_response_m_payload_t invoice_import_into_edm_v1_response_m_payload_t;




typedef struct invoice_import_into_edm_v1_response_m_payload_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} invoice_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) invoice_import_into_edm_v1_response_m_payload_t *invoice_import_into_edm_v1_response_m_payload_create(
    list_t *a_pki_attachment_id
);

void invoice_import_into_edm_v1_response_m_payload_free(invoice_import_into_edm_v1_response_m_payload_t *invoice_import_into_edm_v1_response_m_payload);

invoice_import_into_edm_v1_response_m_payload_t *invoice_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *invoice_import_into_edm_v1_response_m_payloadJSON);

cJSON *invoice_import_into_edm_v1_response_m_payload_convertToJSON(invoice_import_into_edm_v1_response_m_payload_t *invoice_import_into_edm_v1_response_m_payload);

#endif /* _invoice_import_into_edm_v1_response_m_payload_H_ */

