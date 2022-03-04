/*
 * common_webhook.h
 *
 * This is the base Webhook object
 */

#ifndef _common_webhook_H_
#define _common_webhook_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_webhook_t common_webhook_t;

#include "attempt_response_compound.h"
#include "webhook_response.h"



typedef struct common_webhook_t {
    struct webhook_response_t *obj_webhook; //model
    list_t *a_obj_attempt; //nonprimitive container

} common_webhook_t;

common_webhook_t *common_webhook_create(
    webhook_response_t *obj_webhook,
    list_t *a_obj_attempt
);

void common_webhook_free(common_webhook_t *common_webhook);

common_webhook_t *common_webhook_parseFromJSON(cJSON *common_webhookJSON);

cJSON *common_webhook_convertToJSON(common_webhook_t *common_webhook);

#endif /* _common_webhook_H_ */

