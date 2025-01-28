/*
 * creditcardmerchant_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/creditcardmerchant/{pkiCreditcardmerchantID}
 */

#ifndef _creditcardmerchant_get_object_v2_response_m_payload_H_
#define _creditcardmerchant_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardmerchant_get_object_v2_response_m_payload_t creditcardmerchant_get_object_v2_response_m_payload_t;

#include "creditcardmerchant_response_compound.h"



typedef struct creditcardmerchant_get_object_v2_response_m_payload_t {
    struct creditcardmerchant_response_compound_t *obj_creditcardmerchant; //model

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardmerchant_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) creditcardmerchant_get_object_v2_response_m_payload_t *creditcardmerchant_get_object_v2_response_m_payload_create(
    creditcardmerchant_response_compound_t *obj_creditcardmerchant
);

void creditcardmerchant_get_object_v2_response_m_payload_free(creditcardmerchant_get_object_v2_response_m_payload_t *creditcardmerchant_get_object_v2_response_m_payload);

creditcardmerchant_get_object_v2_response_m_payload_t *creditcardmerchant_get_object_v2_response_m_payload_parseFromJSON(cJSON *creditcardmerchant_get_object_v2_response_m_payloadJSON);

cJSON *creditcardmerchant_get_object_v2_response_m_payload_convertToJSON(creditcardmerchant_get_object_v2_response_m_payload_t *creditcardmerchant_get_object_v2_response_m_payload);

#endif /* _creditcardmerchant_get_object_v2_response_m_payload_H_ */

