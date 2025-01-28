/*
 * usergroupmembership_request.h
 *
 * A Usergroupmembership Object
 */

#ifndef _usergroupmembership_request_H_
#define _usergroupmembership_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupmembership_request_t usergroupmembership_request_t;




typedef struct usergroupmembership_request_t {
    int pki_usergroupmembership_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroupexternal_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupmembership_request_t;

__attribute__((deprecated)) usergroupmembership_request_t *usergroupmembership_request_create(
    int pki_usergroupmembership_id,
    int fki_usergroup_id,
    int fki_user_id,
    int fki_usergroupexternal_id
);

void usergroupmembership_request_free(usergroupmembership_request_t *usergroupmembership_request);

usergroupmembership_request_t *usergroupmembership_request_parseFromJSON(cJSON *usergroupmembership_requestJSON);

cJSON *usergroupmembership_request_convertToJSON(usergroupmembership_request_t *usergroupmembership_request);

#endif /* _usergroupmembership_request_H_ */

