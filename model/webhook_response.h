/*
 * webhook_response.h
 *
 * A webhook object
 */

#ifndef _webhook_response_H_
#define _webhook_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_response_t webhook_response_t;

#include "field_e_webhook_ezsignevent.h"
#include "field_e_webhook_managementevent.h"
#include "field_e_webhook_module.h"

// Enum  for webhook_response

typedef enum  { ezmax_api_definition__full_webhook_response__NULL = 0, ezmax_api_definition__full_webhook_response__Ezsign, ezmax_api_definition__full_webhook_response__Management } ezmax_api_definition__full_webhook_response__e;

char* webhook_response_e_webhook_module_ToString(ezmax_api_definition__full_webhook_response__e e_webhook_module);

ezmax_api_definition__full_webhook_response__e webhook_response_e_webhook_module_FromString(char* e_webhook_module);

// Enum  for webhook_response

typedef enum  { ezmax_api_definition__full_webhook_response__NULL = 0, ezmax_api_definition__full_webhook_response__DocumentCompleted, ezmax_api_definition__full_webhook_response__EzsignsignerAcceptclause, ezmax_api_definition__full_webhook_response__EzsignsignerConnect, ezmax_api_definition__full_webhook_response__FolderCompleted } ezmax_api_definition__full_webhook_response__e;

char* webhook_response_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_webhook_response__e e_webhook_ezsignevent);

ezmax_api_definition__full_webhook_response__e webhook_response_e_webhook_ezsignevent_FromString(char* e_webhook_ezsignevent);

// Enum  for webhook_response

typedef enum  { ezmax_api_definition__full_webhook_response__NULL = 0, ezmax_api_definition__full_webhook_response__UserCreated, ezmax_api_definition__full_webhook_response__UserstagedCreated } ezmax_api_definition__full_webhook_response__e;

char* webhook_response_e_webhook_managementevent_ToString(ezmax_api_definition__full_webhook_response__e e_webhook_managementevent);

ezmax_api_definition__full_webhook_response__e webhook_response_e_webhook_managementevent_FromString(char* e_webhook_managementevent);



typedef struct webhook_response_t {
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

} webhook_response_t;

webhook_response_t *webhook_response_create(
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
    int b_webhook_skipsslvalidation
);

void webhook_response_free(webhook_response_t *webhook_response);

webhook_response_t *webhook_response_parseFromJSON(cJSON *webhook_responseJSON);

cJSON *webhook_response_convertToJSON(webhook_response_t *webhook_response);

#endif /* _webhook_response_H_ */

