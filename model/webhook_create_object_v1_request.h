/*
 * webhook_create_object_v1_request.h
 *
 * Request for POST /1/object/webhook
 */

#ifndef _webhook_create_object_v1_request_H_
#define _webhook_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_create_object_v1_request_t webhook_create_object_v1_request_t;

#include "webhook_request_compound.h"



typedef struct webhook_create_object_v1_request_t {
    list_t *a_obj_webhook; //nonprimitive container

} webhook_create_object_v1_request_t;

webhook_create_object_v1_request_t *webhook_create_object_v1_request_create(
    list_t *a_obj_webhook
);

void webhook_create_object_v1_request_free(webhook_create_object_v1_request_t *webhook_create_object_v1_request);

webhook_create_object_v1_request_t *webhook_create_object_v1_request_parseFromJSON(cJSON *webhook_create_object_v1_requestJSON);

cJSON *webhook_create_object_v1_request_convertToJSON(webhook_create_object_v1_request_t *webhook_create_object_v1_request);

#endif /* _webhook_create_object_v1_request_H_ */

