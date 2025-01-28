/*
 * webhook_create_object_v2_response_m_payload.h
 *
 * Payload for POST /2/object/webhook
 */

#ifndef _webhook_create_object_v2_response_m_payload_H_
#define _webhook_create_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_create_object_v2_response_m_payload_t webhook_create_object_v2_response_m_payload_t;

#include "webhook_response_compound.h"



typedef struct webhook_create_object_v2_response_m_payload_t {
    list_t *a_obj_webhook; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_create_object_v2_response_m_payload_t;

__attribute__((deprecated)) webhook_create_object_v2_response_m_payload_t *webhook_create_object_v2_response_m_payload_create(
    list_t *a_obj_webhook
);

void webhook_create_object_v2_response_m_payload_free(webhook_create_object_v2_response_m_payload_t *webhook_create_object_v2_response_m_payload);

webhook_create_object_v2_response_m_payload_t *webhook_create_object_v2_response_m_payload_parseFromJSON(cJSON *webhook_create_object_v2_response_m_payloadJSON);

cJSON *webhook_create_object_v2_response_m_payload_convertToJSON(webhook_create_object_v2_response_m_payload_t *webhook_create_object_v2_response_m_payload);

#endif /* _webhook_create_object_v2_response_m_payload_H_ */

