/*
 * customer_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/customer
 */

#ifndef _customer_create_object_v1_response_m_payload_H_
#define _customer_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_create_object_v1_response_m_payload_t customer_create_object_v1_response_m_payload_t;




typedef struct customer_create_object_v1_response_m_payload_t {
    list_t *a_pki_customer_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} customer_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) customer_create_object_v1_response_m_payload_t *customer_create_object_v1_response_m_payload_create(
    list_t *a_pki_customer_id
);

void customer_create_object_v1_response_m_payload_free(customer_create_object_v1_response_m_payload_t *customer_create_object_v1_response_m_payload);

customer_create_object_v1_response_m_payload_t *customer_create_object_v1_response_m_payload_parseFromJSON(cJSON *customer_create_object_v1_response_m_payloadJSON);

cJSON *customer_create_object_v1_response_m_payload_convertToJSON(customer_create_object_v1_response_m_payload_t *customer_create_object_v1_response_m_payload);

#endif /* _customer_create_object_v1_response_m_payload_H_ */

