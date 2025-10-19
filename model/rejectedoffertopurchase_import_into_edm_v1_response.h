/*
 * rejectedoffertopurchase_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/rejectedoffertopurchase/{pkiRejectedoffertopurchaseID}/importIntoEDM
 */

#ifndef _rejectedoffertopurchase_import_into_edm_v1_response_H_
#define _rejectedoffertopurchase_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rejectedoffertopurchase_import_into_edm_v1_response_t rejectedoffertopurchase_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "rejectedoffertopurchase_import_into_edm_v1_response_m_payload.h"



typedef struct rejectedoffertopurchase_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct rejectedoffertopurchase_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} rejectedoffertopurchase_import_into_edm_v1_response_t;

__attribute__((deprecated)) rejectedoffertopurchase_import_into_edm_v1_response_t *rejectedoffertopurchase_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    rejectedoffertopurchase_import_into_edm_v1_response_m_payload_t *m_payload
);

void rejectedoffertopurchase_import_into_edm_v1_response_free(rejectedoffertopurchase_import_into_edm_v1_response_t *rejectedoffertopurchase_import_into_edm_v1_response);

rejectedoffertopurchase_import_into_edm_v1_response_t *rejectedoffertopurchase_import_into_edm_v1_response_parseFromJSON(cJSON *rejectedoffertopurchase_import_into_edm_v1_responseJSON);

cJSON *rejectedoffertopurchase_import_into_edm_v1_response_convertToJSON(rejectedoffertopurchase_import_into_edm_v1_response_t *rejectedoffertopurchase_import_into_edm_v1_response);

#endif /* _rejectedoffertopurchase_import_into_edm_v1_response_H_ */

