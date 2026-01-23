/*
 * realestateboard_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/realestateboard/getAutocomplete
 */

#ifndef _realestateboard_get_autocomplete_v2_response_H_
#define _realestateboard_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct realestateboard_get_autocomplete_v2_response_t realestateboard_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "realestateboard_get_autocomplete_v2_response_m_payload.h"



typedef struct realestateboard_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct realestateboard_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} realestateboard_get_autocomplete_v2_response_t;

__attribute__((deprecated)) realestateboard_get_autocomplete_v2_response_t *realestateboard_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    realestateboard_get_autocomplete_v2_response_m_payload_t *m_payload
);

void realestateboard_get_autocomplete_v2_response_free(realestateboard_get_autocomplete_v2_response_t *realestateboard_get_autocomplete_v2_response);

realestateboard_get_autocomplete_v2_response_t *realestateboard_get_autocomplete_v2_response_parseFromJSON(cJSON *realestateboard_get_autocomplete_v2_responseJSON);

cJSON *realestateboard_get_autocomplete_v2_response_convertToJSON(realestateboard_get_autocomplete_v2_response_t *realestateboard_get_autocomplete_v2_response);

#endif /* _realestateboard_get_autocomplete_v2_response_H_ */

