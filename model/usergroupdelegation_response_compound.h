/*
 * usergroupdelegation_response_compound.h
 *
 * A Usergroupdelegation Object
 */

#ifndef _usergroupdelegation_response_compound_H_
#define _usergroupdelegation_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupdelegation_response_compound_t usergroupdelegation_response_compound_t;




typedef struct usergroupdelegation_response_compound_t {
    int pki_usergroupdelegation_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_user_id; //numeric
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_user_loginname; // string
    char *s_email_address; // string
    char *s_usergroup_name_x; // string

} usergroupdelegation_response_compound_t;

usergroupdelegation_response_compound_t *usergroupdelegation_response_compound_create(
    int pki_usergroupdelegation_id,
    int fki_usergroup_id,
    int fki_user_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_email_address,
    char *s_usergroup_name_x
);

void usergroupdelegation_response_compound_free(usergroupdelegation_response_compound_t *usergroupdelegation_response_compound);

usergroupdelegation_response_compound_t *usergroupdelegation_response_compound_parseFromJSON(cJSON *usergroupdelegation_response_compoundJSON);

cJSON *usergroupdelegation_response_compound_convertToJSON(usergroupdelegation_response_compound_t *usergroupdelegation_response_compound);

#endif /* _usergroupdelegation_response_compound_H_ */

