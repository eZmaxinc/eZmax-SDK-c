/*
 * usergroupdelegation_request_compound.h
 *
 * A Usergroupdelegation Object and children
 */

#ifndef _usergroupdelegation_request_compound_H_
#define _usergroupdelegation_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupdelegation_request_compound_t usergroupdelegation_request_compound_t;

#include "usergroupdelegation_request.h"



typedef struct usergroupdelegation_request_compound_t {
    int pki_usergroupdelegation_id; //numeric
    int fki_usergroup_id; //numeric
    int fki_user_id; //numeric

} usergroupdelegation_request_compound_t;

usergroupdelegation_request_compound_t *usergroupdelegation_request_compound_create(
    int pki_usergroupdelegation_id,
    int fki_usergroup_id,
    int fki_user_id
);

void usergroupdelegation_request_compound_free(usergroupdelegation_request_compound_t *usergroupdelegation_request_compound);

usergroupdelegation_request_compound_t *usergroupdelegation_request_compound_parseFromJSON(cJSON *usergroupdelegation_request_compoundJSON);

cJSON *usergroupdelegation_request_compound_convertToJSON(usergroupdelegation_request_compound_t *usergroupdelegation_request_compound);

#endif /* _usergroupdelegation_request_compound_H_ */

