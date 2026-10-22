/*
 * documenttype_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/documenttype/getAutocomplete
 */

#ifndef _documenttype_get_autocomplete_v2_response_H_
#define _documenttype_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttype_get_autocomplete_v2_response_t documenttype_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "documenttype_get_autocomplete_v2_response_m_payload.h"



typedef struct documenttype_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct documenttype_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} documenttype_get_autocomplete_v2_response_t;

__attribute__((deprecated)) documenttype_get_autocomplete_v2_response_t *documenttype_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    documenttype_get_autocomplete_v2_response_m_payload_t *m_payload
);

void documenttype_get_autocomplete_v2_response_free(documenttype_get_autocomplete_v2_response_t *documenttype_get_autocomplete_v2_response);

documenttype_get_autocomplete_v2_response_t *documenttype_get_autocomplete_v2_response_parseFromJSON(cJSON *documenttype_get_autocomplete_v2_responseJSON);

cJSON *documenttype_get_autocomplete_v2_response_convertToJSON(documenttype_get_autocomplete_v2_response_t *documenttype_get_autocomplete_v2_response);

#endif /* _documenttype_get_autocomplete_v2_response_H_ */

