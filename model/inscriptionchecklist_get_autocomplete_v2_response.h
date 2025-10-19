/*
 * inscriptionchecklist_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/inscriptionchecklist/getAutocomplete
 */

#ifndef _inscriptionchecklist_get_autocomplete_v2_response_H_
#define _inscriptionchecklist_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionchecklist_get_autocomplete_v2_response_t inscriptionchecklist_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "inscriptionchecklist_get_autocomplete_v2_response_m_payload.h"



typedef struct inscriptionchecklist_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct inscriptionchecklist_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionchecklist_get_autocomplete_v2_response_t;

__attribute__((deprecated)) inscriptionchecklist_get_autocomplete_v2_response_t *inscriptionchecklist_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    inscriptionchecklist_get_autocomplete_v2_response_m_payload_t *m_payload
);

void inscriptionchecklist_get_autocomplete_v2_response_free(inscriptionchecklist_get_autocomplete_v2_response_t *inscriptionchecklist_get_autocomplete_v2_response);

inscriptionchecklist_get_autocomplete_v2_response_t *inscriptionchecklist_get_autocomplete_v2_response_parseFromJSON(cJSON *inscriptionchecklist_get_autocomplete_v2_responseJSON);

cJSON *inscriptionchecklist_get_autocomplete_v2_response_convertToJSON(inscriptionchecklist_get_autocomplete_v2_response_t *inscriptionchecklist_get_autocomplete_v2_response);

#endif /* _inscriptionchecklist_get_autocomplete_v2_response_H_ */

