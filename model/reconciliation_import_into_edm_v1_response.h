/*
 * reconciliation_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/reconciliation/{pkiReconciliationID}/importIntoEDM
 */

#ifndef _reconciliation_import_into_edm_v1_response_H_
#define _reconciliation_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct reconciliation_import_into_edm_v1_response_t reconciliation_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "reconciliation_import_into_edm_v1_response_m_payload.h"



typedef struct reconciliation_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct reconciliation_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} reconciliation_import_into_edm_v1_response_t;

__attribute__((deprecated)) reconciliation_import_into_edm_v1_response_t *reconciliation_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    reconciliation_import_into_edm_v1_response_m_payload_t *m_payload
);

void reconciliation_import_into_edm_v1_response_free(reconciliation_import_into_edm_v1_response_t *reconciliation_import_into_edm_v1_response);

reconciliation_import_into_edm_v1_response_t *reconciliation_import_into_edm_v1_response_parseFromJSON(cJSON *reconciliation_import_into_edm_v1_responseJSON);

cJSON *reconciliation_import_into_edm_v1_response_convertToJSON(reconciliation_import_into_edm_v1_response_t *reconciliation_import_into_edm_v1_response);

#endif /* _reconciliation_import_into_edm_v1_response_H_ */

