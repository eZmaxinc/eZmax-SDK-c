/*
 * paymentterm_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/paymentterm/getAutocomplete
 */

#ifndef _paymentterm_get_autocomplete_v2_response_H_
#define _paymentterm_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentterm_get_autocomplete_v2_response_t paymentterm_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "paymentterm_get_autocomplete_v2_response_m_payload.h"



typedef struct paymentterm_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct paymentterm_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} paymentterm_get_autocomplete_v2_response_t;

__attribute__((deprecated)) paymentterm_get_autocomplete_v2_response_t *paymentterm_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    paymentterm_get_autocomplete_v2_response_m_payload_t *m_payload
);

void paymentterm_get_autocomplete_v2_response_free(paymentterm_get_autocomplete_v2_response_t *paymentterm_get_autocomplete_v2_response);

paymentterm_get_autocomplete_v2_response_t *paymentterm_get_autocomplete_v2_response_parseFromJSON(cJSON *paymentterm_get_autocomplete_v2_responseJSON);

cJSON *paymentterm_get_autocomplete_v2_response_convertToJSON(paymentterm_get_autocomplete_v2_response_t *paymentterm_get_autocomplete_v2_response);

#endif /* _paymentterm_get_autocomplete_v2_response_H_ */

