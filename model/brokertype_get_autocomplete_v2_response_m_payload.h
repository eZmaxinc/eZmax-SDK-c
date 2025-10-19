/*
 * brokertype_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/brokertype/getAutocomplete
 */

#ifndef _brokertype_get_autocomplete_v2_response_m_payload_H_
#define _brokertype_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct brokertype_get_autocomplete_v2_response_m_payload_t brokertype_get_autocomplete_v2_response_m_payload_t;

#include "brokertype_autocomplete_element_response.h"



typedef struct brokertype_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_brokertype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} brokertype_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) brokertype_get_autocomplete_v2_response_m_payload_t *brokertype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_brokertype
);

void brokertype_get_autocomplete_v2_response_m_payload_free(brokertype_get_autocomplete_v2_response_m_payload_t *brokertype_get_autocomplete_v2_response_m_payload);

brokertype_get_autocomplete_v2_response_m_payload_t *brokertype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *brokertype_get_autocomplete_v2_response_m_payloadJSON);

cJSON *brokertype_get_autocomplete_v2_response_m_payload_convertToJSON(brokertype_get_autocomplete_v2_response_m_payload_t *brokertype_get_autocomplete_v2_response_m_payload);

#endif /* _brokertype_get_autocomplete_v2_response_m_payload_H_ */

