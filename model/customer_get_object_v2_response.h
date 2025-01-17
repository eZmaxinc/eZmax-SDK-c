/*
 * customer_get_object_v2_response.h
 *
 * Response for GET /2/object/customer/{pkiCustomerID}
 */

#ifndef _customer_get_object_v2_response_H_
#define _customer_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_get_object_v2_response_t customer_get_object_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "customer_get_object_v2_response_m_payload.h"



typedef struct customer_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct customer_get_object_v2_response_m_payload_t *m_payload; //model

} customer_get_object_v2_response_t;

customer_get_object_v2_response_t *customer_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    customer_get_object_v2_response_m_payload_t *m_payload
);

void customer_get_object_v2_response_free(customer_get_object_v2_response_t *customer_get_object_v2_response);

customer_get_object_v2_response_t *customer_get_object_v2_response_parseFromJSON(cJSON *customer_get_object_v2_responseJSON);

cJSON *customer_get_object_v2_response_convertToJSON(customer_get_object_v2_response_t *customer_get_object_v2_response);

#endif /* _customer_get_object_v2_response_H_ */

