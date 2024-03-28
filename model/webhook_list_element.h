/*
 * webhook_list_element.h
 *
 * A Webhook List Element
 */

#ifndef _webhook_list_element_H_
#define _webhook_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_list_element_t webhook_list_element_t;

#include "field_e_webhook_ezsignevent.h"
#include "field_e_webhook_managementevent.h"
#include "field_e_webhook_module.h"

// Enum  for webhook_list_element

typedef enum  { ezmax_api_definition__full_webhook_list_element__NULL = 0, ezmax_api_definition__full_webhook_list_element__Ezsign, ezmax_api_definition__full_webhook_list_element__Management } ezmax_api_definition__full_webhook_list_element__e;

char* webhook_list_element_e_webhook_module_ToString(ezmax_api_definition__full_webhook_list_element__e e_webhook_module);

ezmax_api_definition__full_webhook_list_element__e webhook_list_element_e_webhook_module_FromString(char* e_webhook_module);

// Enum  for webhook_list_element

typedef enum  { ezmax_api_definition__full_webhook_list_element__NULL = 0, ezmax_api_definition__full_webhook_list_element__DocumentCompleted, ezmax_api_definition__full_webhook_list_element__DocumentFormCompleted, ezmax_api_definition__full_webhook_list_element__DocumentUnsent, ezmax_api_definition__full_webhook_list_element__EzsignsignerAcceptclause, ezmax_api_definition__full_webhook_list_element__EzsignsignerConnect, ezmax_api_definition__full_webhook_list_element__FolderCompleted, ezmax_api_definition__full_webhook_list_element__FolderDisposed, ezmax_api_definition__full_webhook_list_element__FolderSent, ezmax_api_definition__full_webhook_list_element__FolderUnsent, ezmax_api_definition__full_webhook_list_element__SignatureSigned } ezmax_api_definition__full_webhook_list_element__e;

char* webhook_list_element_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_webhook_list_element__e e_webhook_ezsignevent);

ezmax_api_definition__full_webhook_list_element__e webhook_list_element_e_webhook_ezsignevent_FromString(char* e_webhook_ezsignevent);

// Enum  for webhook_list_element

typedef enum  { ezmax_api_definition__full_webhook_list_element__NULL = 0, ezmax_api_definition__full_webhook_list_element__UserCreated, ezmax_api_definition__full_webhook_list_element__UserstagedCreated } ezmax_api_definition__full_webhook_list_element__e;

char* webhook_list_element_e_webhook_managementevent_ToString(ezmax_api_definition__full_webhook_list_element__e e_webhook_managementevent);

ezmax_api_definition__full_webhook_list_element__e webhook_list_element_e_webhook_managementevent_FromString(char* e_webhook_managementevent);



typedef struct webhook_list_element_t {
    int pki_webhook_id; //numeric
    char *s_webhook_description; // string
    char *s_webhook_url; // string
    char *s_webhook_event; // string
    char *s_webhook_emailfailed; // string
    field_e_webhook_module_t *e_webhook_module; // custom
    field_e_webhook_ezsignevent_t *e_webhook_ezsignevent; // custom
    field_e_webhook_managementevent_t *e_webhook_managementevent; // custom
    int b_webhook_isactive; //boolean
    int b_webhook_issigned; //boolean

} webhook_list_element_t;

webhook_list_element_t *webhook_list_element_create(
    int pki_webhook_id,
    char *s_webhook_description,
    char *s_webhook_url,
    char *s_webhook_event,
    char *s_webhook_emailfailed,
    field_e_webhook_module_t *e_webhook_module,
    field_e_webhook_ezsignevent_t *e_webhook_ezsignevent,
    field_e_webhook_managementevent_t *e_webhook_managementevent,
    int b_webhook_isactive,
    int b_webhook_issigned
);

void webhook_list_element_free(webhook_list_element_t *webhook_list_element);

webhook_list_element_t *webhook_list_element_parseFromJSON(cJSON *webhook_list_elementJSON);

cJSON *webhook_list_element_convertToJSON(webhook_list_element_t *webhook_list_element);

#endif /* _webhook_list_element_H_ */

