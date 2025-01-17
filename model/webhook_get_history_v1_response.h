/*
 * webhook_get_history_v1_response.h
 *
 * Response for GET /1/object/webhook/{pkiWebhookID}/getHistory
 */

#ifndef _webhook_get_history_v1_response_H_
#define _webhook_get_history_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_get_history_v1_response_t webhook_get_history_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "webhook_get_history_v1_response_m_payload.h"



typedef struct webhook_get_history_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct webhook_get_history_v1_response_m_payload_t *m_payload; //model

} webhook_get_history_v1_response_t;

webhook_get_history_v1_response_t *webhook_get_history_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    webhook_get_history_v1_response_m_payload_t *m_payload
);

void webhook_get_history_v1_response_free(webhook_get_history_v1_response_t *webhook_get_history_v1_response);

webhook_get_history_v1_response_t *webhook_get_history_v1_response_parseFromJSON(cJSON *webhook_get_history_v1_responseJSON);

cJSON *webhook_get_history_v1_response_convertToJSON(webhook_get_history_v1_response_t *webhook_get_history_v1_response);

#endif /* _webhook_get_history_v1_response_H_ */

