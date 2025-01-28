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



typedef struct webhook_list_element_t {
    int pki_webhook_id; //numeric
    char *s_webhook_description; // string
    char *s_webhook_url; // string
    char *s_webhook_event; // string
    char *s_webhook_emailfailed; // string
    ezmax_api_definition__full_field_e_webhook_module__e e_webhook_module; //referenced enum
    ezmax_api_definition__full_field_e_webhook_ezsignevent__e e_webhook_ezsignevent; //referenced enum
    ezmax_api_definition__full_field_e_webhook_managementevent__e e_webhook_managementevent; //referenced enum
    int b_webhook_isactive; //boolean
    int b_webhook_issigned; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} webhook_list_element_t;

__attribute__((deprecated)) webhook_list_element_t *webhook_list_element_create(
    int pki_webhook_id,
    char *s_webhook_description,
    char *s_webhook_url,
    char *s_webhook_event,
    char *s_webhook_emailfailed,
    ezmax_api_definition__full_field_e_webhook_module__e e_webhook_module,
    ezmax_api_definition__full_field_e_webhook_ezsignevent__e e_webhook_ezsignevent,
    ezmax_api_definition__full_field_e_webhook_managementevent__e e_webhook_managementevent,
    int b_webhook_isactive,
    int b_webhook_issigned
);

void webhook_list_element_free(webhook_list_element_t *webhook_list_element);

webhook_list_element_t *webhook_list_element_parseFromJSON(cJSON *webhook_list_elementJSON);

cJSON *webhook_list_element_convertToJSON(webhook_list_element_t *webhook_list_element);

#endif /* _webhook_list_element_H_ */

