/*
 * webhook_ezsign_ezsignsigner_acceptclause.h
 *
 * This is the base Webhook object
 */

#ifndef _webhook_ezsign_ezsignsigner_acceptclause_H_
#define _webhook_ezsign_ezsignsigner_acceptclause_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_ezsign_ezsignsigner_acceptclause_t webhook_ezsign_ezsignsigner_acceptclause_t;

#include "attempt_response_compound.h"
#include "custom_webhook_response.h"
#include "ezsignfolder_response.h"
#include "ezsignfoldersignerassociation_response_compound.h"



typedef struct webhook_ezsign_ezsignsigner_acceptclause_t {
    struct custom_webhook_response_t *obj_webhook; //model
    list_t *a_obj_attempt; //nonprimitive container
    struct ezsignfolder_response_t *obj_ezsignfolder; //model
    struct ezsignfoldersignerassociation_response_compound_t *obj_ezsignfoldersignerassociation; //model

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_ezsign_ezsignsigner_acceptclause_t;

__attribute__((deprecated)) webhook_ezsign_ezsignsigner_acceptclause_t *webhook_ezsign_ezsignsigner_acceptclause_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    ezsignfolder_response_t *obj_ezsignfolder,
    ezsignfoldersignerassociation_response_compound_t *obj_ezsignfoldersignerassociation
);

void webhook_ezsign_ezsignsigner_acceptclause_free(webhook_ezsign_ezsignsigner_acceptclause_t *webhook_ezsign_ezsignsigner_acceptclause);

webhook_ezsign_ezsignsigner_acceptclause_t *webhook_ezsign_ezsignsigner_acceptclause_parseFromJSON(cJSON *webhook_ezsign_ezsignsigner_acceptclauseJSON);

cJSON *webhook_ezsign_ezsignsigner_acceptclause_convertToJSON(webhook_ezsign_ezsignsigner_acceptclause_t *webhook_ezsign_ezsignsigner_acceptclause);

#endif /* _webhook_ezsign_ezsignsigner_acceptclause_H_ */

