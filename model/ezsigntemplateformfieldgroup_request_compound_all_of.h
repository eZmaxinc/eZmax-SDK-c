/*
 * ezsigntemplateformfieldgroup_request_compound_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplateformfieldgroup_request_compound_all_of_H_
#define _ezsigntemplateformfieldgroup_request_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroup_request_compound_all_of_t ezsigntemplateformfieldgroup_request_compound_all_of_t;

#include "custom_dropdown_element_request_compound.h"
#include "ezsigntemplateformfield_request_compound.h"
#include "ezsigntemplateformfieldgroupsigner_request_compound.h"



typedef struct ezsigntemplateformfieldgroup_request_compound_all_of_t {
    list_t *a_obj_ezsigntemplateformfieldgroupsigner; //nonprimitive container
    list_t *a_obj_dropdown_element; //nonprimitive container
    list_t *a_obj_ezsigntemplateformfield; //nonprimitive container

} ezsigntemplateformfieldgroup_request_compound_all_of_t;

ezsigntemplateformfieldgroup_request_compound_all_of_t *ezsigntemplateformfieldgroup_request_compound_all_of_create(
    list_t *a_obj_ezsigntemplateformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsigntemplateformfield
);

void ezsigntemplateformfieldgroup_request_compound_all_of_free(ezsigntemplateformfieldgroup_request_compound_all_of_t *ezsigntemplateformfieldgroup_request_compound_all_of);

ezsigntemplateformfieldgroup_request_compound_all_of_t *ezsigntemplateformfieldgroup_request_compound_all_of_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_request_compound_all_ofJSON);

cJSON *ezsigntemplateformfieldgroup_request_compound_all_of_convertToJSON(ezsigntemplateformfieldgroup_request_compound_all_of_t *ezsigntemplateformfieldgroup_request_compound_all_of);

#endif /* _ezsigntemplateformfieldgroup_request_compound_all_of_H_ */

