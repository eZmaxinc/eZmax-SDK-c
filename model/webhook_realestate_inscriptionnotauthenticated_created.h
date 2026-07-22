/*
 * webhook_realestate_inscriptionnotauthenticated_created.h
 *
 * This is a webhook for a RealestateInscriptionnotauthenticatedCreated event
 */

#ifndef _webhook_realestate_inscriptionnotauthenticated_created_H_
#define _webhook_realestate_inscriptionnotauthenticated_created_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_realestate_inscriptionnotauthenticated_created_t webhook_realestate_inscriptionnotauthenticated_created_t;

#include "attempt_response_compound.h"
#include "custom_webhook_response.h"
#include "inscriptionnotauthenticated_response.h"



typedef struct webhook_realestate_inscriptionnotauthenticated_created_t {
    struct custom_webhook_response_t *obj_webhook; //model
    list_t *a_obj_attempt; //nonprimitive container
    struct inscriptionnotauthenticated_response_t *obj_inscriptionnotauthenticated; //model

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_realestate_inscriptionnotauthenticated_created_t;

__attribute__((deprecated)) webhook_realestate_inscriptionnotauthenticated_created_t *webhook_realestate_inscriptionnotauthenticated_created_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    inscriptionnotauthenticated_response_t *obj_inscriptionnotauthenticated
);

void webhook_realestate_inscriptionnotauthenticated_created_free(webhook_realestate_inscriptionnotauthenticated_created_t *webhook_realestate_inscriptionnotauthenticated_created);

webhook_realestate_inscriptionnotauthenticated_created_t *webhook_realestate_inscriptionnotauthenticated_created_parseFromJSON(cJSON *webhook_realestate_inscriptionnotauthenticated_createdJSON);

cJSON *webhook_realestate_inscriptionnotauthenticated_created_convertToJSON(webhook_realestate_inscriptionnotauthenticated_created_t *webhook_realestate_inscriptionnotauthenticated_created);

#endif /* _webhook_realestate_inscriptionnotauthenticated_created_H_ */

