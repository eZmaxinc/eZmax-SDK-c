/*
 * ezsignsignergroupmembership_request_compound.h
 *
 * A Ezsignsignergroupmembership Object and children
 */

#ifndef _ezsignsignergroupmembership_request_compound_H_
#define _ezsignsignergroupmembership_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroupmembership_request_compound_t ezsignsignergroupmembership_request_compound_t;




typedef struct ezsignsignergroupmembership_request_compound_t {
    int pki_ezsignsignergroupmembership_id; //numeric
    int fki_ezsignsignergroup_id; //numeric
    int fki_ezsignsigner_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignergroupmembership_request_compound_t;

__attribute__((deprecated)) ezsignsignergroupmembership_request_compound_t *ezsignsignergroupmembership_request_compound_create(
    int pki_ezsignsignergroupmembership_id,
    int fki_ezsignsignergroup_id,
    int fki_ezsignsigner_id,
    int fki_user_id,
    int fki_usergroup_id
);

void ezsignsignergroupmembership_request_compound_free(ezsignsignergroupmembership_request_compound_t *ezsignsignergroupmembership_request_compound);

ezsignsignergroupmembership_request_compound_t *ezsignsignergroupmembership_request_compound_parseFromJSON(cJSON *ezsignsignergroupmembership_request_compoundJSON);

cJSON *ezsignsignergroupmembership_request_compound_convertToJSON(ezsignsignergroupmembership_request_compound_t *ezsignsignergroupmembership_request_compound);

#endif /* _ezsignsignergroupmembership_request_compound_H_ */

