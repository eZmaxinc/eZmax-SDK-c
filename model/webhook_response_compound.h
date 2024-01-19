/*
 * webhook_response_compound.h
 *
 * A Webhook Object
 */

#ifndef _webhook_response_compound_H_
#define _webhook_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_response_compound_t webhook_response_compound_t;

#include "common_audit.h"
#include "field_e_webhook_ezsignevent.h"
#include "field_e_webhook_managementevent.h"
#include "field_e_webhook_module.h"

// Enum  for webhook_response_compound

typedef enum  { ezmax_api_definition__full_webhook_response_compound__NULL = 0, ezmax_api_definition__full_webhook_response_compound__Ezsign, ezmax_api_definition__full_webhook_response_compound__Management } ezmax_api_definition__full_webhook_response_compound__e;

char* webhook_response_compound_e_webhook_module_ToString(ezmax_api_definition__full_webhook_response_compound__e e_webhook_module);

ezmax_api_definition__full_webhook_response_compound__e webhook_response_compound_e_webhook_module_FromString(char* e_webhook_module);

// Enum  for webhook_response_compound

typedef enum  { ezmax_api_definition__full_webhook_response_compound__NULL = 0, ezmax_api_definition__full_webhook_response_compound__DocumentCompleted, ezmax_api_definition__full_webhook_response_compound__EzsignsignerAcceptclause, ezmax_api_definition__full_webhook_response_compound__EzsignsignerConnect, ezmax_api_definition__full_webhook_response_compound__FolderCompleted } ezmax_api_definition__full_webhook_response_compound__e;

char* webhook_response_compound_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_webhook_response_compound__e e_webhook_ezsignevent);

ezmax_api_definition__full_webhook_response_compound__e webhook_response_compound_e_webhook_ezsignevent_FromString(char* e_webhook_ezsignevent);

// Enum  for webhook_response_compound

typedef enum  { ezmax_api_definition__full_webhook_response_compound__NULL = 0, ezmax_api_definition__full_webhook_response_compound__UserCreated, ezmax_api_definition__full_webhook_response_compound__UserstagedCreated } ezmax_api_definition__full_webhook_response_compound__e;

char* webhook_response_compound_e_webhook_managementevent_ToString(ezmax_api_definition__full_webhook_response_compound__e e_webhook_managementevent);

ezmax_api_definition__full_webhook_response_compound__e webhook_response_compound_e_webhook_managementevent_FromString(char* e_webhook_managementevent);



typedef struct webhook_response_compound_t {
    int pki_webhook_id; //numeric
    char *s_webhook_description; // string
    int fki_ezsignfoldertype_id; //numeric
    char *s_ezsignfoldertype_name_x; // string
    field_e_webhook_module_t *e_webhook_module; // custom
    field_e_webhook_ezsignevent_t *e_webhook_ezsignevent; // custom
    field_e_webhook_managementevent_t *e_webhook_managementevent; // custom
    char *s_webhook_url; // string
    char *s_webhook_emailfailed; // string
    char *s_webhook_apikey; // string
    char *s_webhook_secret; // string
    int b_webhook_isactive; //boolean
    int b_webhook_issigned; //boolean
    int b_webhook_skipsslvalidation; //boolean
    struct common_audit_t *obj_audit; //model
    char *s_webhook_event; // string

} webhook_response_compound_t;

webhook_response_compound_t *webhook_response_compound_create(
    int pki_webhook_id,
    char *s_webhook_description,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    field_e_webhook_module_t *e_webhook_module,
    field_e_webhook_ezsignevent_t *e_webhook_ezsignevent,
    field_e_webhook_managementevent_t *e_webhook_managementevent,
    char *s_webhook_url,
    char *s_webhook_emailfailed,
    char *s_webhook_apikey,
    char *s_webhook_secret,
    int b_webhook_isactive,
    int b_webhook_issigned,
    int b_webhook_skipsslvalidation,
    common_audit_t *obj_audit,
    char *s_webhook_event
);

void webhook_response_compound_free(webhook_response_compound_t *webhook_response_compound);

webhook_response_compound_t *webhook_response_compound_parseFromJSON(cJSON *webhook_response_compoundJSON);

cJSON *webhook_response_compound_convertToJSON(webhook_response_compound_t *webhook_response_compound);

#endif /* _webhook_response_compound_H_ */

