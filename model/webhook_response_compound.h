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
#include "webhookheader_response_compound.h"



typedef struct webhook_response_compound_t {
    int pki_webhook_id; //numeric
    int fki_authenticationexternal_id; //numeric
    char *s_webhook_description; // string
    int fki_ezsignfoldertype_id; //numeric
    char *s_ezsignfoldertype_name_x; // string
    ezmax_api_definition__full_field_e_webhook_module__e e_webhook_module; //referenced enum
    ezmax_api_definition__full_field_e_webhook_ezsignevent__e e_webhook_ezsignevent; //referenced enum
    ezmax_api_definition__full_field_e_webhook_managementevent__e e_webhook_managementevent; //referenced enum
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

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_response_compound_t;

__attribute__((deprecated)) webhook_response_compound_t *webhook_response_compound_create(
    int pki_webhook_id,
    int fki_authenticationexternal_id,
    char *s_webhook_description,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    ezmax_api_definition__full_field_e_webhook_module__e e_webhook_module,
    ezmax_api_definition__full_field_e_webhook_ezsignevent__e e_webhook_ezsignevent,
    ezmax_api_definition__full_field_e_webhook_managementevent__e e_webhook_managementevent,
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
    list_t *a_obj_webhookheader
);

void webhook_response_compound_free(webhook_response_compound_t *webhook_response_compound);

webhook_response_compound_t *webhook_response_compound_parseFromJSON(cJSON *webhook_response_compoundJSON);

cJSON *webhook_response_compound_convertToJSON(webhook_response_compound_t *webhook_response_compound);

#endif /* _webhook_response_compound_H_ */

