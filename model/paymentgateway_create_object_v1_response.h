/*
 * paymentgateway_create_object_v1_response.h
 *
 * Response for POST /1/object/paymentgateway
 */

#ifndef _paymentgateway_create_object_v1_response_H_
#define _paymentgateway_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentgateway_create_object_v1_response_t paymentgateway_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "paymentgateway_create_object_v1_response_m_payload.h"



typedef struct paymentgateway_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct paymentgateway_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} paymentgateway_create_object_v1_response_t;

__attribute__((deprecated)) paymentgateway_create_object_v1_response_t *paymentgateway_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    paymentgateway_create_object_v1_response_m_payload_t *m_payload
);

void paymentgateway_create_object_v1_response_free(paymentgateway_create_object_v1_response_t *paymentgateway_create_object_v1_response);

paymentgateway_create_object_v1_response_t *paymentgateway_create_object_v1_response_parseFromJSON(cJSON *paymentgateway_create_object_v1_responseJSON);

cJSON *paymentgateway_create_object_v1_response_convertToJSON(paymentgateway_create_object_v1_response_t *paymentgateway_create_object_v1_response);

#endif /* _paymentgateway_create_object_v1_response_H_ */

