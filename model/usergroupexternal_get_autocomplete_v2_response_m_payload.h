/*
 * usergroupexternal_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/usergroupexternal/getAutocomplete
 */

#ifndef _usergroupexternal_get_autocomplete_v2_response_m_payload_H_
#define _usergroupexternal_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_get_autocomplete_v2_response_m_payload_t usergroupexternal_get_autocomplete_v2_response_m_payload_t;

#include "usergroupexternal_autocomplete_element_response.h"



typedef struct usergroupexternal_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_usergroupexternal; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupexternal_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) usergroupexternal_get_autocomplete_v2_response_m_payload_t *usergroupexternal_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_usergroupexternal
);

void usergroupexternal_get_autocomplete_v2_response_m_payload_free(usergroupexternal_get_autocomplete_v2_response_m_payload_t *usergroupexternal_get_autocomplete_v2_response_m_payload);

usergroupexternal_get_autocomplete_v2_response_m_payload_t *usergroupexternal_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *usergroupexternal_get_autocomplete_v2_response_m_payloadJSON);

cJSON *usergroupexternal_get_autocomplete_v2_response_m_payload_convertToJSON(usergroupexternal_get_autocomplete_v2_response_m_payload_t *usergroupexternal_get_autocomplete_v2_response_m_payload);

#endif /* _usergroupexternal_get_autocomplete_v2_response_m_payload_H_ */

