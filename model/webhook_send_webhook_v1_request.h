/*
 * webhook_send_webhook_v1_request.h
 *
 * Request for POST /1/object/webhook/sendWebhook
 */

#ifndef _webhook_send_webhook_v1_request_H_
#define _webhook_send_webhook_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_send_webhook_v1_request_t webhook_send_webhook_v1_request_t;

#include "custom_e_webhook_ezsignevent.h"
#include "field_e_webhook_managementevent.h"
#include "field_e_webhook_module.h"

// Enum  for webhook_send_webhook_v1_request

typedef enum  { ezmax_api_definition__full_webhook_send_webhook_v1_request__NULL = 0, ezmax_api_definition__full_webhook_send_webhook_v1_request__Ezsign, ezmax_api_definition__full_webhook_send_webhook_v1_request__Management } ezmax_api_definition__full_webhook_send_webhook_v1_request__e;

char* webhook_send_webhook_v1_request_e_webhook_module_ToString(ezmax_api_definition__full_webhook_send_webhook_v1_request__e e_webhook_module);

ezmax_api_definition__full_webhook_send_webhook_v1_request__e webhook_send_webhook_v1_request_e_webhook_module_FromString(char* e_webhook_module);

// Enum  for webhook_send_webhook_v1_request

typedef enum  { ezmax_api_definition__full_webhook_send_webhook_v1_request__NULL = 0, ezmax_api_definition__full_webhook_send_webhook_v1_request__DocumentCompleted, ezmax_api_definition__full_webhook_send_webhook_v1_request__DocumentFormCompleted, ezmax_api_definition__full_webhook_send_webhook_v1_request__DocumentUnsent, ezmax_api_definition__full_webhook_send_webhook_v1_request__EzsignsignerAcceptclause, ezmax_api_definition__full_webhook_send_webhook_v1_request__EzsignsignerConnect, ezmax_api_definition__full_webhook_send_webhook_v1_request__FolderCompleted, ezmax_api_definition__full_webhook_send_webhook_v1_request__FolderDisposed, ezmax_api_definition__full_webhook_send_webhook_v1_request__FolderSent, ezmax_api_definition__full_webhook_send_webhook_v1_request__FolderUnsent } ezmax_api_definition__full_webhook_send_webhook_v1_request__e;

char* webhook_send_webhook_v1_request_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_webhook_send_webhook_v1_request__e e_webhook_ezsignevent);

ezmax_api_definition__full_webhook_send_webhook_v1_request__e webhook_send_webhook_v1_request_e_webhook_ezsignevent_FromString(char* e_webhook_ezsignevent);

// Enum  for webhook_send_webhook_v1_request

typedef enum  { ezmax_api_definition__full_webhook_send_webhook_v1_request__NULL = 0, ezmax_api_definition__full_webhook_send_webhook_v1_request__UserCreated, ezmax_api_definition__full_webhook_send_webhook_v1_request__UserstagedCreated } ezmax_api_definition__full_webhook_send_webhook_v1_request__e;

char* webhook_send_webhook_v1_request_e_webhook_managementevent_ToString(ezmax_api_definition__full_webhook_send_webhook_v1_request__e e_webhook_managementevent);

ezmax_api_definition__full_webhook_send_webhook_v1_request__e webhook_send_webhook_v1_request_e_webhook_managementevent_FromString(char* e_webhook_managementevent);



typedef struct webhook_send_webhook_v1_request_t {
    field_e_webhook_module_t *e_webhook_module; // custom
    custom_e_webhook_ezsignevent_t *e_webhook_ezsignevent; // custom
    field_e_webhook_managementevent_t *e_webhook_managementevent; // custom
    int fki_ezsignfolder_id; //numeric
    int fki_ezsigndocument_id; //numeric
    int fki_ezsignsigner_id; //numeric
    int fki_user_id; //numeric
    int fki_userstaged_id; //numeric

} webhook_send_webhook_v1_request_t;

webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request_create(
    field_e_webhook_module_t *e_webhook_module,
    custom_e_webhook_ezsignevent_t *e_webhook_ezsignevent,
    field_e_webhook_managementevent_t *e_webhook_managementevent,
    int fki_ezsignfolder_id,
    int fki_ezsigndocument_id,
    int fki_ezsignsigner_id,
    int fki_user_id,
    int fki_userstaged_id
);

void webhook_send_webhook_v1_request_free(webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request);

webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request_parseFromJSON(cJSON *webhook_send_webhook_v1_requestJSON);

cJSON *webhook_send_webhook_v1_request_convertToJSON(webhook_send_webhook_v1_request_t *webhook_send_webhook_v1_request);

#endif /* _webhook_send_webhook_v1_request_H_ */

