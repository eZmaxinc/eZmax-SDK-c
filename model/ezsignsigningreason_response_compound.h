/*
 * ezsignsigningreason_response_compound.h
 *
 * A Ezsignsigningreason Object
 */

#ifndef _ezsignsigningreason_response_compound_H_
#define _ezsignsigningreason_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_response_compound_t ezsignsigningreason_response_compound_t;

#include "multilingual_ezsignsigningreason_description.h"



typedef struct ezsignsigningreason_response_compound_t {
    int pki_ezsignsigningreason_id; //numeric
    struct multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description; //model
    int b_ezsignsigningreason_isactive; //boolean

} ezsignsigningreason_response_compound_t;

ezsignsigningreason_response_compound_t *ezsignsigningreason_response_compound_create(
    int pki_ezsignsigningreason_id,
    multilingual_ezsignsigningreason_description_t *obj_ezsignsigningreason_description,
    int b_ezsignsigningreason_isactive
);

void ezsignsigningreason_response_compound_free(ezsignsigningreason_response_compound_t *ezsignsigningreason_response_compound);

ezsignsigningreason_response_compound_t *ezsignsigningreason_response_compound_parseFromJSON(cJSON *ezsignsigningreason_response_compoundJSON);

cJSON *ezsignsigningreason_response_compound_convertToJSON(ezsignsigningreason_response_compound_t *ezsignsigningreason_response_compound);

#endif /* _ezsignsigningreason_response_compound_H_ */

