/*
 * paymentpreparation_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/paymentpreparation/{pkiPaymentpreparationID}/importIntoEDM
 */

#ifndef _paymentpreparation_import_into_edm_v1_request_H_
#define _paymentpreparation_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentpreparation_import_into_edm_v1_request_t paymentpreparation_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct paymentpreparation_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} paymentpreparation_import_into_edm_v1_request_t;

__attribute__((deprecated)) paymentpreparation_import_into_edm_v1_request_t *paymentpreparation_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void paymentpreparation_import_into_edm_v1_request_free(paymentpreparation_import_into_edm_v1_request_t *paymentpreparation_import_into_edm_v1_request);

paymentpreparation_import_into_edm_v1_request_t *paymentpreparation_import_into_edm_v1_request_parseFromJSON(cJSON *paymentpreparation_import_into_edm_v1_requestJSON);

cJSON *paymentpreparation_import_into_edm_v1_request_convertToJSON(paymentpreparation_import_into_edm_v1_request_t *paymentpreparation_import_into_edm_v1_request);

#endif /* _paymentpreparation_import_into_edm_v1_request_H_ */

