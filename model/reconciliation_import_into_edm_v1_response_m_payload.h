/*
 * reconciliation_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/reconciliation/{pkiReconciliationID}/importIntoEDM
 */

#ifndef _reconciliation_import_into_edm_v1_response_m_payload_H_
#define _reconciliation_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct reconciliation_import_into_edm_v1_response_m_payload_t reconciliation_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct reconciliation_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} reconciliation_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) reconciliation_import_into_edm_v1_response_m_payload_t *reconciliation_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void reconciliation_import_into_edm_v1_response_m_payload_free(reconciliation_import_into_edm_v1_response_m_payload_t *reconciliation_import_into_edm_v1_response_m_payload);

reconciliation_import_into_edm_v1_response_m_payload_t *reconciliation_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *reconciliation_import_into_edm_v1_response_m_payloadJSON);

cJSON *reconciliation_import_into_edm_v1_response_m_payload_convertToJSON(reconciliation_import_into_edm_v1_response_m_payload_t *reconciliation_import_into_edm_v1_response_m_payload);

#endif /* _reconciliation_import_into_edm_v1_response_m_payload_H_ */

