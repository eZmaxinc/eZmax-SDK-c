/*
 * country_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/country/getAutocomplete
 */

#ifndef _country_get_autocomplete_v2_response_H_
#define _country_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct country_get_autocomplete_v2_response_t country_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "country_get_autocomplete_v2_response_m_payload.h"



typedef struct country_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct country_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} country_get_autocomplete_v2_response_t;

__attribute__((deprecated)) country_get_autocomplete_v2_response_t *country_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    country_get_autocomplete_v2_response_m_payload_t *m_payload
);

void country_get_autocomplete_v2_response_free(country_get_autocomplete_v2_response_t *country_get_autocomplete_v2_response);

country_get_autocomplete_v2_response_t *country_get_autocomplete_v2_response_parseFromJSON(cJSON *country_get_autocomplete_v2_responseJSON);

cJSON *country_get_autocomplete_v2_response_convertToJSON(country_get_autocomplete_v2_response_t *country_get_autocomplete_v2_response);

#endif /* _country_get_autocomplete_v2_response_H_ */

