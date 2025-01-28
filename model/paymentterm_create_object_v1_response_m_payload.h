/*
 * paymentterm_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/paymentterm
 */

#ifndef _paymentterm_create_object_v1_response_m_payload_H_
#define _paymentterm_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_create_object_v1_response_m_payload_t paymentterm_create_object_v1_response_m_payload_t;




typedef struct paymentterm_create_object_v1_response_m_payload_t {
    list_t *a_pki_paymentterm_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} paymentterm_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) paymentterm_create_object_v1_response_m_payload_t *paymentterm_create_object_v1_response_m_payload_create(
    list_t *a_pki_paymentterm_id
);

void paymentterm_create_object_v1_response_m_payload_free(paymentterm_create_object_v1_response_m_payload_t *paymentterm_create_object_v1_response_m_payload);

paymentterm_create_object_v1_response_m_payload_t *paymentterm_create_object_v1_response_m_payload_parseFromJSON(cJSON *paymentterm_create_object_v1_response_m_payloadJSON);

cJSON *paymentterm_create_object_v1_response_m_payload_convertToJSON(paymentterm_create_object_v1_response_m_payload_t *paymentterm_create_object_v1_response_m_payload);

#endif /* _paymentterm_create_object_v1_response_m_payload_H_ */

