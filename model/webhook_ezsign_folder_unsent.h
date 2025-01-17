/*
 * webhook_ezsign_folder_unsent.h
 *
 * This is the base Webhook object
 */

#ifndef _webhook_ezsign_folder_unsent_H_
#define _webhook_ezsign_folder_unsent_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_ezsign_folder_unsent_t webhook_ezsign_folder_unsent_t;

#include "attempt_response.h"
#include "common_webhook.h"
#include "custom_webhook_response.h"
#include "ezsignfolder_response.h"



typedef struct webhook_ezsign_folder_unsent_t {
    struct custom_webhook_response_t *obj_webhook; //model
    list_t *a_obj_attempt; //nonprimitive container
    struct ezsignfolder_response_t *obj_ezsignfolder; //model

} webhook_ezsign_folder_unsent_t;

webhook_ezsign_folder_unsent_t *webhook_ezsign_folder_unsent_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    ezsignfolder_response_t *obj_ezsignfolder
);

void webhook_ezsign_folder_unsent_free(webhook_ezsign_folder_unsent_t *webhook_ezsign_folder_unsent);

webhook_ezsign_folder_unsent_t *webhook_ezsign_folder_unsent_parseFromJSON(cJSON *webhook_ezsign_folder_unsentJSON);

cJSON *webhook_ezsign_folder_unsent_convertToJSON(webhook_ezsign_folder_unsent_t *webhook_ezsign_folder_unsent);

#endif /* _webhook_ezsign_folder_unsent_H_ */

