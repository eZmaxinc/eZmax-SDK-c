/*
 * creditcardtype_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/creditcardtype/getAutocomplete
 */

#ifndef _creditcardtype_get_autocomplete_v2_response_H_
#define _creditcardtype_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardtype_get_autocomplete_v2_response_t creditcardtype_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "creditcardtype_get_autocomplete_v2_response_m_payload.h"



typedef struct creditcardtype_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct creditcardtype_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} creditcardtype_get_autocomplete_v2_response_t;

__attribute__((deprecated)) creditcardtype_get_autocomplete_v2_response_t *creditcardtype_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    creditcardtype_get_autocomplete_v2_response_m_payload_t *m_payload
);

void creditcardtype_get_autocomplete_v2_response_free(creditcardtype_get_autocomplete_v2_response_t *creditcardtype_get_autocomplete_v2_response);

creditcardtype_get_autocomplete_v2_response_t *creditcardtype_get_autocomplete_v2_response_parseFromJSON(cJSON *creditcardtype_get_autocomplete_v2_responseJSON);

cJSON *creditcardtype_get_autocomplete_v2_response_convertToJSON(creditcardtype_get_autocomplete_v2_response_t *creditcardtype_get_autocomplete_v2_response);

#endif /* _creditcardtype_get_autocomplete_v2_response_H_ */

