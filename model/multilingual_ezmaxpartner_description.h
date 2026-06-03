/*
 * multilingual_ezmaxpartner_description.h
 *
 * Description of the Ezmaxpartner
 */

#ifndef _multilingual_ezmaxpartner_description_H_
#define _multilingual_ezmaxpartner_description_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezmaxpartner_description_t multilingual_ezmaxpartner_description_t;




typedef struct multilingual_ezmaxpartner_description_t {
    char *s_ezmaxpartner_description1; // string
    char *s_ezmaxpartner_description2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezmaxpartner_description_t;

__attribute__((deprecated)) multilingual_ezmaxpartner_description_t *multilingual_ezmaxpartner_description_create(
    char *s_ezmaxpartner_description1,
    char *s_ezmaxpartner_description2
);

void multilingual_ezmaxpartner_description_free(multilingual_ezmaxpartner_description_t *multilingual_ezmaxpartner_description);

multilingual_ezmaxpartner_description_t *multilingual_ezmaxpartner_description_parseFromJSON(cJSON *multilingual_ezmaxpartner_descriptionJSON);

cJSON *multilingual_ezmaxpartner_description_convertToJSON(multilingual_ezmaxpartner_description_t *multilingual_ezmaxpartner_description);

#endif /* _multilingual_ezmaxpartner_description_H_ */

