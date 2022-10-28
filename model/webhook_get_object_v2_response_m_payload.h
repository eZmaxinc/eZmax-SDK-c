/*
 * webhook_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/webhook/{pkiWebhookID}
 */

#ifndef _webhook_get_object_v2_response_m_payload_H_
#define _webhook_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_get_object_v2_response_m_payload_t webhook_get_object_v2_response_m_payload_t;

#include "webhook_response_compound.h"



typedef struct webhook_get_object_v2_response_m_payload_t {
    struct webhook_response_compound_t *obj_webhook; //model

} webhook_get_object_v2_response_m_payload_t;

webhook_get_object_v2_response_m_payload_t *webhook_get_object_v2_response_m_payload_create(
    webhook_response_compound_t *obj_webhook
);

void webhook_get_object_v2_response_m_payload_free(webhook_get_object_v2_response_m_payload_t *webhook_get_object_v2_response_m_payload);

webhook_get_object_v2_response_m_payload_t *webhook_get_object_v2_response_m_payload_parseFromJSON(cJSON *webhook_get_object_v2_response_m_payloadJSON);

cJSON *webhook_get_object_v2_response_m_payload_convertToJSON(webhook_get_object_v2_response_m_payload_t *webhook_get_object_v2_response_m_payload);

#endif /* _webhook_get_object_v2_response_m_payload_H_ */

