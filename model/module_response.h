/*
 * module_response.h
 *
 * A Module Object
 */

#ifndef _module_response_H_
#define _module_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct module_response_t module_response_t;




typedef struct module_response_t {
    int pki_module_id; //numeric
    int fki_modulegroup_id; //numeric
    char *e_module_internalname; // string
    char *s_module_name_x; // string
    int b_module_registered; //boolean
    int b_module_registeredapi; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} module_response_t;

__attribute__((deprecated)) module_response_t *module_response_create(
    int pki_module_id,
    int fki_modulegroup_id,
    char *e_module_internalname,
    char *s_module_name_x,
    int b_module_registered,
    int b_module_registeredapi
);

void module_response_free(module_response_t *module_response);

module_response_t *module_response_parseFromJSON(cJSON *module_responseJSON);

cJSON *module_response_convertToJSON(module_response_t *module_response);

#endif /* _module_response_H_ */

