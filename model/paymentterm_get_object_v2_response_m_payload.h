/*
 * paymentterm_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/paymentterm/{pkiPaymenttermID}
 */

#ifndef _paymentterm_get_object_v2_response_m_payload_H_
#define _paymentterm_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_get_object_v2_response_m_payload_t paymentterm_get_object_v2_response_m_payload_t;

#include "paymentterm_response_compound.h"



typedef struct paymentterm_get_object_v2_response_m_payload_t {
    struct paymentterm_response_compound_t *obj_paymentterm; //model

    int _library_owned; // Is the library responsible for freeing this object?
} paymentterm_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) paymentterm_get_object_v2_response_m_payload_t *paymentterm_get_object_v2_response_m_payload_create(
    paymentterm_response_compound_t *obj_paymentterm
);

void paymentterm_get_object_v2_response_m_payload_free(paymentterm_get_object_v2_response_m_payload_t *paymentterm_get_object_v2_response_m_payload);

paymentterm_get_object_v2_response_m_payload_t *paymentterm_get_object_v2_response_m_payload_parseFromJSON(cJSON *paymentterm_get_object_v2_response_m_payloadJSON);

cJSON *paymentterm_get_object_v2_response_m_payload_convertToJSON(paymentterm_get_object_v2_response_m_payload_t *paymentterm_get_object_v2_response_m_payload);

#endif /* _paymentterm_get_object_v2_response_m_payload_H_ */

