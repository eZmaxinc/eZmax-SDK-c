/*
 * paymentgateway_edit_object_v1_response.h
 *
 * Response for PUT /1/object/paymentgateway/{pkiPaymentgatewayID}
 */

#ifndef _paymentgateway_edit_object_v1_response_H_
#define _paymentgateway_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentgateway_edit_object_v1_response_t paymentgateway_edit_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct paymentgateway_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} paymentgateway_edit_object_v1_response_t;

__attribute__((deprecated)) paymentgateway_edit_object_v1_response_t *paymentgateway_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void paymentgateway_edit_object_v1_response_free(paymentgateway_edit_object_v1_response_t *paymentgateway_edit_object_v1_response);

paymentgateway_edit_object_v1_response_t *paymentgateway_edit_object_v1_response_parseFromJSON(cJSON *paymentgateway_edit_object_v1_responseJSON);

cJSON *paymentgateway_edit_object_v1_response_convertToJSON(paymentgateway_edit_object_v1_response_t *paymentgateway_edit_object_v1_response);

#endif /* _paymentgateway_edit_object_v1_response_H_ */

