/*
 * paymentterm_edit_object_v1_response.h
 *
 * Response for PUT /1/object/paymentterm/{pkiPaymenttermID}
 */

#ifndef _paymentterm_edit_object_v1_response_H_
#define _paymentterm_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_edit_object_v1_response_t paymentterm_edit_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct paymentterm_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} paymentterm_edit_object_v1_response_t;

__attribute__((deprecated)) paymentterm_edit_object_v1_response_t *paymentterm_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void paymentterm_edit_object_v1_response_free(paymentterm_edit_object_v1_response_t *paymentterm_edit_object_v1_response);

paymentterm_edit_object_v1_response_t *paymentterm_edit_object_v1_response_parseFromJSON(cJSON *paymentterm_edit_object_v1_responseJSON);

cJSON *paymentterm_edit_object_v1_response_convertToJSON(paymentterm_edit_object_v1_response_t *paymentterm_edit_object_v1_response);

#endif /* _paymentterm_edit_object_v1_response_H_ */

