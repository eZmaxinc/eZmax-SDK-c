/*
 * webhook_get_history_v1_response_m_payload.h
 *
 * Payload for GET /1/object/webhook/{pkiWebhookID}/getHistory
 */

#ifndef _webhook_get_history_v1_response_m_payload_H_
#define _webhook_get_history_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_get_history_v1_response_m_payload_t webhook_get_history_v1_response_m_payload_t;

#include "custom_webhooklog_response.h"



typedef struct webhook_get_history_v1_response_m_payload_t {
    list_t *a_obj_webhooklog; //nonprimitive container

} webhook_get_history_v1_response_m_payload_t;

webhook_get_history_v1_response_m_payload_t *webhook_get_history_v1_response_m_payload_create(
    list_t *a_obj_webhooklog
);

void webhook_get_history_v1_response_m_payload_free(webhook_get_history_v1_response_m_payload_t *webhook_get_history_v1_response_m_payload);

webhook_get_history_v1_response_m_payload_t *webhook_get_history_v1_response_m_payload_parseFromJSON(cJSON *webhook_get_history_v1_response_m_payloadJSON);

cJSON *webhook_get_history_v1_response_m_payload_convertToJSON(webhook_get_history_v1_response_m_payload_t *webhook_get_history_v1_response_m_payload);

#endif /* _webhook_get_history_v1_response_m_payload_H_ */

