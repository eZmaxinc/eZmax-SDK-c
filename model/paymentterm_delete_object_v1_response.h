/*
 * paymentterm_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/paymentterm/{pkiPaymenttermID}
 */

#ifndef _paymentterm_delete_object_v1_response_H_
#define _paymentterm_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_delete_object_v1_response_t paymentterm_delete_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct paymentterm_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} paymentterm_delete_object_v1_response_t;

paymentterm_delete_object_v1_response_t *paymentterm_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void paymentterm_delete_object_v1_response_free(paymentterm_delete_object_v1_response_t *paymentterm_delete_object_v1_response);

paymentterm_delete_object_v1_response_t *paymentterm_delete_object_v1_response_parseFromJSON(cJSON *paymentterm_delete_object_v1_responseJSON);

cJSON *paymentterm_delete_object_v1_response_convertToJSON(paymentterm_delete_object_v1_response_t *paymentterm_delete_object_v1_response);

#endif /* _paymentterm_delete_object_v1_response_H_ */

