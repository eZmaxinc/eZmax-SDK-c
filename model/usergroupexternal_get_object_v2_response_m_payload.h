/*
 * usergroupexternal_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/usergroupexternal/{pkiUsergroupexternalID}
 */

#ifndef _usergroupexternal_get_object_v2_response_m_payload_H_
#define _usergroupexternal_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_get_object_v2_response_m_payload_t usergroupexternal_get_object_v2_response_m_payload_t;

#include "usergroupexternal_response_compound.h"



typedef struct usergroupexternal_get_object_v2_response_m_payload_t {
    struct usergroupexternal_response_compound_t *obj_usergroupexternal; //model

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupexternal_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) usergroupexternal_get_object_v2_response_m_payload_t *usergroupexternal_get_object_v2_response_m_payload_create(
    usergroupexternal_response_compound_t *obj_usergroupexternal
);

void usergroupexternal_get_object_v2_response_m_payload_free(usergroupexternal_get_object_v2_response_m_payload_t *usergroupexternal_get_object_v2_response_m_payload);

usergroupexternal_get_object_v2_response_m_payload_t *usergroupexternal_get_object_v2_response_m_payload_parseFromJSON(cJSON *usergroupexternal_get_object_v2_response_m_payloadJSON);

cJSON *usergroupexternal_get_object_v2_response_m_payload_convertToJSON(usergroupexternal_get_object_v2_response_m_payload_t *usergroupexternal_get_object_v2_response_m_payload);

#endif /* _usergroupexternal_get_object_v2_response_m_payload_H_ */

