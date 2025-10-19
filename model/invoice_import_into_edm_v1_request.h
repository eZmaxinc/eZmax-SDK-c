/*
 * invoice_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/invoice/{pkiInvoiceID}/importIntoEDM
 */

#ifndef _invoice_import_into_edm_v1_request_H_
#define _invoice_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_import_into_edm_v1_request_t invoice_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct invoice_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} invoice_import_into_edm_v1_request_t;

__attribute__((deprecated)) invoice_import_into_edm_v1_request_t *invoice_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void invoice_import_into_edm_v1_request_free(invoice_import_into_edm_v1_request_t *invoice_import_into_edm_v1_request);

invoice_import_into_edm_v1_request_t *invoice_import_into_edm_v1_request_parseFromJSON(cJSON *invoice_import_into_edm_v1_requestJSON);

cJSON *invoice_import_into_edm_v1_request_convertToJSON(invoice_import_into_edm_v1_request_t *invoice_import_into_edm_v1_request);

#endif /* _invoice_import_into_edm_v1_request_H_ */

