/*
 * modulesection_response_compound_all_of.h
 *
 * 
 */

#ifndef _modulesection_response_compound_all_of_H_
#define _modulesection_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct modulesection_response_compound_all_of_t modulesection_response_compound_all_of_t;

#include "permission_response_compound.h"



typedef struct modulesection_response_compound_all_of_t {
    list_t *a_obj_permission; //nonprimitive container

} modulesection_response_compound_all_of_t;

modulesection_response_compound_all_of_t *modulesection_response_compound_all_of_create(
    list_t *a_obj_permission
);

void modulesection_response_compound_all_of_free(modulesection_response_compound_all_of_t *modulesection_response_compound_all_of);

modulesection_response_compound_all_of_t *modulesection_response_compound_all_of_parseFromJSON(cJSON *modulesection_response_compound_all_ofJSON);

cJSON *modulesection_response_compound_all_of_convertToJSON(modulesection_response_compound_all_of_t *modulesection_response_compound_all_of);

#endif /* _modulesection_response_compound_all_of_H_ */

