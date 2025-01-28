/*
 * multilingual_usergroup_name.h
 *
 * The name of the Usergroup
 */

#ifndef _multilingual_usergroup_name_H_
#define _multilingual_usergroup_name_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_usergroup_name_t multilingual_usergroup_name_t;




typedef struct multilingual_usergroup_name_t {
    char *s_usergroup_name1; // string
    char *s_usergroup_name2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_usergroup_name_t;

__attribute__((deprecated)) multilingual_usergroup_name_t *multilingual_usergroup_name_create(
    char *s_usergroup_name1,
    char *s_usergroup_name2
);

void multilingual_usergroup_name_free(multilingual_usergroup_name_t *multilingual_usergroup_name);

multilingual_usergroup_name_t *multilingual_usergroup_name_parseFromJSON(cJSON *multilingual_usergroup_nameJSON);

cJSON *multilingual_usergroup_name_convertToJSON(multilingual_usergroup_name_t *multilingual_usergroup_name);

#endif /* _multilingual_usergroup_name_H_ */

