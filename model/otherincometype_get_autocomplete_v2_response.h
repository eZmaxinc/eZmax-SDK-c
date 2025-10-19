/*
 * otherincometype_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/otherincometype/getAutocomplete
 */

#ifndef _otherincometype_get_autocomplete_v2_response_H_
#define _otherincometype_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct otherincometype_get_autocomplete_v2_response_t otherincometype_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "otherincometype_get_autocomplete_v2_response_m_payload.h"



typedef struct otherincometype_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct otherincometype_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} otherincometype_get_autocomplete_v2_response_t;

__attribute__((deprecated)) otherincometype_get_autocomplete_v2_response_t *otherincometype_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    otherincometype_get_autocomplete_v2_response_m_payload_t *m_payload
);

void otherincometype_get_autocomplete_v2_response_free(otherincometype_get_autocomplete_v2_response_t *otherincometype_get_autocomplete_v2_response);

otherincometype_get_autocomplete_v2_response_t *otherincometype_get_autocomplete_v2_response_parseFromJSON(cJSON *otherincometype_get_autocomplete_v2_responseJSON);

cJSON *otherincometype_get_autocomplete_v2_response_convertToJSON(otherincometype_get_autocomplete_v2_response_t *otherincometype_get_autocomplete_v2_response);

#endif /* _otherincometype_get_autocomplete_v2_response_H_ */

