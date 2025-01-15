/*
 * webhook_ezsign_folder_disposed.h
 *
 * This is the base Webhook object
 */

#ifndef _webhook_ezsign_folder_disposed_H_
#define _webhook_ezsign_folder_disposed_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_ezsign_folder_disposed_t webhook_ezsign_folder_disposed_t;

#include "attempt_response.h"
#include "custom_webhook_response.h"
#include "ezsignfolder_response.h"



typedef struct webhook_ezsign_folder_disposed_t {
    struct custom_webhook_response_t *obj_webhook; //model
    list_t *a_obj_attempt; //nonprimitive container
    struct ezsignfolder_response_t *obj_ezsignfolder; //model

} webhook_ezsign_folder_disposed_t;

webhook_ezsign_folder_disposed_t *webhook_ezsign_folder_disposed_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    ezsignfolder_response_t *obj_ezsignfolder
);

void webhook_ezsign_folder_disposed_free(webhook_ezsign_folder_disposed_t *webhook_ezsign_folder_disposed);

webhook_ezsign_folder_disposed_t *webhook_ezsign_folder_disposed_parseFromJSON(cJSON *webhook_ezsign_folder_disposedJSON);

cJSON *webhook_ezsign_folder_disposed_convertToJSON(webhook_ezsign_folder_disposed_t *webhook_ezsign_folder_disposed);

#endif /* _webhook_ezsign_folder_disposed_H_ */

