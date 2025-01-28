/*
 * secretquestion_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/secretquestion/getAutocomplete
 */

#ifndef _secretquestion_get_autocomplete_v2_response_H_
#define _secretquestion_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct secretquestion_get_autocomplete_v2_response_t secretquestion_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "secretquestion_get_autocomplete_v2_response_m_payload.h"



typedef struct secretquestion_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct secretquestion_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} secretquestion_get_autocomplete_v2_response_t;

__attribute__((deprecated)) secretquestion_get_autocomplete_v2_response_t *secretquestion_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    secretquestion_get_autocomplete_v2_response_m_payload_t *m_payload
);

void secretquestion_get_autocomplete_v2_response_free(secretquestion_get_autocomplete_v2_response_t *secretquestion_get_autocomplete_v2_response);

secretquestion_get_autocomplete_v2_response_t *secretquestion_get_autocomplete_v2_response_parseFromJSON(cJSON *secretquestion_get_autocomplete_v2_responseJSON);

cJSON *secretquestion_get_autocomplete_v2_response_convertToJSON(secretquestion_get_autocomplete_v2_response_t *secretquestion_get_autocomplete_v2_response);

#endif /* _secretquestion_get_autocomplete_v2_response_H_ */

