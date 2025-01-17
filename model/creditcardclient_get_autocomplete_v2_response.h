/*
 * creditcardclient_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/creditcardclient/getAutocomplete
 */

#ifndef _creditcardclient_get_autocomplete_v2_response_H_
#define _creditcardclient_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardclient_get_autocomplete_v2_response_t creditcardclient_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "creditcardclient_get_autocomplete_v2_response_m_payload.h"



typedef struct creditcardclient_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct creditcardclient_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} creditcardclient_get_autocomplete_v2_response_t;

creditcardclient_get_autocomplete_v2_response_t *creditcardclient_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    creditcardclient_get_autocomplete_v2_response_m_payload_t *m_payload
);

void creditcardclient_get_autocomplete_v2_response_free(creditcardclient_get_autocomplete_v2_response_t *creditcardclient_get_autocomplete_v2_response);

creditcardclient_get_autocomplete_v2_response_t *creditcardclient_get_autocomplete_v2_response_parseFromJSON(cJSON *creditcardclient_get_autocomplete_v2_responseJSON);

cJSON *creditcardclient_get_autocomplete_v2_response_convertToJSON(creditcardclient_get_autocomplete_v2_response_t *creditcardclient_get_autocomplete_v2_response);

#endif /* _creditcardclient_get_autocomplete_v2_response_H_ */

