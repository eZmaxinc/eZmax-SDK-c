/*
 * otherincometype_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/otherincometype/getAutocomplete
 */

#ifndef _otherincometype_get_autocomplete_v2_response_m_payload_H_
#define _otherincometype_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct otherincometype_get_autocomplete_v2_response_m_payload_t otherincometype_get_autocomplete_v2_response_m_payload_t;

#include "otherincometype_autocomplete_element_response.h"



typedef struct otherincometype_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_otherincometype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} otherincometype_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) otherincometype_get_autocomplete_v2_response_m_payload_t *otherincometype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_otherincometype
);

void otherincometype_get_autocomplete_v2_response_m_payload_free(otherincometype_get_autocomplete_v2_response_m_payload_t *otherincometype_get_autocomplete_v2_response_m_payload);

otherincometype_get_autocomplete_v2_response_m_payload_t *otherincometype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *otherincometype_get_autocomplete_v2_response_m_payloadJSON);

cJSON *otherincometype_get_autocomplete_v2_response_m_payload_convertToJSON(otherincometype_get_autocomplete_v2_response_m_payload_t *otherincometype_get_autocomplete_v2_response_m_payload);

#endif /* _otherincometype_get_autocomplete_v2_response_m_payload_H_ */

