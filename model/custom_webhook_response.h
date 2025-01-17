/*
 * custom_webhook_response.h
 *
 * A custom Webhook object
 */

#ifndef _custom_webhook_response_H_
#define _custom_webhook_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_webhook_response_t custom_webhook_response_t;

#include "common_audit.h"
#include "field_e_webhook_ezsignevent.h"
#include "field_e_webhook_managementevent.h"
#include "field_e_webhook_module.h"
#include "webhook_response_compound.h"
#include "webhookheader_response_compound.h"

// Enum  for custom_webhook_response

typedef enum  { ezmax_api_definition__full_custom_webhook_response__NULL = 0, ezmax_api_definition__full_custom_webhook_response__Ezsign, ezmax_api_definition__full_custom_webhook_response__Management } ezmax_api_definition__full_custom_webhook_response__e;

char* custom_webhook_response_e_webhook_module_ToString(ezmax_api_definition__full_custom_webhook_response__e e_webhook_module);

ezmax_api_definition__full_custom_webhook_response__e custom_webhook_response_e_webhook_module_FromString(char* e_webhook_module);

// Enum  for custom_webhook_response

typedef enum  { ezmax_api_definition__full_custom_webhook_response__NULL = 0, ezmax_api_definition__full_custom_webhook_response__DocumentCompleted, ezmax_api_definition__full_custom_webhook_response__DocumentFormCompleted, ezmax_api_definition__full_custom_webhook_response__DocumentUnsent, ezmax_api_definition__full_custom_webhook_response__EzsignsignerAcceptclause, ezmax_api_definition__full_custom_webhook_response__EzsignsignerConnect, ezmax_api_definition__full_custom_webhook_response__FolderCompleted, ezmax_api_definition__full_custom_webhook_response__FolderDisposed, ezmax_api_definition__full_custom_webhook_response__FolderSent, ezmax_api_definition__full_custom_webhook_response__FolderUnsent, ezmax_api_definition__full_custom_webhook_response__SignatureSigned } ezmax_api_definition__full_custom_webhook_response__e;

char* custom_webhook_response_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_custom_webhook_response__e e_webhook_ezsignevent);

ezmax_api_definition__full_custom_webhook_response__e custom_webhook_response_e_webhook_ezsignevent_FromString(char* e_webhook_ezsignevent);

// Enum  for custom_webhook_response

typedef enum  { ezmax_api_definition__full_custom_webhook_response__NULL = 0, ezmax_api_definition__full_custom_webhook_response__UserCreated, ezmax_api_definition__full_custom_webhook_response__UserstagedCreated } ezmax_api_definition__full_custom_webhook_response__e;

char* custom_webhook_response_e_webhook_managementevent_ToString(ezmax_api_definition__full_custom_webhook_response__e e_webhook_managementevent);

ezmax_api_definition__full_custom_webhook_response__e custom_webhook_response_e_webhook_managementevent_FromString(char* e_webhook_managementevent);

// Enum EWEBHOOKEMITTYPE for custom_webhook_response

typedef enum  { ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_NULL = 0, ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_Automatic, ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_Manual, ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_Test } ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_e;

char* custom_webhook_response_e_webhook_emittype_ToString(ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_e e_webhook_emittype);

ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_e custom_webhook_response_e_webhook_emittype_FromString(char* e_webhook_emittype);



typedef struct custom_webhook_response_t {
    int pki_webhook_id; //numeric
    int fki_authenticationexternal_id; //numeric
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
    char *s_authenticationexternal_description; // string
    struct common_audit_t *obj_audit; //model
    char *s_webhook_event; // string
    list_t *a_obj_webhookheader; //nonprimitive container
    char *pks_customer_code; // string
    int b_webhook_test; //boolean
    ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_e e_webhook_emittype; //enum

} custom_webhook_response_t;

custom_webhook_response_t *custom_webhook_response_create(
    int pki_webhook_id,
    int fki_authenticationexternal_id,
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
    char *s_authenticationexternal_description,
    common_audit_t *obj_audit,
    char *s_webhook_event,
    list_t *a_obj_webhookheader,
    char *pks_customer_code,
    int b_webhook_test,
    ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_e e_webhook_emittype
);

void custom_webhook_response_free(custom_webhook_response_t *custom_webhook_response);

custom_webhook_response_t *custom_webhook_response_parseFromJSON(cJSON *custom_webhook_responseJSON);

cJSON *custom_webhook_response_convertToJSON(custom_webhook_response_t *custom_webhook_response);

#endif /* _custom_webhook_response_H_ */

