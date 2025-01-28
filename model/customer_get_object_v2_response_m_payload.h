/*
 * customer_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/customer/{pkiCustomerID}
 */

#ifndef _customer_get_object_v2_response_m_payload_H_
#define _customer_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_get_object_v2_response_m_payload_t customer_get_object_v2_response_m_payload_t;

#include "customer_response_compound.h"



typedef struct customer_get_object_v2_response_m_payload_t {
    struct customer_response_compound_t *obj_customer; //model

    int _library_owned; // Is the library responsible for freeing this object?
} customer_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) customer_get_object_v2_response_m_payload_t *customer_get_object_v2_response_m_payload_create(
    customer_response_compound_t *obj_customer
);

void customer_get_object_v2_response_m_payload_free(customer_get_object_v2_response_m_payload_t *customer_get_object_v2_response_m_payload);

customer_get_object_v2_response_m_payload_t *customer_get_object_v2_response_m_payload_parseFromJSON(cJSON *customer_get_object_v2_response_m_payloadJSON);

cJSON *customer_get_object_v2_response_m_payload_convertToJSON(customer_get_object_v2_response_m_payload_t *customer_get_object_v2_response_m_payload);

#endif /* _customer_get_object_v2_response_m_payload_H_ */

