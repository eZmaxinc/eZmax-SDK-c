/*
 * paymentgateway_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/paymentgateway/getAutocomplete
 */

#ifndef _paymentgateway_get_autocomplete_v2_response_H_
#define _paymentgateway_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentgateway_get_autocomplete_v2_response_t paymentgateway_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "paymentgateway_get_autocomplete_v2_response_m_payload.h"



typedef struct paymentgateway_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct paymentgateway_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} paymentgateway_get_autocomplete_v2_response_t;

__attribute__((deprecated)) paymentgateway_get_autocomplete_v2_response_t *paymentgateway_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    paymentgateway_get_autocomplete_v2_response_m_payload_t *m_payload
);

void paymentgateway_get_autocomplete_v2_response_free(paymentgateway_get_autocomplete_v2_response_t *paymentgateway_get_autocomplete_v2_response);

paymentgateway_get_autocomplete_v2_response_t *paymentgateway_get_autocomplete_v2_response_parseFromJSON(cJSON *paymentgateway_get_autocomplete_v2_responseJSON);

cJSON *paymentgateway_get_autocomplete_v2_response_convertToJSON(paymentgateway_get_autocomplete_v2_response_t *paymentgateway_get_autocomplete_v2_response);

#endif /* _paymentgateway_get_autocomplete_v2_response_H_ */

