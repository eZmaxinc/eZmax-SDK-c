/*
 * systemconfigurationtype_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/systemconfigurationtype/getAutocomplete
 */

#ifndef _systemconfigurationtype_get_autocomplete_v2_response_H_
#define _systemconfigurationtype_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct systemconfigurationtype_get_autocomplete_v2_response_t systemconfigurationtype_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "systemconfigurationtype_get_autocomplete_v2_response_m_payload.h"



typedef struct systemconfigurationtype_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} systemconfigurationtype_get_autocomplete_v2_response_t;

__attribute__((deprecated)) systemconfigurationtype_get_autocomplete_v2_response_t *systemconfigurationtype_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    systemconfigurationtype_get_autocomplete_v2_response_m_payload_t *m_payload
);

void systemconfigurationtype_get_autocomplete_v2_response_free(systemconfigurationtype_get_autocomplete_v2_response_t *systemconfigurationtype_get_autocomplete_v2_response);

systemconfigurationtype_get_autocomplete_v2_response_t *systemconfigurationtype_get_autocomplete_v2_response_parseFromJSON(cJSON *systemconfigurationtype_get_autocomplete_v2_responseJSON);

cJSON *systemconfigurationtype_get_autocomplete_v2_response_convertToJSON(systemconfigurationtype_get_autocomplete_v2_response_t *systemconfigurationtype_get_autocomplete_v2_response);

#endif /* _systemconfigurationtype_get_autocomplete_v2_response_H_ */

