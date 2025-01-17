/*
 * ezsignsigningreason_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/ezsignsigningreason/getAutocomplete
 */

#ifndef _ezsignsigningreason_get_autocomplete_v2_response_H_
#define _ezsignsigningreason_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_get_autocomplete_v2_response_t ezsignsigningreason_get_autocomplete_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignsigningreason_get_autocomplete_v2_response_m_payload.h"



typedef struct ezsignsigningreason_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignsigningreason_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} ezsignsigningreason_get_autocomplete_v2_response_t;

ezsignsigningreason_get_autocomplete_v2_response_t *ezsignsigningreason_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignsigningreason_get_autocomplete_v2_response_m_payload_t *m_payload
);

void ezsignsigningreason_get_autocomplete_v2_response_free(ezsignsigningreason_get_autocomplete_v2_response_t *ezsignsigningreason_get_autocomplete_v2_response);

ezsignsigningreason_get_autocomplete_v2_response_t *ezsignsigningreason_get_autocomplete_v2_response_parseFromJSON(cJSON *ezsignsigningreason_get_autocomplete_v2_responseJSON);

cJSON *ezsignsigningreason_get_autocomplete_v2_response_convertToJSON(ezsignsigningreason_get_autocomplete_v2_response_t *ezsignsigningreason_get_autocomplete_v2_response);

#endif /* _ezsignsigningreason_get_autocomplete_v2_response_H_ */

