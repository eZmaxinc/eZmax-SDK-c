/*
 * franchiseoffice_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/franchiseoffice/getAutocomplete
 */

#ifndef _franchiseoffice_get_autocomplete_v2_response_H_
#define _franchiseoffice_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchiseoffice_get_autocomplete_v2_response_t franchiseoffice_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "franchiseoffice_get_autocomplete_v2_response_m_payload.h"



typedef struct franchiseoffice_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct franchiseoffice_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} franchiseoffice_get_autocomplete_v2_response_t;

__attribute__((deprecated)) franchiseoffice_get_autocomplete_v2_response_t *franchiseoffice_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    franchiseoffice_get_autocomplete_v2_response_m_payload_t *m_payload
);

void franchiseoffice_get_autocomplete_v2_response_free(franchiseoffice_get_autocomplete_v2_response_t *franchiseoffice_get_autocomplete_v2_response);

franchiseoffice_get_autocomplete_v2_response_t *franchiseoffice_get_autocomplete_v2_response_parseFromJSON(cJSON *franchiseoffice_get_autocomplete_v2_responseJSON);

cJSON *franchiseoffice_get_autocomplete_v2_response_convertToJSON(franchiseoffice_get_autocomplete_v2_response_t *franchiseoffice_get_autocomplete_v2_response);

#endif /* _franchiseoffice_get_autocomplete_v2_response_H_ */

