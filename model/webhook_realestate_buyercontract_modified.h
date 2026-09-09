/*
 * webhook_realestate_buyercontract_modified.h
 *
 * This is the base Webhook object
 */

#ifndef _webhook_realestate_buyercontract_modified_H_
#define _webhook_realestate_buyercontract_modified_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_realestate_buyercontract_modified_t webhook_realestate_buyercontract_modified_t;

#include "attempt_response_compound.h"
#include "buyercontract_response.h"
#include "custom_webhook_response.h"



typedef struct webhook_realestate_buyercontract_modified_t {
    struct custom_webhook_response_t *obj_webhook; //model
    list_t *a_obj_attempt; //nonprimitive container
    struct buyercontract_response_t *obj_buyercontract; //model

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_realestate_buyercontract_modified_t;

__attribute__((deprecated)) webhook_realestate_buyercontract_modified_t *webhook_realestate_buyercontract_modified_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    buyercontract_response_t *obj_buyercontract
);

void webhook_realestate_buyercontract_modified_free(webhook_realestate_buyercontract_modified_t *webhook_realestate_buyercontract_modified);

webhook_realestate_buyercontract_modified_t *webhook_realestate_buyercontract_modified_parseFromJSON(cJSON *webhook_realestate_buyercontract_modifiedJSON);

cJSON *webhook_realestate_buyercontract_modified_convertToJSON(webhook_realestate_buyercontract_modified_t *webhook_realestate_buyercontract_modified);

#endif /* _webhook_realestate_buyercontract_modified_H_ */

