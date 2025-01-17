/*
 * language_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/language/getAutocomplete
 */

#ifndef _language_get_autocomplete_v2_response_H_
#define _language_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct language_get_autocomplete_v2_response_t language_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "language_get_autocomplete_v2_response_m_payload.h"



typedef struct language_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct language_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} language_get_autocomplete_v2_response_t;

language_get_autocomplete_v2_response_t *language_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    language_get_autocomplete_v2_response_m_payload_t *m_payload
);

void language_get_autocomplete_v2_response_free(language_get_autocomplete_v2_response_t *language_get_autocomplete_v2_response);

language_get_autocomplete_v2_response_t *language_get_autocomplete_v2_response_parseFromJSON(cJSON *language_get_autocomplete_v2_responseJSON);

cJSON *language_get_autocomplete_v2_response_convertToJSON(language_get_autocomplete_v2_response_t *language_get_autocomplete_v2_response);

#endif /* _language_get_autocomplete_v2_response_H_ */

