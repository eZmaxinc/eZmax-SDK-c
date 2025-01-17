/*
 * glaccountcontainer_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/glaccountcontainer/getAutocomplete
 */

#ifndef _glaccountcontainer_get_autocomplete_v2_response_H_
#define _glaccountcontainer_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct glaccountcontainer_get_autocomplete_v2_response_t glaccountcontainer_get_autocomplete_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "glaccountcontainer_get_autocomplete_v2_response_m_payload.h"



typedef struct glaccountcontainer_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct glaccountcontainer_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} glaccountcontainer_get_autocomplete_v2_response_t;

glaccountcontainer_get_autocomplete_v2_response_t *glaccountcontainer_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    glaccountcontainer_get_autocomplete_v2_response_m_payload_t *m_payload
);

void glaccountcontainer_get_autocomplete_v2_response_free(glaccountcontainer_get_autocomplete_v2_response_t *glaccountcontainer_get_autocomplete_v2_response);

glaccountcontainer_get_autocomplete_v2_response_t *glaccountcontainer_get_autocomplete_v2_response_parseFromJSON(cJSON *glaccountcontainer_get_autocomplete_v2_responseJSON);

cJSON *glaccountcontainer_get_autocomplete_v2_response_convertToJSON(glaccountcontainer_get_autocomplete_v2_response_t *glaccountcontainer_get_autocomplete_v2_response);

#endif /* _glaccountcontainer_get_autocomplete_v2_response_H_ */

