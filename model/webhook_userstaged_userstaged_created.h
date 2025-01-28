/*
 * webhook_userstaged_userstaged_created.h
 *
 * This is the base Webhook object
 */

#ifndef _webhook_userstaged_userstaged_created_H_
#define _webhook_userstaged_userstaged_created_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_userstaged_userstaged_created_t webhook_userstaged_userstaged_created_t;

#include "attempt_response_compound.h"
#include "custom_webhook_response.h"
#include "userstaged_response_compound.h"



typedef struct webhook_userstaged_userstaged_created_t {
    struct custom_webhook_response_t *obj_webhook; //model
    list_t *a_obj_attempt; //nonprimitive container
    struct userstaged_response_compound_t *obj_userstaged; //model

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_userstaged_userstaged_created_t;

__attribute__((deprecated)) webhook_userstaged_userstaged_created_t *webhook_userstaged_userstaged_created_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    userstaged_response_compound_t *obj_userstaged
);

void webhook_userstaged_userstaged_created_free(webhook_userstaged_userstaged_created_t *webhook_userstaged_userstaged_created);

webhook_userstaged_userstaged_created_t *webhook_userstaged_userstaged_created_parseFromJSON(cJSON *webhook_userstaged_userstaged_createdJSON);

cJSON *webhook_userstaged_userstaged_created_convertToJSON(webhook_userstaged_userstaged_created_t *webhook_userstaged_userstaged_created);

#endif /* _webhook_userstaged_userstaged_created_H_ */

