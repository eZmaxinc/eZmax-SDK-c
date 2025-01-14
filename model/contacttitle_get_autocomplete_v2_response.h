/*
 * contacttitle_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/contacttitle/getAutocomplete
 */

#ifndef _contacttitle_get_autocomplete_v2_response_H_
#define _contacttitle_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct contacttitle_get_autocomplete_v2_response_t contacttitle_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "contacttitle_get_autocomplete_v2_response_m_payload.h"



typedef struct contacttitle_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct contacttitle_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} contacttitle_get_autocomplete_v2_response_t;

contacttitle_get_autocomplete_v2_response_t *contacttitle_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    contacttitle_get_autocomplete_v2_response_m_payload_t *m_payload
);

void contacttitle_get_autocomplete_v2_response_free(contacttitle_get_autocomplete_v2_response_t *contacttitle_get_autocomplete_v2_response);

contacttitle_get_autocomplete_v2_response_t *contacttitle_get_autocomplete_v2_response_parseFromJSON(cJSON *contacttitle_get_autocomplete_v2_responseJSON);

cJSON *contacttitle_get_autocomplete_v2_response_convertToJSON(contacttitle_get_autocomplete_v2_response_t *contacttitle_get_autocomplete_v2_response);

#endif /* _contacttitle_get_autocomplete_v2_response_H_ */

