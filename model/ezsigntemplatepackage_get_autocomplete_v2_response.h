/*
 * ezsigntemplatepackage_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/ezsigntemplatepackage/getAutocomplete
 */

#ifndef _ezsigntemplatepackage_get_autocomplete_v2_response_H_
#define _ezsigntemplatepackage_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_get_autocomplete_v2_response_t ezsigntemplatepackage_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatepackage_get_autocomplete_v2_response_m_payload.h"



typedef struct ezsigntemplatepackage_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackage_get_autocomplete_v2_response_t;

__attribute__((deprecated)) ezsigntemplatepackage_get_autocomplete_v2_response_t *ezsigntemplatepackage_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t *m_payload
);

void ezsigntemplatepackage_get_autocomplete_v2_response_free(ezsigntemplatepackage_get_autocomplete_v2_response_t *ezsigntemplatepackage_get_autocomplete_v2_response);

ezsigntemplatepackage_get_autocomplete_v2_response_t *ezsigntemplatepackage_get_autocomplete_v2_response_parseFromJSON(cJSON *ezsigntemplatepackage_get_autocomplete_v2_responseJSON);

cJSON *ezsigntemplatepackage_get_autocomplete_v2_response_convertToJSON(ezsigntemplatepackage_get_autocomplete_v2_response_t *ezsigntemplatepackage_get_autocomplete_v2_response);

#endif /* _ezsigntemplatepackage_get_autocomplete_v2_response_H_ */

