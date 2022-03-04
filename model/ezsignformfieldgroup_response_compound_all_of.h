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

#include "custom_dropdown_element_response_compound.h"
#include "ezsignformfield_response_compound.h"
#include "ezsignformfieldgroupsigner_response_compound.h"



typedef struct ezsignformfieldgroup_response_compound_all_of_t {
    list_t *a_obj_ezsignformfield; //nonprimitive container
    list_t *a_obj_dropdown_element; //nonprimitive container
    struct ezsignformfieldgroupsigner_response_compound_t *a_obj_ezsignformfieldgroupsigner; //model

} ezsignformfieldgroup_response_compound_all_of_t;

ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of_create(
    list_t *a_obj_ezsignformfield,
    list_t *a_obj_dropdown_element,
    ezsignformfieldgroupsigner_response_compound_t *a_obj_ezsignformfieldgroupsigner
);

void ezsignformfieldgroup_response_compound_all_of_free(ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of);

ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of_parseFromJSON(cJSON *ezsignformfieldgroup_response_compound_all_ofJSON);

cJSON *ezsignformfieldgroup_response_compound_all_of_convertToJSON(ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of);

#endif /* _ezsignformfieldgroup_response_compound_all_of_H_ */

