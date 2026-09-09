/*
 * deposittransitcheque_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/importIntoEDM
 */

#ifndef _deposittransitcheque_import_into_edm_v1_response_H_
#define _deposittransitcheque_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposittransitcheque_import_into_edm_v1_response_t deposittransitcheque_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "deposittransitcheque_import_into_edm_v1_response_m_payload.h"



typedef struct deposittransitcheque_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct deposittransitcheque_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} deposittransitcheque_import_into_edm_v1_response_t;

__attribute__((deprecated)) deposittransitcheque_import_into_edm_v1_response_t *deposittransitcheque_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    deposittransitcheque_import_into_edm_v1_response_m_payload_t *m_payload
);

void deposittransitcheque_import_into_edm_v1_response_free(deposittransitcheque_import_into_edm_v1_response_t *deposittransitcheque_import_into_edm_v1_response);

deposittransitcheque_import_into_edm_v1_response_t *deposittransitcheque_import_into_edm_v1_response_parseFromJSON(cJSON *deposittransitcheque_import_into_edm_v1_responseJSON);

cJSON *deposittransitcheque_import_into_edm_v1_response_convertToJSON(deposittransitcheque_import_into_edm_v1_response_t *deposittransitcheque_import_into_edm_v1_response);

#endif /* _deposittransitcheque_import_into_edm_v1_response_H_ */

