/*
 * webhook_request.h
 *
 * A Webhook Object
 */

#ifndef _webhook_request_H_
#define _webhook_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_request_t webhook_request_t;

#include "field_e_webhook_ezsignevent.h"
#include "field_e_webhook_managementevent.h"
#include "field_e_webhook_module.h"

// Enum  for webhook_request

typedef enum  { ezmax_api_definition__full_webhook_request__NULL = 0, ezmax_api_definition__full_webhook_request__Ezsign, ezmax_api_definition__full_webhook_request__Management } ezmax_api_definition__full_webhook_request__e;

char* webhook_request_e_webhook_module_ToString(ezmax_api_definition__full_webhook_request__e e_webhook_module);

ezmax_api_definition__full_webhook_request__e webhook_request_e_webhook_module_FromString(char* e_webhook_module);

// Enum  for webhook_request

typedef enum  { ezmax_api_definition__full_webhook_request__NULL = 0, ezmax_api_definition__full_webhook_request__DocumentCompleted, ezmax_api_definition__full_webhook_request__DocumentFormCompleted, ezmax_api_definition__full_webhook_request__DocumentUnsent, ezmax_api_definition__full_webhook_request__EzsignsignerAcceptclause, ezmax_api_definition__full_webhook_request__EzsignsignerConnect, ezmax_api_definition__full_webhook_request__FolderCompleted, ezmax_api_definition__full_webhook_request__FolderDisposed, ezmax_api_definition__full_webhook_request__FolderSent, ezmax_api_definition__full_webhook_request__FolderUnsent, ezmax_api_definition__full_webhook_request__SignatureSigned } ezmax_api_definition__full_webhook_request__e;

char* webhook_request_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_webhook_request__e e_webhook_ezsignevent);

ezmax_api_definition__full_webhook_request__e webhook_request_e_webhook_ezsignevent_FromString(char* e_webhook_ezsignevent);

// Enum  for webhook_request

typedef enum  { ezmax_api_definition__full_webhook_request__NULL = 0, ezmax_api_definition__full_webhook_request__UserCreated, ezmax_api_definition__full_webhook_request__UserstagedCreated } ezmax_api_definition__full_webhook_request__e;

char* webhook_request_e_webhook_managementevent_ToString(ezmax_api_definition__full_webhook_request__e e_webhook_managementevent);

ezmax_api_definition__full_webhook_request__e webhook_request_e_webhook_managementevent_FromString(char* e_webhook_managementevent);



typedef struct webhook_request_t {
    int pki_webhook_id; //numeric
    int fki_authenticationexternal_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    char *s_webhook_description; // string
    field_e_webhook_module_t *e_webhook_module; // custom
    field_e_webhook_ezsignevent_t *e_webhook_ezsignevent; // custom
    field_e_webhook_managementevent_t *e_webhook_managementevent; // custom
    char *s_webhook_url; // string
    char *s_webhook_emailfailed; // string
    int b_webhook_isactive; //boolean
    int b_webhook_issigned; //boolean
    int b_webhook_skipsslvalidation; //boolean

} webhook_request_t;

webhook_request_t *webhook_request_create(
    int pki_webhook_id,
    int fki_authenticationexternal_id,
    int fki_ezsignfoldertype_id,
    char *s_webhook_description,
    field_e_webhook_module_t *e_webhook_module,
    field_e_webhook_ezsignevent_t *e_webhook_ezsignevent,
    field_e_webhook_managementevent_t *e_webhook_managementevent,
    char *s_webhook_url,
    char *s_webhook_emailfailed,
    int b_webhook_isactive,
    int b_webhook_issigned,
    int b_webhook_skipsslvalidation
);

void webhook_request_free(webhook_request_t *webhook_request);

webhook_request_t *webhook_request_parseFromJSON(cJSON *webhook_requestJSON);

cJSON *webhook_request_convertToJSON(webhook_request_t *webhook_request);

#endif /* _webhook_request_H_ */

