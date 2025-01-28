/*
 * modulegroup_response.h
 *
 * A Modulegroup Object
 */

#ifndef _modulegroup_response_H_
#define _modulegroup_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct modulegroup_response_t modulegroup_response_t;




typedef struct modulegroup_response_t {
    int pki_modulegroup_id; //numeric
    char *s_modulegroup_name_x; // string

    int _library_owned; // Is the library responsible for freeing this object?
} modulegroup_response_t;

__attribute__((deprecated)) modulegroup_response_t *modulegroup_response_create(
    int pki_modulegroup_id,
    char *s_modulegroup_name_x
);

void modulegroup_response_free(modulegroup_response_t *modulegroup_response);

modulegroup_response_t *modulegroup_response_parseFromJSON(cJSON *modulegroup_responseJSON);

cJSON *modulegroup_response_convertToJSON(modulegroup_response_t *modulegroup_response);

#endif /* _modulegroup_response_H_ */

