/*
 * usergroupdelegation_response.h
 *
 * A Usergroupdelegation Object
 */

#ifndef _usergroupdelegation_response_H_
#define _usergroupdelegation_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupdelegation_response_t usergroupdelegation_response_t;




typedef struct usergroupdelegation_response_t {
    int pki_usergroupdelegation_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_user_id; //numeric
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_user_loginname; // string
    char *s_email_address; // string
    char *s_usergroup_name_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupdelegation_response_t;

__attribute__((deprecated)) usergroupdelegation_response_t *usergroupdelegation_response_create(
    int pki_usergroupdelegation_id,
    int fki_usergroup_id,
    int fki_user_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_email_address,
    char *s_usergroup_name_x
);

void usergroupdelegation_response_free(usergroupdelegation_response_t *usergroupdelegation_response);

usergroupdelegation_response_t *usergroupdelegation_response_parseFromJSON(cJSON *usergroupdelegation_responseJSON);

cJSON *usergroupdelegation_response_convertToJSON(usergroupdelegation_response_t *usergroupdelegation_response);

#endif /* _usergroupdelegation_response_H_ */

