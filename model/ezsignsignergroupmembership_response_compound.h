/*
 * ezsignsignergroupmembership_response_compound.h
 *
 * A Ezsignsignergroupmembership Object
 */

#ifndef _ezsignsignergroupmembership_response_compound_H_
#define _ezsignsignergroupmembership_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroupmembership_response_compound_t ezsignsignergroupmembership_response_compound_t;




typedef struct ezsignsignergroupmembership_response_compound_t {
    int pki_ezsignsignergroupmembership_id; //numeric
    int fki_ezsignsignergroup_id; //numeric
    int fki_ezsignsigner_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric

} ezsignsignergroupmembership_response_compound_t;

ezsignsignergroupmembership_response_compound_t *ezsignsignergroupmembership_response_compound_create(
    int pki_ezsignsignergroupmembership_id,
    int fki_ezsignsignergroup_id,
    int fki_ezsignsigner_id,
    int fki_user_id,
    int fki_usergroup_id
);

void ezsignsignergroupmembership_response_compound_free(ezsignsignergroupmembership_response_compound_t *ezsignsignergroupmembership_response_compound);

ezsignsignergroupmembership_response_compound_t *ezsignsignergroupmembership_response_compound_parseFromJSON(cJSON *ezsignsignergroupmembership_response_compoundJSON);

cJSON *ezsignsignergroupmembership_response_compound_convertToJSON(ezsignsignergroupmembership_response_compound_t *ezsignsignergroupmembership_response_compound);

#endif /* _ezsignsignergroupmembership_response_compound_H_ */

