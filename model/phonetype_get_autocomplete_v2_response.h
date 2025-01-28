/*
 * phonetype_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/phonetype/getAutocomplete
 */

#ifndef _phonetype_get_autocomplete_v2_response_H_
#define _phonetype_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct phonetype_get_autocomplete_v2_response_t phonetype_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "phonetype_get_autocomplete_v2_response_m_payload.h"



typedef struct phonetype_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct phonetype_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} phonetype_get_autocomplete_v2_response_t;

__attribute__((deprecated)) phonetype_get_autocomplete_v2_response_t *phonetype_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    phonetype_get_autocomplete_v2_response_m_payload_t *m_payload
);

void phonetype_get_autocomplete_v2_response_free(phonetype_get_autocomplete_v2_response_t *phonetype_get_autocomplete_v2_response);

phonetype_get_autocomplete_v2_response_t *phonetype_get_autocomplete_v2_response_parseFromJSON(cJSON *phonetype_get_autocomplete_v2_responseJSON);

cJSON *phonetype_get_autocomplete_v2_response_convertToJSON(phonetype_get_autocomplete_v2_response_t *phonetype_get_autocomplete_v2_response);

#endif /* _phonetype_get_autocomplete_v2_response_H_ */

