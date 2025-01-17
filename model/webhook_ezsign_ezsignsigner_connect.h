/*
 * webhook_ezsign_ezsignsigner_connect.h
 *
 * This is the base Webhook object
 */

#ifndef _webhook_ezsign_ezsignsigner_connect_H_
#define _webhook_ezsign_ezsignsigner_connect_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_ezsign_ezsignsigner_connect_t webhook_ezsign_ezsignsigner_connect_t;

#include "attempt_response.h"
#include "common_webhook.h"
#include "custom_webhook_response.h"
#include "ezsignfolder_response.h"
#include "ezsignfoldersignerassociation_response_compound.h"



typedef struct webhook_ezsign_ezsignsigner_connect_t {
    struct custom_webhook_response_t *obj_webhook; //model
    list_t *a_obj_attempt; //nonprimitive container
    struct ezsignfolder_response_t *obj_ezsignfolder; //model
    struct ezsignfoldersignerassociation_response_compound_t *obj_ezsignfoldersignerassociation; //model

} webhook_ezsign_ezsignsigner_connect_t;

webhook_ezsign_ezsignsigner_connect_t *webhook_ezsign_ezsignsigner_connect_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    ezsignfolder_response_t *obj_ezsignfolder,
    ezsignfoldersignerassociation_response_compound_t *obj_ezsignfoldersignerassociation
);

void webhook_ezsign_ezsignsigner_connect_free(webhook_ezsign_ezsignsigner_connect_t *webhook_ezsign_ezsignsigner_connect);

webhook_ezsign_ezsignsigner_connect_t *webhook_ezsign_ezsignsigner_connect_parseFromJSON(cJSON *webhook_ezsign_ezsignsigner_connectJSON);

cJSON *webhook_ezsign_ezsignsigner_connect_convertToJSON(webhook_ezsign_ezsignsigner_connect_t *webhook_ezsign_ezsignsigner_connect);

#endif /* _webhook_ezsign_ezsignsigner_connect_H_ */

