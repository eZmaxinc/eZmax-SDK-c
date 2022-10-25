/*
 * ezsigntsarequirement_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/ezsigntsarequirement/getAutocomplete
 */

#ifndef _ezsigntsarequirement_get_autocomplete_v2_response_H_
#define _ezsigntsarequirement_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntsarequirement_get_autocomplete_v2_response_t ezsigntsarequirement_get_autocomplete_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntsarequirement_get_autocomplete_v2_response_all_of.h"
#include "ezsigntsarequirement_get_autocomplete_v2_response_m_payload.h"



typedef struct ezsigntsarequirement_get_autocomplete_v2_response_t {
    struct ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntsarequirement_get_autocomplete_v2_response_t;

ezsigntsarequirement_get_autocomplete_v2_response_t *ezsigntsarequirement_get_autocomplete_v2_response_create(
    ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntsarequirement_get_autocomplete_v2_response_free(ezsigntsarequirement_get_autocomplete_v2_response_t *ezsigntsarequirement_get_autocomplete_v2_response);

ezsigntsarequirement_get_autocomplete_v2_response_t *ezsigntsarequirement_get_autocomplete_v2_response_parseFromJSON(cJSON *ezsigntsarequirement_get_autocomplete_v2_responseJSON);

cJSON *ezsigntsarequirement_get_autocomplete_v2_response_convertToJSON(ezsigntsarequirement_get_autocomplete_v2_response_t *ezsigntsarequirement_get_autocomplete_v2_response);

#endif /* _ezsigntsarequirement_get_autocomplete_v2_response_H_ */

