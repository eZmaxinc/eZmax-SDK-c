/*
 * creditcardmerchant_create_object_v1_response.h
 *
 * Response for POST /1/object/creditcardmerchant
 */

#ifndef _creditcardmerchant_create_object_v1_response_H_
#define _creditcardmerchant_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardmerchant_create_object_v1_response_t creditcardmerchant_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "creditcardmerchant_create_object_v1_response_m_payload.h"



typedef struct creditcardmerchant_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct creditcardmerchant_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardmerchant_create_object_v1_response_t;

__attribute__((deprecated)) creditcardmerchant_create_object_v1_response_t *creditcardmerchant_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    creditcardmerchant_create_object_v1_response_m_payload_t *m_payload
);

void creditcardmerchant_create_object_v1_response_free(creditcardmerchant_create_object_v1_response_t *creditcardmerchant_create_object_v1_response);

creditcardmerchant_create_object_v1_response_t *creditcardmerchant_create_object_v1_response_parseFromJSON(cJSON *creditcardmerchant_create_object_v1_responseJSON);

cJSON *creditcardmerchant_create_object_v1_response_convertToJSON(creditcardmerchant_create_object_v1_response_t *creditcardmerchant_create_object_v1_response);

#endif /* _creditcardmerchant_create_object_v1_response_H_ */

