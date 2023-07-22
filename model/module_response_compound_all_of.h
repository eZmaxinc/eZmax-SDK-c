/*
 * module_response_compound_all_of.h
 *
 * 
 */

#ifndef _module_response_compound_all_of_H_
#define _module_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct module_response_compound_all_of_t module_response_compound_all_of_t;

#include "modulesection_response_compound.h"



typedef struct module_response_compound_all_of_t {
    list_t *a_obj_modulesection; //nonprimitive container

} module_response_compound_all_of_t;

module_response_compound_all_of_t *module_response_compound_all_of_create(
    list_t *a_obj_modulesection
);

void module_response_compound_all_of_free(module_response_compound_all_of_t *module_response_compound_all_of);

module_response_compound_all_of_t *module_response_compound_all_of_parseFromJSON(cJSON *module_response_compound_all_ofJSON);

cJSON *module_response_compound_all_of_convertToJSON(module_response_compound_all_of_t *module_response_compound_all_of);

#endif /* _module_response_compound_all_of_H_ */

