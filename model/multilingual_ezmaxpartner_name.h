/*
 * multilingual_ezmaxpartner_name.h
 *
 * Name of the Ezmaxpartner
 */

#ifndef _multilingual_ezmaxpartner_name_H_
#define _multilingual_ezmaxpartner_name_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezmaxpartner_name_t multilingual_ezmaxpartner_name_t;




typedef struct multilingual_ezmaxpartner_name_t {
    char *s_ezmaxpartner_name1; // string
    char *s_ezmaxpartner_name2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezmaxpartner_name_t;

__attribute__((deprecated)) multilingual_ezmaxpartner_name_t *multilingual_ezmaxpartner_name_create(
    char *s_ezmaxpartner_name1,
    char *s_ezmaxpartner_name2
);

void multilingual_ezmaxpartner_name_free(multilingual_ezmaxpartner_name_t *multilingual_ezmaxpartner_name);

multilingual_ezmaxpartner_name_t *multilingual_ezmaxpartner_name_parseFromJSON(cJSON *multilingual_ezmaxpartner_nameJSON);

cJSON *multilingual_ezmaxpartner_name_convertToJSON(multilingual_ezmaxpartner_name_t *multilingual_ezmaxpartner_name);

#endif /* _multilingual_ezmaxpartner_name_H_ */

