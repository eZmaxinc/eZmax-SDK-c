/*
 * ezsignformfieldgroup_response_compound.h
 *
 * An Ezsignformfieldgroup Object and children to create a complete structure
 */

#ifndef _ezsignformfieldgroup_response_compound_H_
#define _ezsignformfieldgroup_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_response_compound_t ezsignformfieldgroup_response_compound_t;

#include "ezsignformfield_response.h"
#include "ezsignformfieldgroup_response.h"
#include "ezsignformfieldgroup_response_compound_all_of.h"



typedef struct ezsignformfieldgroup_response_compound_t {
    char *s_ezsignformfieldgroup_label; // string
    list_t *a_obj_ezsignformfield; //nonprimitive container

} ezsignformfieldgroup_response_compound_t;

ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound_create(
    char *s_ezsignformfieldgroup_label,
    list_t *a_obj_ezsignformfield
);

void ezsignformfieldgroup_response_compound_free(ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound);

ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound_parseFromJSON(cJSON *ezsignformfieldgroup_response_compoundJSON);

cJSON *ezsignformfieldgroup_response_compound_convertToJSON(ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound);

#endif /* _ezsignformfieldgroup_response_compound_H_ */

