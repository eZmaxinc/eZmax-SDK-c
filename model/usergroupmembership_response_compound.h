/*
 * usergroupmembership_response_compound.h
 *
 * A Usergroupmembership Object
 */

#ifndef _usergroupmembership_response_compound_H_
#define _usergroupmembership_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupmembership_response_compound_t usergroupmembership_response_compound_t;




typedef struct usergroupmembership_response_compound_t {
    int pki_usergroupmembership_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroupexternal_id; //numeric
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_user_loginname; // string
    char *s_email_address; // string
    char *s_usergroup_name_x; // string
    char *s_usergroupexternal_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupmembership_response_compound_t;

__attribute__((deprecated)) usergroupmembership_response_compound_t *usergroupmembership_response_compound_create(
    int pki_usergroupmembership_id,
    int fki_usergroup_id,
    int fki_user_id,
    int fki_usergroupexternal_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_email_address,
    char *s_usergroup_name_x,
    char *s_usergroupexternal_name
);

void usergroupmembership_response_compound_free(usergroupmembership_response_compound_t *usergroupmembership_response_compound);

usergroupmembership_response_compound_t *usergroupmembership_response_compound_parseFromJSON(cJSON *usergroupmembership_response_compoundJSON);

cJSON *usergroupmembership_response_compound_convertToJSON(usergroupmembership_response_compound_t *usergroupmembership_response_compound);

#endif /* _usergroupmembership_response_compound_H_ */

