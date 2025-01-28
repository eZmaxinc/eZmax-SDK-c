/*
 * usergroupexternal_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/usergroupexternal/getAutocomplete
 */

#ifndef _usergroupexternal_get_autocomplete_v2_response_H_
#define _usergroupexternal_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_get_autocomplete_v2_response_t usergroupexternal_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "usergroupexternal_get_autocomplete_v2_response_m_payload.h"



typedef struct usergroupexternal_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct usergroupexternal_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupexternal_get_autocomplete_v2_response_t;

__attribute__((deprecated)) usergroupexternal_get_autocomplete_v2_response_t *usergroupexternal_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    usergroupexternal_get_autocomplete_v2_response_m_payload_t *m_payload
);

void usergroupexternal_get_autocomplete_v2_response_free(usergroupexternal_get_autocomplete_v2_response_t *usergroupexternal_get_autocomplete_v2_response);

usergroupexternal_get_autocomplete_v2_response_t *usergroupexternal_get_autocomplete_v2_response_parseFromJSON(cJSON *usergroupexternal_get_autocomplete_v2_responseJSON);

cJSON *usergroupexternal_get_autocomplete_v2_response_convertToJSON(usergroupexternal_get_autocomplete_v2_response_t *usergroupexternal_get_autocomplete_v2_response);

#endif /* _usergroupexternal_get_autocomplete_v2_response_H_ */

