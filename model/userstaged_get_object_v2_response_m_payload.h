/*
 * userstaged_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/userstaged/{pkiUserstagedID}
 */

#ifndef _userstaged_get_object_v2_response_m_payload_H_
#define _userstaged_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userstaged_get_object_v2_response_m_payload_t userstaged_get_object_v2_response_m_payload_t;

#include "userstaged_response_compound.h"



typedef struct userstaged_get_object_v2_response_m_payload_t {
    struct userstaged_response_compound_t *obj_userstaged; //model

    int _library_owned; // Is the library responsible for freeing this object?
} userstaged_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload_create(
    userstaged_response_compound_t *obj_userstaged
);

void userstaged_get_object_v2_response_m_payload_free(userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload);

userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload_parseFromJSON(cJSON *userstaged_get_object_v2_response_m_payloadJSON);

cJSON *userstaged_get_object_v2_response_m_payload_convertToJSON(userstaged_get_object_v2_response_m_payload_t *userstaged_get_object_v2_response_m_payload);

#endif /* _userstaged_get_object_v2_response_m_payload_H_ */

