/*
 * ezsigntemplateglobal_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplateglobal/getAutocomplete
 */

#ifndef _ezsigntemplateglobal_get_autocomplete_v2_response_H_
#define _ezsigntemplateglobal_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateglobal_get_autocomplete_v2_response_t ezsigntemplateglobal_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplateglobal_get_autocomplete_v2_response_m_payload.h"



typedef struct ezsigntemplateglobal_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} ezsigntemplateglobal_get_autocomplete_v2_response_t;

ezsigntemplateglobal_get_autocomplete_v2_response_t *ezsigntemplateglobal_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t *m_payload
);

void ezsigntemplateglobal_get_autocomplete_v2_response_free(ezsigntemplateglobal_get_autocomplete_v2_response_t *ezsigntemplateglobal_get_autocomplete_v2_response);

ezsigntemplateglobal_get_autocomplete_v2_response_t *ezsigntemplateglobal_get_autocomplete_v2_response_parseFromJSON(cJSON *ezsigntemplateglobal_get_autocomplete_v2_responseJSON);

cJSON *ezsigntemplateglobal_get_autocomplete_v2_response_convertToJSON(ezsigntemplateglobal_get_autocomplete_v2_response_t *ezsigntemplateglobal_get_autocomplete_v2_response);

#endif /* _ezsigntemplateglobal_get_autocomplete_v2_response_H_ */

