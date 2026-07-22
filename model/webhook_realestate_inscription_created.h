/*
 * webhook_realestate_inscription_created.h
 *
 * This is a webhook for a RealestateInscriptionCreated event
 */

#ifndef _webhook_realestate_inscription_created_H_
#define _webhook_realestate_inscription_created_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_realestate_inscription_created_t webhook_realestate_inscription_created_t;

#include "attempt_response_compound.h"
#include "custom_webhook_response.h"
#include "inscription_response.h"



typedef struct webhook_realestate_inscription_created_t {
    struct custom_webhook_response_t *obj_webhook; //model
    list_t *a_obj_attempt; //nonprimitive container
    struct inscription_response_t *obj_inscription; //model

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_realestate_inscription_created_t;

__attribute__((deprecated)) webhook_realestate_inscription_created_t *webhook_realestate_inscription_created_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    inscription_response_t *obj_inscription
);

void webhook_realestate_inscription_created_free(webhook_realestate_inscription_created_t *webhook_realestate_inscription_created);

webhook_realestate_inscription_created_t *webhook_realestate_inscription_created_parseFromJSON(cJSON *webhook_realestate_inscription_createdJSON);

cJSON *webhook_realestate_inscription_created_convertToJSON(webhook_realestate_inscription_created_t *webhook_realestate_inscription_created);

#endif /* _webhook_realestate_inscription_created_H_ */

