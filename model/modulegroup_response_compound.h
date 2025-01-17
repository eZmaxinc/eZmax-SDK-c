/*
 * modulegroup_response_compound.h
 *
 * A Modulegroup Object
 */

#ifndef _modulegroup_response_compound_H_
#define _modulegroup_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct modulegroup_response_compound_t modulegroup_response_compound_t;

#include "module_response_compound.h"
#include "modulegroup_response.h"



typedef struct modulegroup_response_compound_t {
    int pki_modulegroup_id; //numeric
    char *s_modulegroup_name_x; // string
    list_t *a_obj_module; //nonprimitive container

} modulegroup_response_compound_t;

modulegroup_response_compound_t *modulegroup_response_compound_create(
    int pki_modulegroup_id,
    char *s_modulegroup_name_x,
    list_t *a_obj_module
);

void modulegroup_response_compound_free(modulegroup_response_compound_t *modulegroup_response_compound);

modulegroup_response_compound_t *modulegroup_response_compound_parseFromJSON(cJSON *modulegroup_response_compoundJSON);

cJSON *modulegroup_response_compound_convertToJSON(modulegroup_response_compound_t *modulegroup_response_compound);

#endif /* _modulegroup_response_compound_H_ */

