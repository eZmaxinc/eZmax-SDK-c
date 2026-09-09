/*
 * purchase_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/purchase/{pkiPurchaseID}/importIntoEDM
 */

#ifndef _purchase_import_into_edm_v1_response_H_
#define _purchase_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct purchase_import_into_edm_v1_response_t purchase_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "purchase_import_into_edm_v1_response_m_payload.h"



typedef struct purchase_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct purchase_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} purchase_import_into_edm_v1_response_t;

__attribute__((deprecated)) purchase_import_into_edm_v1_response_t *purchase_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    purchase_import_into_edm_v1_response_m_payload_t *m_payload
);

void purchase_import_into_edm_v1_response_free(purchase_import_into_edm_v1_response_t *purchase_import_into_edm_v1_response);

purchase_import_into_edm_v1_response_t *purchase_import_into_edm_v1_response_parseFromJSON(cJSON *purchase_import_into_edm_v1_responseJSON);

cJSON *purchase_import_into_edm_v1_response_convertToJSON(purchase_import_into_edm_v1_response_t *purchase_import_into_edm_v1_response);

#endif /* _purchase_import_into_edm_v1_response_H_ */

