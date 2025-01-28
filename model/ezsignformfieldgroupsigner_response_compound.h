/*
 * ezsignformfieldgroupsigner_response_compound.h
 *
 * An Ezsignformfieldgroupsigner Object and children to create a complete structure
 */

#ifndef _ezsignformfieldgroupsigner_response_compound_H_
#define _ezsignformfieldgroupsigner_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroupsigner_response_compound_t ezsignformfieldgroupsigner_response_compound_t;




typedef struct ezsignformfieldgroupsigner_response_compound_t {
    int pki_ezsignformfieldgroupsigner_id; //numeric
    int fki_ezsignfoldersignerassociation_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignformfieldgroupsigner_response_compound_t;

__attribute__((deprecated)) ezsignformfieldgroupsigner_response_compound_t *ezsignformfieldgroupsigner_response_compound_create(
    int pki_ezsignformfieldgroupsigner_id,
    int fki_ezsignfoldersignerassociation_id
);

void ezsignformfieldgroupsigner_response_compound_free(ezsignformfieldgroupsigner_response_compound_t *ezsignformfieldgroupsigner_response_compound);

ezsignformfieldgroupsigner_response_compound_t *ezsignformfieldgroupsigner_response_compound_parseFromJSON(cJSON *ezsignformfieldgroupsigner_response_compoundJSON);

cJSON *ezsignformfieldgroupsigner_response_compound_convertToJSON(ezsignformfieldgroupsigner_response_compound_t *ezsignformfieldgroupsigner_response_compound);

#endif /* _ezsignformfieldgroupsigner_response_compound_H_ */

