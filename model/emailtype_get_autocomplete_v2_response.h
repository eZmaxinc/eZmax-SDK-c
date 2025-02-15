/*
 * emailtype_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/emailtype/getAutocomplete
 */

#ifndef _emailtype_get_autocomplete_v2_response_H_
#define _emailtype_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct emailtype_get_autocomplete_v2_response_t emailtype_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "emailtype_get_autocomplete_v2_response_m_payload.h"



typedef struct emailtype_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct emailtype_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} emailtype_get_autocomplete_v2_response_t;

__attribute__((deprecated)) emailtype_get_autocomplete_v2_response_t *emailtype_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    emailtype_get_autocomplete_v2_response_m_payload_t *m_payload
);

void emailtype_get_autocomplete_v2_response_free(emailtype_get_autocomplete_v2_response_t *emailtype_get_autocomplete_v2_response);

emailtype_get_autocomplete_v2_response_t *emailtype_get_autocomplete_v2_response_parseFromJSON(cJSON *emailtype_get_autocomplete_v2_responseJSON);

cJSON *emailtype_get_autocomplete_v2_response_convertToJSON(emailtype_get_autocomplete_v2_response_t *emailtype_get_autocomplete_v2_response);

#endif /* _emailtype_get_autocomplete_v2_response_H_ */

