/*
 * ezsignsigningreason_request_compound.h
 *
 * A Ezsignsigningreason Object and children
 */

#ifndef _ezsignsigningreason_request_compound_H_
#define _ezsignsigningreason_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_request_compound_t ezsignsigningreason_request_compound_t;

#include "multilingual_ezsignsigningreason_description.h"



typedef struct ezsignsigningreason_request_compound_t {
    int pki_ezsignsigningreason_id; //numeric
    struct multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description; //model
    int b_ezsignsigningreason_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsigningreason_request_compound_t;

__attribute__((deprecated)) ezsignsigningreason_request_compound_t *ezsignsigningreason_request_compound_create(
    int pki_ezsignsigningreason_id,
    multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description,
    int b_ezsignsigningreason_isactive
);

void ezsignsigningreason_request_compound_free(ezsignsigningreason_request_compound_t *ezsignsigningreason_request_compound);

ezsignsigningreason_request_compound_t *ezsignsigningreason_request_compound_parseFromJSON(cJSON *ezsignsigningreason_request_compoundJSON);

cJSON *ezsignsigningreason_request_compound_convertToJSON(ezsignsigningreason_request_compound_t *ezsignsigningreason_request_compound);

#endif /* _ezsignsigningreason_request_compound_H_ */

