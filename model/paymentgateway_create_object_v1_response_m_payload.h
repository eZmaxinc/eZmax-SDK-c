/*
 * paymentgateway_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/paymentgateway
 */

#ifndef _paymentgateway_create_object_v1_response_m_payload_H_
#define _paymentgateway_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentgateway_create_object_v1_response_m_payload_t paymentgateway_create_object_v1_response_m_payload_t;




typedef struct paymentgateway_create_object_v1_response_m_payload_t {
    list_t *a_pki_paymentgateway_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} paymentgateway_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) paymentgateway_create_object_v1_response_m_payload_t *paymentgateway_create_object_v1_response_m_payload_create(
    list_t *a_pki_paymentgateway_id
);

void paymentgateway_create_object_v1_response_m_payload_free(paymentgateway_create_object_v1_response_m_payload_t *paymentgateway_create_object_v1_response_m_payload);

paymentgateway_create_object_v1_response_m_payload_t *paymentgateway_create_object_v1_response_m_payload_parseFromJSON(cJSON *paymentgateway_create_object_v1_response_m_payloadJSON);

cJSON *paymentgateway_create_object_v1_response_m_payload_convertToJSON(paymentgateway_create_object_v1_response_m_payload_t *paymentgateway_create_object_v1_response_m_payload);

#endif /* _paymentgateway_create_object_v1_response_m_payload_H_ */

