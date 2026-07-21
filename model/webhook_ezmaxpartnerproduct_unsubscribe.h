/*
 * webhook_ezmaxpartnerproduct_unsubscribe.h
 *
 * This is the base Webhook object
 */

#ifndef _webhook_ezmaxpartnerproduct_unsubscribe_H_
#define _webhook_ezmaxpartnerproduct_unsubscribe_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_ezmaxpartnerproduct_unsubscribe_t webhook_ezmaxpartnerproduct_unsubscribe_t;

#include "attempt_response_compound.h"
#include "custom_ezmaxpartnerproduct_subscribe.h"
#include "custom_webhook_response.h"



typedef struct webhook_ezmaxpartnerproduct_unsubscribe_t {
    struct custom_webhook_response_t *obj_webhook; //model
    list_t *a_obj_attempt; //nonprimitive container
    struct custom_ezmaxpartnerproduct_subscribe_t *obj_ezmaxpartnerproduct; //model
    char *s_external_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_ezmaxpartnerproduct_unsubscribe_t;

__attribute__((deprecated)) webhook_ezmaxpartnerproduct_unsubscribe_t *webhook_ezmaxpartnerproduct_unsubscribe_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    custom_ezmaxpartnerproduct_subscribe_t *obj_ezmaxpartnerproduct,
    char *s_external_id
);

void webhook_ezmaxpartnerproduct_unsubscribe_free(webhook_ezmaxpartnerproduct_unsubscribe_t *webhook_ezmaxpartnerproduct_unsubscribe);

webhook_ezmaxpartnerproduct_unsubscribe_t *webhook_ezmaxpartnerproduct_unsubscribe_parseFromJSON(cJSON *webhook_ezmaxpartnerproduct_unsubscribeJSON);

cJSON *webhook_ezmaxpartnerproduct_unsubscribe_convertToJSON(webhook_ezmaxpartnerproduct_unsubscribe_t *webhook_ezmaxpartnerproduct_unsubscribe);

#endif /* _webhook_ezmaxpartnerproduct_unsubscribe_H_ */

