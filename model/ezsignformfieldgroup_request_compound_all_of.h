/*
 * ezsignformfieldgroup_request_compound_all_of.h
 *
 * 
 */

#ifndef _ezsignformfieldgroup_request_compound_all_of_H_
#define _ezsignformfieldgroup_request_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_request_compound_all_of_t ezsignformfieldgroup_request_compound_all_of_t;

#include "custom_dropdown_element_request_compound.h"
#include "ezsignformfield_request_compound.h"
#include "ezsignformfieldgroupsigner_request_compound.h"



typedef struct ezsignformfieldgroup_request_compound_all_of_t {
    list_t *a_obj_ezsignformfieldgroupsigner; //nonprimitive container
    list_t *a_obj_dropdown_element; //nonprimitive container
    list_t *a_obj_ezsignformfield; //nonprimitive container

} ezsignformfieldgroup_request_compound_all_of_t;

ezsignformfieldgroup_request_compound_all_of_t *ezsignformfieldgroup_request_compound_all_of_create(
    list_t *a_obj_ezsignformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsignformfield
);

void ezsignformfieldgroup_request_compound_all_of_free(ezsignformfieldgroup_request_compound_all_of_t *ezsignformfieldgroup_request_compound_all_of);

ezsignformfieldgroup_request_compound_all_of_t *ezsignformfieldgroup_request_compound_all_of_parseFromJSON(cJSON *ezsignformfieldgroup_request_compound_all_ofJSON);

cJSON *ezsignformfieldgroup_request_compound_all_of_convertToJSON(ezsignformfieldgroup_request_compound_all_of_t *ezsignformfieldgroup_request_compound_all_of);

#endif /* _ezsignformfieldgroup_request_compound_all_of_H_ */

