/*
 * paymentgateway_edit_object_v1_request.h
 *
 * Request for PUT /1/object/paymentgateway/{pkiPaymentgatewayID}
 */

#ifndef _paymentgateway_edit_object_v1_request_H_
#define _paymentgateway_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentgateway_edit_object_v1_request_t paymentgateway_edit_object_v1_request_t;

#include "paymentgateway_request_compound.h"



typedef struct paymentgateway_edit_object_v1_request_t {
    struct paymentgateway_request_compound_t *obj_paymentgateway; //model

    int _library_owned; // Is the library responsible for freeing this object?
} paymentgateway_edit_object_v1_request_t;

__attribute__((deprecated)) paymentgateway_edit_object_v1_request_t *paymentgateway_edit_object_v1_request_create(
    paymentgateway_request_compound_t *obj_paymentgateway
);

void paymentgateway_edit_object_v1_request_free(paymentgateway_edit_object_v1_request_t *paymentgateway_edit_object_v1_request);

paymentgateway_edit_object_v1_request_t *paymentgateway_edit_object_v1_request_parseFromJSON(cJSON *paymentgateway_edit_object_v1_requestJSON);

cJSON *paymentgateway_edit_object_v1_request_convertToJSON(paymentgateway_edit_object_v1_request_t *paymentgateway_edit_object_v1_request);

#endif /* _paymentgateway_edit_object_v1_request_H_ */

