/*
 * creditcardmerchant_get_object_v2_response.h
 *
 * Response for GET /2/object/creditcardmerchant/{pkiCreditcardmerchantID}
 */

#ifndef _creditcardmerchant_get_object_v2_response_H_
#define _creditcardmerchant_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardmerchant_get_object_v2_response_t creditcardmerchant_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "creditcardmerchant_get_object_v2_response_m_payload.h"



typedef struct creditcardmerchant_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct creditcardmerchant_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardmerchant_get_object_v2_response_t;

__attribute__((deprecated)) creditcardmerchant_get_object_v2_response_t *creditcardmerchant_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    creditcardmerchant_get_object_v2_response_m_payload_t *m_payload
);

void creditcardmerchant_get_object_v2_response_free(creditcardmerchant_get_object_v2_response_t *creditcardmerchant_get_object_v2_response);

creditcardmerchant_get_object_v2_response_t *creditcardmerchant_get_object_v2_response_parseFromJSON(cJSON *creditcardmerchant_get_object_v2_responseJSON);

cJSON *creditcardmerchant_get_object_v2_response_convertToJSON(creditcardmerchant_get_object_v2_response_t *creditcardmerchant_get_object_v2_response);

#endif /* _creditcardmerchant_get_object_v2_response_H_ */

