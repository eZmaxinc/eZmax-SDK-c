/*
 * usergroupdelegation_request.h
 *
 * A Usergroupdelegation Object
 */

#ifndef _usergroupdelegation_request_H_
#define _usergroupdelegation_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupdelegation_request_t usergroupdelegation_request_t;




typedef struct usergroupdelegation_request_t {
    int pki_usergroupdelegation_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_user_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupdelegation_request_t;

__attribute__((deprecated)) usergroupdelegation_request_t *usergroupdelegation_request_create(
    int pki_usergroupdelegation_id,
    int fki_usergroup_id,
    int fki_user_id
);

void usergroupdelegation_request_free(usergroupdelegation_request_t *usergroupdelegation_request);

usergroupdelegation_request_t *usergroupdelegation_request_parseFromJSON(cJSON *usergroupdelegation_requestJSON);

cJSON *usergroupdelegation_request_convertToJSON(usergroupdelegation_request_t *usergroupdelegation_request);

#endif /* _usergroupdelegation_request_H_ */

