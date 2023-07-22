/*
 * ezsignsignergroup_response_compound.h
 *
 * An Ezsignsignergroup Object
 */

#ifndef _ezsignsignergroup_response_compound_H_
#define _ezsignsignergroup_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroup_response_compound_t ezsignsignergroup_response_compound_t;




typedef struct ezsignsignergroup_response_compound_t {
    int pki_ezsignsignergroup_id; //numeric

} ezsignsignergroup_response_compound_t;

ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound_create(
    int pki_ezsignsignergroup_id
);

void ezsignsignergroup_response_compound_free(ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound);

ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound_parseFromJSON(cJSON *ezsignsignergroup_response_compoundJSON);

cJSON *ezsignsignergroup_response_compound_convertToJSON(ezsignsignergroup_response_compound_t *ezsignsignergroup_response_compound);

#endif /* _ezsignsignergroup_response_compound_H_ */

