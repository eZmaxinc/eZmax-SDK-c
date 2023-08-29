/*
 * paymentterm_create_object_v1_response.h
 *
 * Response for POST /1/object/paymentterm
 */

#ifndef _paymentterm_create_object_v1_response_H_
#define _paymentterm_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_create_object_v1_response_t paymentterm_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "paymentterm_create_object_v1_response_m_payload.h"



typedef struct paymentterm_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct paymentterm_create_object_v1_response_m_payload_t *m_payload; //model

} paymentterm_create_object_v1_response_t;

paymentterm_create_object_v1_response_t *paymentterm_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    paymentterm_create_object_v1_response_m_payload_t *m_payload
);

void paymentterm_create_object_v1_response_free(paymentterm_create_object_v1_response_t *paymentterm_create_object_v1_response);

paymentterm_create_object_v1_response_t *paymentterm_create_object_v1_response_parseFromJSON(cJSON *paymentterm_create_object_v1_responseJSON);

cJSON *paymentterm_create_object_v1_response_convertToJSON(paymentterm_create_object_v1_response_t *paymentterm_create_object_v1_response);

#endif /* _paymentterm_create_object_v1_response_H_ */

