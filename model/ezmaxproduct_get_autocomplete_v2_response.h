/*
 * ezmaxproduct_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/ezmaxproduct/getAutocomplete
 */

#ifndef _ezmaxproduct_get_autocomplete_v2_response_H_
#define _ezmaxproduct_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxproduct_get_autocomplete_v2_response_t ezmaxproduct_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezmaxproduct_get_autocomplete_v2_response_m_payload.h"



typedef struct ezmaxproduct_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezmaxproduct_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} ezmaxproduct_get_autocomplete_v2_response_t;

ezmaxproduct_get_autocomplete_v2_response_t *ezmaxproduct_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezmaxproduct_get_autocomplete_v2_response_m_payload_t *m_payload
);

void ezmaxproduct_get_autocomplete_v2_response_free(ezmaxproduct_get_autocomplete_v2_response_t *ezmaxproduct_get_autocomplete_v2_response);

ezmaxproduct_get_autocomplete_v2_response_t *ezmaxproduct_get_autocomplete_v2_response_parseFromJSON(cJSON *ezmaxproduct_get_autocomplete_v2_responseJSON);

cJSON *ezmaxproduct_get_autocomplete_v2_response_convertToJSON(ezmaxproduct_get_autocomplete_v2_response_t *ezmaxproduct_get_autocomplete_v2_response);

#endif /* _ezmaxproduct_get_autocomplete_v2_response_H_ */

