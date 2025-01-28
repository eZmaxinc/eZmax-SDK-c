/*
 * province_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/province/getAutocomplete
 */

#ifndef _province_get_autocomplete_v2_response_H_
#define _province_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct province_get_autocomplete_v2_response_t province_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "province_get_autocomplete_v2_response_m_payload.h"



typedef struct province_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct province_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} province_get_autocomplete_v2_response_t;

__attribute__((deprecated)) province_get_autocomplete_v2_response_t *province_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    province_get_autocomplete_v2_response_m_payload_t *m_payload
);

void province_get_autocomplete_v2_response_free(province_get_autocomplete_v2_response_t *province_get_autocomplete_v2_response);

province_get_autocomplete_v2_response_t *province_get_autocomplete_v2_response_parseFromJSON(cJSON *province_get_autocomplete_v2_responseJSON);

cJSON *province_get_autocomplete_v2_response_convertToJSON(province_get_autocomplete_v2_response_t *province_get_autocomplete_v2_response);

#endif /* _province_get_autocomplete_v2_response_H_ */

