/*
 * invoice_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/invoice/{pkiInvoiceID}/importIntoEDM
 */

#ifndef _invoice_import_into_edm_v1_response_H_
#define _invoice_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_import_into_edm_v1_response_t invoice_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "invoice_import_into_edm_v1_response_m_payload.h"



typedef struct invoice_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct invoice_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} invoice_import_into_edm_v1_response_t;

__attribute__((deprecated)) invoice_import_into_edm_v1_response_t *invoice_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    invoice_import_into_edm_v1_response_m_payload_t *m_payload
);

void invoice_import_into_edm_v1_response_free(invoice_import_into_edm_v1_response_t *invoice_import_into_edm_v1_response);

invoice_import_into_edm_v1_response_t *invoice_import_into_edm_v1_response_parseFromJSON(cJSON *invoice_import_into_edm_v1_responseJSON);

cJSON *invoice_import_into_edm_v1_response_convertToJSON(invoice_import_into_edm_v1_response_t *invoice_import_into_edm_v1_response);

#endif /* _invoice_import_into_edm_v1_response_H_ */

