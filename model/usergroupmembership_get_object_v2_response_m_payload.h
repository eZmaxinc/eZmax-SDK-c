/*
 * usergroupmembership_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/usergroupmembership/{pkiUsergroupmembershipID}
 */

#ifndef _usergroupmembership_get_object_v2_response_m_payload_H_
#define _usergroupmembership_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupmembership_get_object_v2_response_m_payload_t usergroupmembership_get_object_v2_response_m_payload_t;

#include "usergroupmembership_response_compound.h"



typedef struct usergroupmembership_get_object_v2_response_m_payload_t {
    struct usergroupmembership_response_compound_t *obj_usergroupmembership; //model

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupmembership_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) usergroupmembership_get_object_v2_response_m_payload_t *usergroupmembership_get_object_v2_response_m_payload_create(
    usergroupmembership_response_compound_t *obj_usergroupmembership
);

void usergroupmembership_get_object_v2_response_m_payload_free(usergroupmembership_get_object_v2_response_m_payload_t *usergroupmembership_get_object_v2_response_m_payload);

usergroupmembership_get_object_v2_response_m_payload_t *usergroupmembership_get_object_v2_response_m_payload_parseFromJSON(cJSON *usergroupmembership_get_object_v2_response_m_payloadJSON);

cJSON *usergroupmembership_get_object_v2_response_m_payload_convertToJSON(usergroupmembership_get_object_v2_response_m_payload_t *usergroupmembership_get_object_v2_response_m_payload);

#endif /* _usergroupmembership_get_object_v2_response_m_payload_H_ */

