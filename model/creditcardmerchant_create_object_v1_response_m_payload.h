/*
 * creditcardmerchant_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/creditcardmerchant
 */

#ifndef _creditcardmerchant_create_object_v1_response_m_payload_H_
#define _creditcardmerchant_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardmerchant_create_object_v1_response_m_payload_t creditcardmerchant_create_object_v1_response_m_payload_t;




typedef struct creditcardmerchant_create_object_v1_response_m_payload_t {
    list_t *a_pki_creditcardmerchant_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardmerchant_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) creditcardmerchant_create_object_v1_response_m_payload_t *creditcardmerchant_create_object_v1_response_m_payload_create(
    list_t *a_pki_creditcardmerchant_id
);

void creditcardmerchant_create_object_v1_response_m_payload_free(creditcardmerchant_create_object_v1_response_m_payload_t *creditcardmerchant_create_object_v1_response_m_payload);

creditcardmerchant_create_object_v1_response_m_payload_t *creditcardmerchant_create_object_v1_response_m_payload_parseFromJSON(cJSON *creditcardmerchant_create_object_v1_response_m_payloadJSON);

cJSON *creditcardmerchant_create_object_v1_response_m_payload_convertToJSON(creditcardmerchant_create_object_v1_response_m_payload_t *creditcardmerchant_create_object_v1_response_m_payload);

#endif /* _creditcardmerchant_create_object_v1_response_m_payload_H_ */

