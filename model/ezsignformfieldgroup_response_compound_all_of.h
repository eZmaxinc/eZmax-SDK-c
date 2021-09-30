/*
 * ezsignformfieldgroup_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezsignformfieldgroup_response_compound_all_of_H_
#define _ezsignformfieldgroup_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_response_compound_all_of_t ezsignformfieldgroup_response_compound_all_of_t;

#include "ezsignformfield_response.h"



typedef struct ezsignformfieldgroup_response_compound_all_of_t {
    list_t *a_obj_ezsignformfield; //nonprimitive container

} ezsignformfieldgroup_response_compound_all_of_t;

ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of_create(
    list_t *a_obj_ezsignformfield
);

void ezsignformfieldgroup_response_compound_all_of_free(ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of);

ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of_parseFromJSON(cJSON *ezsignformfieldgroup_response_compound_all_ofJSON);

cJSON *ezsignformfieldgroup_response_compound_all_of_convertToJSON(ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of);

#endif /* _ezsignformfieldgroup_response_compound_all_of_H_ */

