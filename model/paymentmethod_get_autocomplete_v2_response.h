/*
 * paymentmethod_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/paymentmethod/getAutocomplete
 */

#ifndef _paymentmethod_get_autocomplete_v2_response_H_
#define _paymentmethod_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentmethod_get_autocomplete_v2_response_t paymentmethod_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "paymentmethod_get_autocomplete_v2_response_m_payload.h"



typedef struct paymentmethod_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct paymentmethod_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} paymentmethod_get_autocomplete_v2_response_t;

__attribute__((deprecated)) paymentmethod_get_autocomplete_v2_response_t *paymentmethod_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    paymentmethod_get_autocomplete_v2_response_m_payload_t *m_payload
);

void paymentmethod_get_autocomplete_v2_response_free(paymentmethod_get_autocomplete_v2_response_t *paymentmethod_get_autocomplete_v2_response);

paymentmethod_get_autocomplete_v2_response_t *paymentmethod_get_autocomplete_v2_response_parseFromJSON(cJSON *paymentmethod_get_autocomplete_v2_responseJSON);

cJSON *paymentmethod_get_autocomplete_v2_response_convertToJSON(paymentmethod_get_autocomplete_v2_response_t *paymentmethod_get_autocomplete_v2_response);

#endif /* _paymentmethod_get_autocomplete_v2_response_H_ */

