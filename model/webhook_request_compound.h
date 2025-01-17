/*
 * webhook_request_compound.h
 *
 * A Webhook Object and children
 */

#ifndef _webhook_request_compound_H_
#define _webhook_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_request_compound_t webhook_request_compound_t;

#include "field_e_webhook_ezsignevent.h"
#include "field_e_webhook_managementevent.h"
#include "field_e_webhook_module.h"
#include "webhookheader_request_compound.h"

// Enum  for webhook_request_compound

typedef enum  { ezmax_api_definition__full_webhook_request_compound__NULL = 0, ezmax_api_definition__full_webhook_request_compound__Ezsign, ezmax_api_definition__full_webhook_request_compound__Management } ezmax_api_definition__full_webhook_request_compound__e;

char* webhook_request_compound_e_webhook_module_ToString(ezmax_api_definition__full_webhook_request_compound__e e_webhook_module);

ezmax_api_definition__full_webhook_request_compound__e webhook_request_compound_e_webhook_module_FromString(char* e_webhook_module);

// Enum  for webhook_request_compound

typedef enum  { ezmax_api_definition__full_webhook_request_compound__NULL = 0, ezmax_api_definition__full_webhook_request_compound__DocumentCompleted, ezmax_api_definition__full_webhook_request_compound__DocumentFormCompleted, ezmax_api_definition__full_webhook_request_compound__DocumentUnsent, ezmax_api_definition__full_webhook_request_compound__EzsignsignerAcceptclause, ezmax_api_definition__full_webhook_request_compound__EzsignsignerConnect, ezmax_api_definition__full_webhook_request_compound__FolderCompleted, ezmax_api_definition__full_webhook_request_compound__FolderDisposed, ezmax_api_definition__full_webhook_request_compound__FolderSent, ezmax_api_definition__full_webhook_request_compound__FolderUnsent, ezmax_api_definition__full_webhook_request_compound__SignatureSigned } ezmax_api_definition__full_webhook_request_compound__e;

char* webhook_request_compound_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_webhook_request_compound__e e_webhook_ezsignevent);

ezmax_api_definition__full_webhook_request_compound__e webhook_request_compound_e_webhook_ezsignevent_FromString(char* e_webhook_ezsignevent);

// Enum  for webhook_request_compound

typedef enum  { ezmax_api_definition__full_webhook_request_compound__NULL = 0, ezmax_api_definition__full_webhook_request_compound__UserCreated, ezmax_api_definition__full_webhook_request_compound__UserstagedCreated } ezmax_api_definition__full_webhook_request_compound__e;

char* webhook_request_compound_e_webhook_managementevent_ToString(ezmax_api_definition__full_webhook_request_compound__e e_webhook_managementevent);

ezmax_api_definition__full_webhook_request_compound__e webhook_request_compound_e_webhook_managementevent_FromString(char* e_webhook_managementevent);



typedef struct webhook_request_compound_t {
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
    list_t *a_obj_webhookheader; //nonprimitive container

} webhook_request_compound_t;

webhook_request_compound_t *webhook_request_compound_create(
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
    int b_webhook_skipsslvalidation,
    list_t *a_obj_webhookheader
);

void webhook_request_compound_free(webhook_request_compound_t *webhook_request_compound);

webhook_request_compound_t *webhook_request_compound_parseFromJSON(cJSON *webhook_request_compoundJSON);

cJSON *webhook_request_compound_convertToJSON(webhook_request_compound_t *webhook_request_compound);

#endif /* _webhook_request_compound_H_ */

