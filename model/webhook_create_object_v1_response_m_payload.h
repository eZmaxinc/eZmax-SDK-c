/*
 * webhook_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/webhook
 */

#ifndef _webhook_create_object_v1_response_m_payload_H_
#define _webhook_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_create_object_v1_response_m_payload_t webhook_create_object_v1_response_m_payload_t;




typedef struct webhook_create_object_v1_response_m_payload_t {
    list_t *a_pki_webhook_id; //primitive container

} webhook_create_object_v1_response_m_payload_t;

webhook_create_object_v1_response_m_payload_t *webhook_create_object_v1_response_m_payload_create(
    list_t *a_pki_webhook_id
);

void webhook_create_object_v1_response_m_payload_free(webhook_create_object_v1_response_m_payload_t *webhook_create_object_v1_response_m_payload);

webhook_create_object_v1_response_m_payload_t *webhook_create_object_v1_response_m_payload_parseFromJSON(cJSON *webhook_create_object_v1_response_m_payloadJSON);

cJSON *webhook_create_object_v1_response_m_payload_convertToJSON(webhook_create_object_v1_response_m_payload_t *webhook_create_object_v1_response_m_payload);

#endif /* _webhook_create_object_v1_response_m_payload_H_ */

