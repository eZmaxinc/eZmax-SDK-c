/*
 * usergroupmembership_request_compound.h
 *
 * A Usergroupmembership Object and children
 */

#ifndef _usergroupmembership_request_compound_H_
#define _usergroupmembership_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupmembership_request_compound_t usergroupmembership_request_compound_t;




typedef struct usergroupmembership_request_compound_t {
    int pki_usergroupmembership_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroupexternal_id; //numeric

} usergroupmembership_request_compound_t;

usergroupmembership_request_compound_t *usergroupmembership_request_compound_create(
    int pki_usergroupmembership_id,
    int fki_usergroup_id,
    int fki_user_id,
    int fki_usergroupexternal_id
);

void usergroupmembership_request_compound_free(usergroupmembership_request_compound_t *usergroupmembership_request_compound);

usergroupmembership_request_compound_t *usergroupmembership_request_compound_parseFromJSON(cJSON *usergroupmembership_request_compoundJSON);

cJSON *usergroupmembership_request_compound_convertToJSON(usergroupmembership_request_compound_t *usergroupmembership_request_compound);

#endif /* _usergroupmembership_request_compound_H_ */

