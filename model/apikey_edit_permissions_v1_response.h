/*
 * apikey_edit_permissions_v1_response.h
 *
 * Response for PUT /1/object/apikey/{pkiApikeyID}/editPermissions
 */

#ifndef _apikey_edit_permissions_v1_response_H_
#define _apikey_edit_permissions_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_edit_permissions_v1_response_t apikey_edit_permissions_v1_response_t;

#include "apikey_edit_permissions_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct apikey_edit_permissions_v1_response_t {
    struct apikey_edit_permissions_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} apikey_edit_permissions_v1_response_t;

apikey_edit_permissions_v1_response_t *apikey_edit_permissions_v1_response_create(
    apikey_edit_permissions_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void apikey_edit_permissions_v1_response_free(apikey_edit_permissions_v1_response_t *apikey_edit_permissions_v1_response);

apikey_edit_permissions_v1_response_t *apikey_edit_permissions_v1_response_parseFromJSON(cJSON *apikey_edit_permissions_v1_responseJSON);

cJSON *apikey_edit_permissions_v1_response_convertToJSON(apikey_edit_permissions_v1_response_t *apikey_edit_permissions_v1_response);

#endif /* _apikey_edit_permissions_v1_response_H_ */

