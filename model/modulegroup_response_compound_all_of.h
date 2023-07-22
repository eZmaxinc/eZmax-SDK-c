/*
 * modulegroup_response_compound_all_of.h
 *
 * 
 */

#ifndef _modulegroup_response_compound_all_of_H_
#define _modulegroup_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct modulegroup_response_compound_all_of_t modulegroup_response_compound_all_of_t;

#include "module_response_compound.h"



typedef struct modulegroup_response_compound_all_of_t {
    list_t *a_obj_module; //nonprimitive container

} modulegroup_response_compound_all_of_t;

modulegroup_response_compound_all_of_t *modulegroup_response_compound_all_of_create(
    list_t *a_obj_module
);

void modulegroup_response_compound_all_of_free(modulegroup_response_compound_all_of_t *modulegroup_response_compound_all_of);

modulegroup_response_compound_all_of_t *modulegroup_response_compound_all_of_parseFromJSON(cJSON *modulegroup_response_compound_all_ofJSON);

cJSON *modulegroup_response_compound_all_of_convertToJSON(modulegroup_response_compound_all_of_t *modulegroup_response_compound_all_of);

#endif /* _modulegroup_response_compound_all_of_H_ */

