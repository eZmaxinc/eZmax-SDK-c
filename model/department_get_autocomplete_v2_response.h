/*
 * department_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/department/getAutocomplete
 */

#ifndef _department_get_autocomplete_v2_response_H_
#define _department_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct department_get_autocomplete_v2_response_t department_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "department_get_autocomplete_v2_response_m_payload.h"



typedef struct department_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct department_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} department_get_autocomplete_v2_response_t;

__attribute__((deprecated)) department_get_autocomplete_v2_response_t *department_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    department_get_autocomplete_v2_response_m_payload_t *m_payload
);

void department_get_autocomplete_v2_response_free(department_get_autocomplete_v2_response_t *department_get_autocomplete_v2_response);

department_get_autocomplete_v2_response_t *department_get_autocomplete_v2_response_parseFromJSON(cJSON *department_get_autocomplete_v2_responseJSON);

cJSON *department_get_autocomplete_v2_response_convertToJSON(department_get_autocomplete_v2_response_t *department_get_autocomplete_v2_response);

#endif /* _department_get_autocomplete_v2_response_H_ */

