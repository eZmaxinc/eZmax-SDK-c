/*
 * franchisebroker_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/franchisebroker/getAutocomplete
 */

#ifndef _franchisebroker_get_autocomplete_v2_response_H_
#define _franchisebroker_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchisebroker_get_autocomplete_v2_response_t franchisebroker_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "franchisebroker_get_autocomplete_v2_response_m_payload.h"



typedef struct franchisebroker_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct franchisebroker_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} franchisebroker_get_autocomplete_v2_response_t;

franchisebroker_get_autocomplete_v2_response_t *franchisebroker_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    franchisebroker_get_autocomplete_v2_response_m_payload_t *m_payload
);

void franchisebroker_get_autocomplete_v2_response_free(franchisebroker_get_autocomplete_v2_response_t *franchisebroker_get_autocomplete_v2_response);

franchisebroker_get_autocomplete_v2_response_t *franchisebroker_get_autocomplete_v2_response_parseFromJSON(cJSON *franchisebroker_get_autocomplete_v2_responseJSON);

cJSON *franchisebroker_get_autocomplete_v2_response_convertToJSON(franchisebroker_get_autocomplete_v2_response_t *franchisebroker_get_autocomplete_v2_response);

#endif /* _franchisebroker_get_autocomplete_v2_response_H_ */

