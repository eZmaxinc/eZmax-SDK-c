/*
 * company_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/company/getAutocomplete
 */

#ifndef _company_get_autocomplete_v2_response_H_
#define _company_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct company_get_autocomplete_v2_response_t company_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "company_get_autocomplete_v2_response_m_payload.h"



typedef struct company_get_autocomplete_v2_response_t {
    struct company_get_autocomplete_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} company_get_autocomplete_v2_response_t;

company_get_autocomplete_v2_response_t *company_get_autocomplete_v2_response_create(
    company_get_autocomplete_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void company_get_autocomplete_v2_response_free(company_get_autocomplete_v2_response_t *company_get_autocomplete_v2_response);

company_get_autocomplete_v2_response_t *company_get_autocomplete_v2_response_parseFromJSON(cJSON *company_get_autocomplete_v2_responseJSON);

cJSON *company_get_autocomplete_v2_response_convertToJSON(company_get_autocomplete_v2_response_t *company_get_autocomplete_v2_response);

#endif /* _company_get_autocomplete_v2_response_H_ */

