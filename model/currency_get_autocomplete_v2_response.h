/*
 * currency_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/currency/getAutocomplete
 */

#ifndef _currency_get_autocomplete_v2_response_H_
#define _currency_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct currency_get_autocomplete_v2_response_t currency_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "currency_get_autocomplete_v2_response_m_payload.h"



typedef struct currency_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct currency_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} currency_get_autocomplete_v2_response_t;

__attribute__((deprecated)) currency_get_autocomplete_v2_response_t *currency_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    currency_get_autocomplete_v2_response_m_payload_t *m_payload
);

void currency_get_autocomplete_v2_response_free(currency_get_autocomplete_v2_response_t *currency_get_autocomplete_v2_response);

currency_get_autocomplete_v2_response_t *currency_get_autocomplete_v2_response_parseFromJSON(cJSON *currency_get_autocomplete_v2_responseJSON);

cJSON *currency_get_autocomplete_v2_response_convertToJSON(currency_get_autocomplete_v2_response_t *currency_get_autocomplete_v2_response);

#endif /* _currency_get_autocomplete_v2_response_H_ */

