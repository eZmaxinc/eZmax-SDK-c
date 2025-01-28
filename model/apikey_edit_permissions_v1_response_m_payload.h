/*
 * apikey_edit_permissions_v1_response_m_payload.h
 *
 * Payload for PUT /1/object/apikey/{pkiApikeyID}/editPermissions
 */

#ifndef _apikey_edit_permissions_v1_response_m_payload_H_
#define _apikey_edit_permissions_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_edit_permissions_v1_response_m_payload_t apikey_edit_permissions_v1_response_m_payload_t;




typedef struct apikey_edit_permissions_v1_response_m_payload_t {
    list_t *a_pki_permission_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} apikey_edit_permissions_v1_response_m_payload_t;

__attribute__((deprecated)) apikey_edit_permissions_v1_response_m_payload_t *apikey_edit_permissions_v1_response_m_payload_create(
    list_t *a_pki_permission_id
);

void apikey_edit_permissions_v1_response_m_payload_free(apikey_edit_permissions_v1_response_m_payload_t *apikey_edit_permissions_v1_response_m_payload);

apikey_edit_permissions_v1_response_m_payload_t *apikey_edit_permissions_v1_response_m_payload_parseFromJSON(cJSON *apikey_edit_permissions_v1_response_m_payloadJSON);

cJSON *apikey_edit_permissions_v1_response_m_payload_convertToJSON(apikey_edit_permissions_v1_response_m_payload_t *apikey_edit_permissions_v1_response_m_payload);

#endif /* _apikey_edit_permissions_v1_response_m_payload_H_ */

