/*
 * common_get_autocomplete_v1_response.h
 *
 * Response for GET /1/object/xxx/getAutocomplete
 */

#ifndef _common_get_autocomplete_v1_response_H_
#define _common_get_autocomplete_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_get_autocomplete_v1_response_t common_get_autocomplete_v1_response_t;

#include "common_get_autocomplete_v1_response_all_of.h"
#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "custom_autocomplete_element_response.h"



typedef struct common_get_autocomplete_v1_response_t {
    list_t *m_payload; //nonprimitive container
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} common_get_autocomplete_v1_response_t;

common_get_autocomplete_v1_response_t *common_get_autocomplete_v1_response_create(
    list_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void common_get_autocomplete_v1_response_free(common_get_autocomplete_v1_response_t *common_get_autocomplete_v1_response);

common_get_autocomplete_v1_response_t *common_get_autocomplete_v1_response_parseFromJSON(cJSON *common_get_autocomplete_v1_responseJSON);

cJSON *common_get_autocomplete_v1_response_convertToJSON(common_get_autocomplete_v1_response_t *common_get_autocomplete_v1_response);

#endif /* _common_get_autocomplete_v1_response_H_ */

