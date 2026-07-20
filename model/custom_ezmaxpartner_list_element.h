/*
 * custom_ezmaxpartner_list_element.h
 *
 * A custom Ezmaxpartner List Element
 */

#ifndef _custom_ezmaxpartner_list_element_H_
#define _custom_ezmaxpartner_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_ezmaxpartner_list_element_t custom_ezmaxpartner_list_element_t;

#include "multilingual_ezmaxpartner_logourl.h"



typedef struct custom_ezmaxpartner_list_element_t {
    int *pki_ezmaxpartner_id; //numeric
    char *s_ezmaxpartner_address_x; // string
    char *s_ezmaxpartner_emailaddress_x; // string
    char *s_ezmaxpartner_shortdescription_x; // string
    char *s_ezmaxpartner_name_x; // string
    char *s_ezmaxpartner_phone_e164_x; // string
    char *s_ezmaxpartner_url_x; // string
    struct multilingual_ezmaxpartner_logourl_t *obj_ezmaxpartner_logourl; //model

    int _library_owned; // Is the library responsible for freeing this object?
} custom_ezmaxpartner_list_element_t;

__attribute__((deprecated)) custom_ezmaxpartner_list_element_t *custom_ezmaxpartner_list_element_create(
    int *pki_ezmaxpartner_id,
    char *s_ezmaxpartner_address_x,
    char *s_ezmaxpartner_emailaddress_x,
    char *s_ezmaxpartner_shortdescription_x,
    char *s_ezmaxpartner_name_x,
    char *s_ezmaxpartner_phone_e164_x,
    char *s_ezmaxpartner_url_x,
    multilingual_ezmaxpartner_logourl_t *obj_ezmaxpartner_logourl
);

void custom_ezmaxpartner_list_element_free(custom_ezmaxpartner_list_element_t *custom_ezmaxpartner_list_element);

custom_ezmaxpartner_list_element_t *custom_ezmaxpartner_list_element_parseFromJSON(cJSON *custom_ezmaxpartner_list_elementJSON);

cJSON *custom_ezmaxpartner_list_element_convertToJSON(custom_ezmaxpartner_list_element_t *custom_ezmaxpartner_list_element);

#endif /* _custom_ezmaxpartner_list_element_H_ */

