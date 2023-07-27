/*
 * ezsignsignergroupmembership_response.h
 *
 * A Ezsignsignergroupmembership Object
 */

#ifndef _ezsignsignergroupmembership_response_H_
#define _ezsignsignergroupmembership_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroupmembership_response_t ezsignsignergroupmembership_response_t;




typedef struct ezsignsignergroupmembership_response_t {
    int pki_ezsignsignergroupmembership_id; //numeric
    int fki_ezsignsignergroup_id; //numeric
    int fki_ezsignsigner_id; //numeric
    int fki_user_id; //numeric
    int fki_usergroup_id; //numeric

} ezsignsignergroupmembership_response_t;

ezsignsignergroupmembership_response_t *ezsignsignergroupmembership_response_create(
    int pki_ezsignsignergroupmembership_id,
    int fki_ezsignsignergroup_id,
    int fki_ezsignsigner_id,
    int fki_user_id,
    int fki_usergroup_id
);

void ezsignsignergroupmembership_response_free(ezsignsignergroupmembership_response_t *ezsignsignergroupmembership_response);

ezsignsignergroupmembership_response_t *ezsignsignergroupmembership_response_parseFromJSON(cJSON *ezsignsignergroupmembership_responseJSON);

cJSON *ezsignsignergroupmembership_response_convertToJSON(ezsignsignergroupmembership_response_t *ezsignsignergroupmembership_response);

#endif /* _ezsignsignergroupmembership_response_H_ */

