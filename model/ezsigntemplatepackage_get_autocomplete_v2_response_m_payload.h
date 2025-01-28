/*
 * ezsigntemplatepackage_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/ezsigntemplatepackage/getAutocomplete
 */

#ifndef _ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_H_
#define _ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t;

#include "ezsigntemplatepackage_autocomplete_element_response.h"



typedef struct ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_ezsigntemplatepackage; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t *ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_ezsigntemplatepackage
);

void ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_free(ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t *ezsigntemplatepackage_get_autocomplete_v2_response_m_payload);

ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t *ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackage_get_autocomplete_v2_response_m_payloadJSON);

cJSON *ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_convertToJSON(ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_t *ezsigntemplatepackage_get_autocomplete_v2_response_m_payload);

#endif /* _ezsigntemplatepackage_get_autocomplete_v2_response_m_payload_H_ */

