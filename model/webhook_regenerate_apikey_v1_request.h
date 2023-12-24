/*
 * webhook_regenerate_apikey_v1_request.h
 *
 * Request for POST /1/object/webhook/{pkiWebhookID}/regenerateApikey
 */

#ifndef _webhook_regenerate_apikey_v1_request_H_
#define _webhook_regenerate_apikey_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_regenerate_apikey_v1_request_t webhook_regenerate_apikey_v1_request_t;




typedef struct webhook_regenerate_apikey_v1_request_t {
    int b_webhook_issigned; //boolean

} webhook_regenerate_apikey_v1_request_t;

webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request_create(
    int b_webhook_issigned
);

void webhook_regenerate_apikey_v1_request_free(webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request);

webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request_parseFromJSON(cJSON *webhook_regenerate_apikey_v1_requestJSON);

cJSON *webhook_regenerate_apikey_v1_request_convertToJSON(webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request);

#endif /* _webhook_regenerate_apikey_v1_request_H_ */

