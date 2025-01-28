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



typedef struct webhook_request_t {
    int pki_webhook_id; //numeric
    int fki_authenticationexternal_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    char *s_webhook_description; // string
    ezmax_api_definition__full_field_e_webhook_module__e e_webhook_module; //referenced enum
    ezmax_api_definition__full_field_e_webhook_ezsignevent__e e_webhook_ezsignevent; //referenced enum
    ezmax_api_definition__full_field_e_webhook_managementevent__e e_webhook_managementevent; //referenced enum
    char *s_webhook_url; // string
    char *s_webhook_emailfailed; // string
    int b_webhook_isactive; //boolean
    int b_webhook_issigned; //boolean
    int b_webhook_skipsslvalidation; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_request_t;

__attribute__((deprecated)) webhook_request_t *webhook_request_create(
    int pki_webhook_id,
    int fki_authenticationexternal_id,
    int fki_ezsignfoldertype_id,
    char *s_webhook_description,
    ezmax_api_definition__full_field_e_webhook_module__e e_webhook_module,
    ezmax_api_definition__full_field_e_webhook_ezsignevent__e e_webhook_ezsignevent,
    ezmax_api_definition__full_field_e_webhook_managementevent__e e_webhook_managementevent,
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

