/*
 * contacttitle_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/contacttitle/getAutocomplete
 */

#ifndef _contacttitle_get_autocomplete_v2_response_m_payload_H_
#define _contacttitle_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contacttitle_get_autocomplete_v2_response_m_payload_t contacttitle_get_autocomplete_v2_response_m_payload_t;

#include "contacttitle_autocomplete_element_response.h"



typedef struct contacttitle_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_contacttitle; //nonprimitive container

} contacttitle_get_autocomplete_v2_response_m_payload_t;

contacttitle_get_autocomplete_v2_response_m_payload_t *contacttitle_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_contacttitle
);

void contacttitle_get_autocomplete_v2_response_m_payload_free(contacttitle_get_autocomplete_v2_response_m_payload_t *contacttitle_get_autocomplete_v2_response_m_payload);

contacttitle_get_autocomplete_v2_response_m_payload_t *contacttitle_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *contacttitle_get_autocomplete_v2_response_m_payloadJSON);

cJSON *contacttitle_get_autocomplete_v2_response_m_payload_convertToJSON(contacttitle_get_autocomplete_v2_response_m_payload_t *contacttitle_get_autocomplete_v2_response_m_payload);

#endif /* _contacttitle_get_autocomplete_v2_response_m_payload_H_ */

