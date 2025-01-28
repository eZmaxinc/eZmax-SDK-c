/*
 * custom_contact_name_response.h
 *
 * A Custom ContactName Object
 */

#ifndef _custom_contact_name_response_H_
#define _custom_contact_name_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_contact_name_response_t custom_contact_name_response_t;




typedef struct custom_contact_name_response_t {
    char *s_contact_firstname; // string
    char *s_contact_lastname; // string
    char *s_contact_company; // string

    int _library_owned; // Is the library responsible for freeing this object?
} custom_contact_name_response_t;

__attribute__((deprecated)) custom_contact_name_response_t *custom_contact_name_response_create(
    char *s_contact_firstname,
    char *s_contact_lastname,
    char *s_contact_company
);

void custom_contact_name_response_free(custom_contact_name_response_t *custom_contact_name_response);

custom_contact_name_response_t *custom_contact_name_response_parseFromJSON(cJSON *custom_contact_name_responseJSON);

cJSON *custom_contact_name_response_convertToJSON(custom_contact_name_response_t *custom_contact_name_response);

#endif /* _custom_contact_name_response_H_ */

