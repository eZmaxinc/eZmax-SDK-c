/*
 * user_list_element.h
 *
 * A User List Element
 */

#ifndef _user_list_element_H_
#define _user_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_list_element_t user_list_element_t;

#include "field_e_user_ezsignaccess.h"
#include "field_e_user_origin.h"
#include "field_e_user_type.h"



typedef struct user_list_element_t {
    int pki_user_id; //numeric
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_user_loginname; // string
    int b_user_isactive; //boolean
    ezmax_api_definition__full_field_e_user_type__e e_user_type; //referenced enum
    ezmax_api_definition__full_field_e_user_origin__e e_user_origin; //referenced enum
    ezmax_api_definition__full_field_e_user_ezsignaccess__e e_user_ezsignaccess; //referenced enum
    char *dt_user_ezsignprepaidexpiration; // string
    char *s_email_address; // string
    char *s_user_jobtitle; // string

    int _library_owned; // Is the library responsible for freeing this object?
} user_list_element_t;

__attribute__((deprecated)) user_list_element_t *user_list_element_create(
    int pki_user_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    int b_user_isactive,
    ezmax_api_definition__full_field_e_user_type__e e_user_type,
    ezmax_api_definition__full_field_e_user_origin__e e_user_origin,
    ezmax_api_definition__full_field_e_user_ezsignaccess__e e_user_ezsignaccess,
    char *dt_user_ezsignprepaidexpiration,
    char *s_email_address,
    char *s_user_jobtitle
);

void user_list_element_free(user_list_element_t *user_list_element);

user_list_element_t *user_list_element_parseFromJSON(cJSON *user_list_elementJSON);

cJSON *user_list_element_convertToJSON(user_list_element_t *user_list_element);

#endif /* _user_list_element_H_ */

