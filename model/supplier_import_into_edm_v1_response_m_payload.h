/*
 * supplier_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/supplier/{pkiSupplierID}/importIntoEDM
 */

#ifndef _supplier_import_into_edm_v1_response_m_payload_H_
#define _supplier_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supplier_import_into_edm_v1_response_m_payload_t supplier_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct supplier_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} supplier_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) supplier_import_into_edm_v1_response_m_payload_t *supplier_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void supplier_import_into_edm_v1_response_m_payload_free(supplier_import_into_edm_v1_response_m_payload_t *supplier_import_into_edm_v1_response_m_payload);

supplier_import_into_edm_v1_response_m_payload_t *supplier_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *supplier_import_into_edm_v1_response_m_payloadJSON);

cJSON *supplier_import_into_edm_v1_response_m_payload_convertToJSON(supplier_import_into_edm_v1_response_m_payload_t *supplier_import_into_edm_v1_response_m_payload);

#endif /* _supplier_import_into_edm_v1_response_m_payload_H_ */

