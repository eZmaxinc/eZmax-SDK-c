/*
 * creditcardclient_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/creditcardclient/getAutocomplete
 */

#ifndef _creditcardclient_get_autocomplete_v2_response_m_payload_H_
#define _creditcardclient_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct creditcardclient_get_autocomplete_v2_response_m_payload_t creditcardclient_get_autocomplete_v2_response_m_payload_t;

#include "creditcardclient_autocomplete_element_response.h"



typedef struct creditcardclient_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_creditcardclient; //nonprimitive container

} creditcardclient_get_autocomplete_v2_response_m_payload_t;

creditcardclient_get_autocomplete_v2_response_m_payload_t *creditcardclient_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_creditcardclient
);

void creditcardclient_get_autocomplete_v2_response_m_payload_free(creditcardclient_get_autocomplete_v2_response_m_payload_t *creditcardclient_get_autocomplete_v2_response_m_payload);

creditcardclient_get_autocomplete_v2_response_m_payload_t *creditcardclient_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *creditcardclient_get_autocomplete_v2_response_m_payloadJSON);

cJSON *creditcardclient_get_autocomplete_v2_response_m_payload_convertToJSON(creditcardclient_get_autocomplete_v2_response_m_payload_t *creditcardclient_get_autocomplete_v2_response_m_payload);

#endif /* _creditcardclient_get_autocomplete_v2_response_m_payload_H_ */

