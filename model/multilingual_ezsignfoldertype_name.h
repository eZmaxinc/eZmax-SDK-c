/*
 * multilingual_ezsignfoldertype_name.h
 *
 * Name of the Ezsignfoldertype
 */

#ifndef _multilingual_ezsignfoldertype_name_H_
#define _multilingual_ezsignfoldertype_name_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezsignfoldertype_name_t multilingual_ezsignfoldertype_name_t;




typedef struct multilingual_ezsignfoldertype_name_t {
    char *s_ezsignfoldertype_name1; // string
    char *s_ezsignfoldertype_name2; // string

} multilingual_ezsignfoldertype_name_t;

multilingual_ezsignfoldertype_name_t *multilingual_ezsignfoldertype_name_create(
    char *s_ezsignfoldertype_name1,
    char *s_ezsignfoldertype_name2
);

void multilingual_ezsignfoldertype_name_free(multilingual_ezsignfoldertype_name_t *multilingual_ezsignfoldertype_name);

multilingual_ezsignfoldertype_name_t *multilingual_ezsignfoldertype_name_parseFromJSON(cJSON *multilingual_ezsignfoldertype_nameJSON);

cJSON *multilingual_ezsignfoldertype_name_convertToJSON(multilingual_ezsignfoldertype_name_t *multilingual_ezsignfoldertype_name);

#endif /* _multilingual_ezsignfoldertype_name_H_ */

