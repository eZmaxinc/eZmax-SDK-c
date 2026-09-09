/*
 * reconciliation_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/reconciliation/{pkiReconciliationID}/importIntoEDM
 */

#ifndef _reconciliation_import_into_edm_v1_request_H_
#define _reconciliation_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct reconciliation_import_into_edm_v1_request_t reconciliation_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct reconciliation_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} reconciliation_import_into_edm_v1_request_t;

__attribute__((deprecated)) reconciliation_import_into_edm_v1_request_t *reconciliation_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void reconciliation_import_into_edm_v1_request_free(reconciliation_import_into_edm_v1_request_t *reconciliation_import_into_edm_v1_request);

reconciliation_import_into_edm_v1_request_t *reconciliation_import_into_edm_v1_request_parseFromJSON(cJSON *reconciliation_import_into_edm_v1_requestJSON);

cJSON *reconciliation_import_into_edm_v1_request_convertToJSON(reconciliation_import_into_edm_v1_request_t *reconciliation_import_into_edm_v1_request);

#endif /* _reconciliation_import_into_edm_v1_request_H_ */

