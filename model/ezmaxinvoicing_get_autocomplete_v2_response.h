/*
 * ezmaxinvoicing_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/ezmaxinvoicing/getAutocomplete
 */

#ifndef _ezmaxinvoicing_get_autocomplete_v2_response_H_
#define _ezmaxinvoicing_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicing_get_autocomplete_v2_response_t ezmaxinvoicing_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezmaxinvoicing_get_autocomplete_v2_response_m_payload.h"



typedef struct ezmaxinvoicing_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxinvoicing_get_autocomplete_v2_response_t;

__attribute__((deprecated)) ezmaxinvoicing_get_autocomplete_v2_response_t *ezmaxinvoicing_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *m_payload
);

void ezmaxinvoicing_get_autocomplete_v2_response_free(ezmaxinvoicing_get_autocomplete_v2_response_t *ezmaxinvoicing_get_autocomplete_v2_response);

ezmaxinvoicing_get_autocomplete_v2_response_t *ezmaxinvoicing_get_autocomplete_v2_response_parseFromJSON(cJSON *ezmaxinvoicing_get_autocomplete_v2_responseJSON);

cJSON *ezmaxinvoicing_get_autocomplete_v2_response_convertToJSON(ezmaxinvoicing_get_autocomplete_v2_response_t *ezmaxinvoicing_get_autocomplete_v2_response);

#endif /* _ezmaxinvoicing_get_autocomplete_v2_response_H_ */

