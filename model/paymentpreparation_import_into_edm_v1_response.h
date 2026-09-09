/*
 * paymentpreparation_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/paymentpreparation/{pkiPaymentpreparationID}/importIntoEDM
 */

#ifndef _paymentpreparation_import_into_edm_v1_response_H_
#define _paymentpreparation_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentpreparation_import_into_edm_v1_response_t paymentpreparation_import_into_edm_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "paymentpreparation_import_into_edm_v1_response_m_payload.h"



typedef struct paymentpreparation_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct paymentpreparation_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} paymentpreparation_import_into_edm_v1_response_t;

__attribute__((deprecated)) paymentpreparation_import_into_edm_v1_response_t *paymentpreparation_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    paymentpreparation_import_into_edm_v1_response_m_payload_t *m_payload
);

void paymentpreparation_import_into_edm_v1_response_free(paymentpreparation_import_into_edm_v1_response_t *paymentpreparation_import_into_edm_v1_response);

paymentpreparation_import_into_edm_v1_response_t *paymentpreparation_import_into_edm_v1_response_parseFromJSON(cJSON *paymentpreparation_import_into_edm_v1_responseJSON);

cJSON *paymentpreparation_import_into_edm_v1_response_convertToJSON(paymentpreparation_import_into_edm_v1_response_t *paymentpreparation_import_into_edm_v1_response);

#endif /* _paymentpreparation_import_into_edm_v1_response_H_ */

