/*
 * usergroupmembership_response.h
 *
 * A Usergroupmembership Object
 */

#ifndef _usergroupmembership_response_H_
#define _usergroupmembership_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupmembership_response_t usergroupmembership_response_t;




typedef struct usergroupmembership_response_t {
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
} usergroupmembership_response_t;

__attribute__((deprecated)) usergroupmembership_response_t *usergroupmembership_response_create(
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

void usergroupmembership_response_free(usergroupmembership_response_t *usergroupmembership_response);

usergroupmembership_response_t *usergroupmembership_response_parseFromJSON(cJSON *usergroupmembership_responseJSON);

cJSON *usergroupmembership_response_convertToJSON(usergroupmembership_response_t *usergroupmembership_response);

#endif /* _usergroupmembership_response_H_ */

