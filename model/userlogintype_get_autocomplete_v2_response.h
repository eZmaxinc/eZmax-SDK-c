/*
 * userlogintype_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/userlogintype/getAutocomplete
 */

#ifndef _userlogintype_get_autocomplete_v2_response_H_
#define _userlogintype_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userlogintype_get_autocomplete_v2_response_t userlogintype_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "userlogintype_get_autocomplete_v2_response_m_payload.h"



typedef struct userlogintype_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct userlogintype_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} userlogintype_get_autocomplete_v2_response_t;

__attribute__((deprecated)) userlogintype_get_autocomplete_v2_response_t *userlogintype_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    userlogintype_get_autocomplete_v2_response_m_payload_t *m_payload
);

void userlogintype_get_autocomplete_v2_response_free(userlogintype_get_autocomplete_v2_response_t *userlogintype_get_autocomplete_v2_response);

userlogintype_get_autocomplete_v2_response_t *userlogintype_get_autocomplete_v2_response_parseFromJSON(cJSON *userlogintype_get_autocomplete_v2_responseJSON);

cJSON *userlogintype_get_autocomplete_v2_response_convertToJSON(userlogintype_get_autocomplete_v2_response_t *userlogintype_get_autocomplete_v2_response);

#endif /* _userlogintype_get_autocomplete_v2_response_H_ */

