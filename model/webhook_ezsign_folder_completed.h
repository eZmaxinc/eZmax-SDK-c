/*
 * webhook_ezsign_folder_completed.h
 *
 * This is the base Webhook object
 */

#ifndef _webhook_ezsign_folder_completed_H_
#define _webhook_ezsign_folder_completed_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_ezsign_folder_completed_t webhook_ezsign_folder_completed_t;

#include "attempt_response_compound.h"
#include "custom_webhook_response.h"
#include "ezsignfolder_response.h"



typedef struct webhook_ezsign_folder_completed_t {
    struct custom_webhook_response_t *obj_webhook; //model
    list_t *a_obj_attempt; //nonprimitive container
    struct ezsignfolder_response_t *obj_ezsignfolder; //model

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_ezsign_folder_completed_t;

__attribute__((deprecated)) webhook_ezsign_folder_completed_t *webhook_ezsign_folder_completed_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    ezsignfolder_response_t *obj_ezsignfolder
);

void webhook_ezsign_folder_completed_free(webhook_ezsign_folder_completed_t *webhook_ezsign_folder_completed);

webhook_ezsign_folder_completed_t *webhook_ezsign_folder_completed_parseFromJSON(cJSON *webhook_ezsign_folder_completedJSON);

cJSON *webhook_ezsign_folder_completed_convertToJSON(webhook_ezsign_folder_completed_t *webhook_ezsign_folder_completed);

#endif /* _webhook_ezsign_folder_completed_H_ */

