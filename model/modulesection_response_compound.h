/*
 * modulesection_response_compound.h
 *
 * A Modulesection Object
 */

#ifndef _modulesection_response_compound_H_
#define _modulesection_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct modulesection_response_compound_t modulesection_response_compound_t;

#include "modulesection_response.h"
#include "permission_response.h"



typedef struct modulesection_response_compound_t {
    int pki_modulesection_id; //numeric
    int fki_module_id; //numeric
    char *s_modulesection_internalname; // string
    char *s_modulesection_name_x; // string
    list_t *a_obj_permission; //nonprimitive container

} modulesection_response_compound_t;

modulesection_response_compound_t *modulesection_response_compound_create(
    int pki_modulesection_id,
    int fki_module_id,
    char *s_modulesection_internalname,
    char *s_modulesection_name_x,
    list_t *a_obj_permission
);

void modulesection_response_compound_free(modulesection_response_compound_t *modulesection_response_compound);

modulesection_response_compound_t *modulesection_response_compound_parseFromJSON(cJSON *modulesection_response_compoundJSON);

cJSON *modulesection_response_compound_convertToJSON(modulesection_response_compound_t *modulesection_response_compound);

#endif /* _modulesection_response_compound_H_ */

