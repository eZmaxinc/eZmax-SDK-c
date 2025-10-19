/*
 * inscriptiontype_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/inscriptiontype/getAutocomplete
 */

#ifndef _inscriptiontype_get_autocomplete_v2_response_H_
#define _inscriptiontype_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptiontype_get_autocomplete_v2_response_t inscriptiontype_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "inscriptiontype_get_autocomplete_v2_response_m_payload.h"



typedef struct inscriptiontype_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct inscriptiontype_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptiontype_get_autocomplete_v2_response_t;

__attribute__((deprecated)) inscriptiontype_get_autocomplete_v2_response_t *inscriptiontype_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    inscriptiontype_get_autocomplete_v2_response_m_payload_t *m_payload
);

void inscriptiontype_get_autocomplete_v2_response_free(inscriptiontype_get_autocomplete_v2_response_t *inscriptiontype_get_autocomplete_v2_response);

inscriptiontype_get_autocomplete_v2_response_t *inscriptiontype_get_autocomplete_v2_response_parseFromJSON(cJSON *inscriptiontype_get_autocomplete_v2_responseJSON);

cJSON *inscriptiontype_get_autocomplete_v2_response_convertToJSON(inscriptiontype_get_autocomplete_v2_response_t *inscriptiontype_get_autocomplete_v2_response);

#endif /* _inscriptiontype_get_autocomplete_v2_response_H_ */

