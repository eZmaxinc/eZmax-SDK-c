/*
 * apikey_list_element.h
 *
 * A Branding List Element
 */

#ifndef _apikey_list_element_H_
#define _apikey_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_list_element_t apikey_list_element_t;




typedef struct apikey_list_element_t {
    int pki_apikey_id; //numeric
    char *s_apikey_description_x; // string
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    int b_apikey_isactive; //boolean
    int b_apikey_issigned; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} apikey_list_element_t;

__attribute__((deprecated)) apikey_list_element_t *apikey_list_element_create(
    int pki_apikey_id,
    char *s_apikey_description_x,
    char *s_user_firstname,
    char *s_user_lastname,
    int b_apikey_isactive,
    int b_apikey_issigned
);

void apikey_list_element_free(apikey_list_element_t *apikey_list_element);

apikey_list_element_t *apikey_list_element_parseFromJSON(cJSON *apikey_list_elementJSON);

cJSON *apikey_list_element_convertToJSON(apikey_list_element_t *apikey_list_element);

#endif /* _apikey_list_element_H_ */

