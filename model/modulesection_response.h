/*
 * modulesection_response.h
 *
 * A Modulesection Object
 */

#ifndef _modulesection_response_H_
#define _modulesection_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct modulesection_response_t modulesection_response_t;




typedef struct modulesection_response_t {
    int pki_modulesection_id; //numeric
    int fki_module_id; //numeric
    char *s_modulesection_internalname; // string
    char *s_modulesection_name_x; // string

} modulesection_response_t;

modulesection_response_t *modulesection_response_create(
    int pki_modulesection_id,
    int fki_module_id,
    char *s_modulesection_internalname,
    char *s_modulesection_name_x
);

void modulesection_response_free(modulesection_response_t *modulesection_response);

modulesection_response_t *modulesection_response_parseFromJSON(cJSON *modulesection_responseJSON);

cJSON *modulesection_response_convertToJSON(modulesection_response_t *modulesection_response);

#endif /* _modulesection_response_H_ */

