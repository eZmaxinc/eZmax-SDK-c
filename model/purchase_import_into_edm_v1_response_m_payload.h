/*
 * purchase_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/purchase/{pkiPurchaseID}/importIntoEDM
 */

#ifndef _purchase_import_into_edm_v1_response_m_payload_H_
#define _purchase_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct purchase_import_into_edm_v1_response_m_payload_t purchase_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct purchase_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} purchase_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) purchase_import_into_edm_v1_response_m_payload_t *purchase_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void purchase_import_into_edm_v1_response_m_payload_free(purchase_import_into_edm_v1_response_m_payload_t *purchase_import_into_edm_v1_response_m_payload);

purchase_import_into_edm_v1_response_m_payload_t *purchase_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *purchase_import_into_edm_v1_response_m_payloadJSON);

cJSON *purchase_import_into_edm_v1_response_m_payload_convertToJSON(purchase_import_into_edm_v1_response_m_payload_t *purchase_import_into_edm_v1_response_m_payload);

#endif /* _purchase_import_into_edm_v1_response_m_payload_H_ */

