/*
 * module_response_compound.h
 *
 * A Module Object
 */

#ifndef _module_response_compound_H_
#define _module_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct module_response_compound_t module_response_compound_t;

#include "modulesection_response_compound.h"



typedef struct module_response_compound_t {
    int pki_module_id; //numeric
    int fki_modulegroup_id; //numeric
    char *e_module_internalname; // string
    char *s_module_name_x; // string
    int b_module_registered; //boolean
    int b_module_registeredapi; //boolean
    list_t *a_obj_modulesection; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} module_response_compound_t;

__attribute__((deprecated)) module_response_compound_t *module_response_compound_create(
    int pki_module_id,
    int fki_modulegroup_id,
    char *e_module_internalname,
    char *s_module_name_x,
    int b_module_registered,
    int b_module_registeredapi,
    list_t *a_obj_modulesection
);

void module_response_compound_free(module_response_compound_t *module_response_compound);

module_response_compound_t *module_response_compound_parseFromJSON(cJSON *module_response_compoundJSON);

cJSON *module_response_compound_convertToJSON(module_response_compound_t *module_response_compound);

#endif /* _module_response_compound_H_ */

