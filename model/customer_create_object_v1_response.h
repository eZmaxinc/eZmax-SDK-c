/*
 * customer_create_object_v1_response.h
 *
 * Response for POST /1/object/customer
 */

#ifndef _customer_create_object_v1_response_H_
#define _customer_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_create_object_v1_response_t customer_create_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "customer_create_object_v1_response_m_payload.h"



typedef struct customer_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct customer_create_object_v1_response_m_payload_t *m_payload; //model

} customer_create_object_v1_response_t;

customer_create_object_v1_response_t *customer_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    customer_create_object_v1_response_m_payload_t *m_payload
);

void customer_create_object_v1_response_free(customer_create_object_v1_response_t *customer_create_object_v1_response);

customer_create_object_v1_response_t *customer_create_object_v1_response_parseFromJSON(cJSON *customer_create_object_v1_responseJSON);

cJSON *customer_create_object_v1_response_convertToJSON(customer_create_object_v1_response_t *customer_create_object_v1_response);

#endif /* _customer_create_object_v1_response_H_ */

