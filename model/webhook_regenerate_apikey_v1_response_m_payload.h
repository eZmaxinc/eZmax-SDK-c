/*
 * webhook_regenerate_apikey_v1_response_m_payload.h
 *
 * Response for POST /1/object/webhook/{pkiWebhookID}/regenerateApikey
 */

#ifndef _webhook_regenerate_apikey_v1_response_m_payload_H_
#define _webhook_regenerate_apikey_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_regenerate_apikey_v1_response_m_payload_t webhook_regenerate_apikey_v1_response_m_payload_t;

#include "webhook_response_compound.h"



typedef struct webhook_regenerate_apikey_v1_response_m_payload_t {
    struct webhook_response_compound_t *obj_webhook; //model

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_regenerate_apikey_v1_response_m_payload_t;

__attribute__((deprecated)) webhook_regenerate_apikey_v1_response_m_payload_t *webhook_regenerate_apikey_v1_response_m_payload_create(
    webhook_response_compound_t *obj_webhook
);

void webhook_regenerate_apikey_v1_response_m_payload_free(webhook_regenerate_apikey_v1_response_m_payload_t *webhook_regenerate_apikey_v1_response_m_payload);

webhook_regenerate_apikey_v1_response_m_payload_t *webhook_regenerate_apikey_v1_response_m_payload_parseFromJSON(cJSON *webhook_regenerate_apikey_v1_response_m_payloadJSON);

cJSON *webhook_regenerate_apikey_v1_response_m_payload_convertToJSON(webhook_regenerate_apikey_v1_response_m_payload_t *webhook_regenerate_apikey_v1_response_m_payload);

#endif /* _webhook_regenerate_apikey_v1_response_m_payload_H_ */

