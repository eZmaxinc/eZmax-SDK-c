/*
 * paymentterm_edit_object_v1_request.h
 *
 * Request for PUT /1/object/paymentterm/{pkiPaymenttermID}
 */

#ifndef _paymentterm_edit_object_v1_request_H_
#define _paymentterm_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_edit_object_v1_request_t paymentterm_edit_object_v1_request_t;

#include "paymentterm_request_compound.h"



typedef struct paymentterm_edit_object_v1_request_t {
    struct paymentterm_request_compound_t *obj_paymentterm; //model

    int _library_owned; // Is the library responsible for freeing this object?
} paymentterm_edit_object_v1_request_t;

__attribute__((deprecated)) paymentterm_edit_object_v1_request_t *paymentterm_edit_object_v1_request_create(
    paymentterm_request_compound_t *obj_paymentterm
);

void paymentterm_edit_object_v1_request_free(paymentterm_edit_object_v1_request_t *paymentterm_edit_object_v1_request);

paymentterm_edit_object_v1_request_t *paymentterm_edit_object_v1_request_parseFromJSON(cJSON *paymentterm_edit_object_v1_requestJSON);

cJSON *paymentterm_edit_object_v1_request_convertToJSON(paymentterm_edit_object_v1_request_t *paymentterm_edit_object_v1_request);

#endif /* _paymentterm_edit_object_v1_request_H_ */

