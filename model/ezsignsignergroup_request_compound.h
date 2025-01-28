/*
 * ezsignsignergroup_request_compound.h
 *
 * A Ezsignsignergroup Object and children
 */

#ifndef _ezsignsignergroup_request_compound_H_
#define _ezsignsignergroup_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroup_request_compound_t ezsignsignergroup_request_compound_t;

#include "multilingual_ezsignsignergroup_description.h"



typedef struct ezsignsignergroup_request_compound_t {
    int pki_ezsignsignergroup_id; //numeric
    int fki_ezsignfolder_id; //numeric
    struct multilingual_ezsignsignergroup_description_t *obj_ezsignsignergroup_description; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignergroup_request_compound_t;

__attribute__((deprecated)) ezsignsignergroup_request_compound_t *ezsignsignergroup_request_compound_create(
    int pki_ezsignsignergroup_id,
    int fki_ezsignfolder_id,
    multilingual_ezsignsignergroup_description_t *obj_ezsignsignergroup_description
);

void ezsignsignergroup_request_compound_free(ezsignsignergroup_request_compound_t *ezsignsignergroup_request_compound);

ezsignsignergroup_request_compound_t *ezsignsignergroup_request_compound_parseFromJSON(cJSON *ezsignsignergroup_request_compoundJSON);

cJSON *ezsignsignergroup_request_compound_convertToJSON(ezsignsignergroup_request_compound_t *ezsignsignergroup_request_compound);

#endif /* _ezsignsignergroup_request_compound_H_ */

