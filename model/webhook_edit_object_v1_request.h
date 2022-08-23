/*
 * webhook_edit_object_v1_request.h
 *
 * Request for PUT /1/object/webhook/{pkiWebhookID}
 */

#ifndef _webhook_edit_object_v1_request_H_
#define _webhook_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_edit_object_v1_request_t webhook_edit_object_v1_request_t;

#include "webhook_request_compound.h"



typedef struct webhook_edit_object_v1_request_t {
    struct webhook_request_compound_t *obj_webhook; //model

} webhook_edit_object_v1_request_t;

webhook_edit_object_v1_request_t *webhook_edit_object_v1_request_create(
    webhook_request_compound_t *obj_webhook
);

void webhook_edit_object_v1_request_free(webhook_edit_object_v1_request_t *webhook_edit_object_v1_request);

webhook_edit_object_v1_request_t *webhook_edit_object_v1_request_parseFromJSON(cJSON *webhook_edit_object_v1_requestJSON);

cJSON *webhook_edit_object_v1_request_convertToJSON(webhook_edit_object_v1_request_t *webhook_edit_object_v1_request);

#endif /* _webhook_edit_object_v1_request_H_ */

