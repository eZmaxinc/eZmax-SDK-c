/*
 * multilingual_ezmaxpartner_shortdescription.h
 *
 * Short description of the Ezmaxpartner
 */

#ifndef _multilingual_ezmaxpartner_shortdescription_H_
#define _multilingual_ezmaxpartner_shortdescription_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezmaxpartner_shortdescription_t multilingual_ezmaxpartner_shortdescription_t;




typedef struct multilingual_ezmaxpartner_shortdescription_t {
    char *s_ezmaxpartner_shortdescription1; // string
    char *s_ezmaxpartner_shortdescription2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezmaxpartner_shortdescription_t;

__attribute__((deprecated)) multilingual_ezmaxpartner_shortdescription_t *multilingual_ezmaxpartner_shortdescription_create(
    char *s_ezmaxpartner_shortdescription1,
    char *s_ezmaxpartner_shortdescription2
);

void multilingual_ezmaxpartner_shortdescription_free(multilingual_ezmaxpartner_shortdescription_t *multilingual_ezmaxpartner_shortdescription);

multilingual_ezmaxpartner_shortdescription_t *multilingual_ezmaxpartner_shortdescription_parseFromJSON(cJSON *multilingual_ezmaxpartner_shortdescriptionJSON);

cJSON *multilingual_ezmaxpartner_shortdescription_convertToJSON(multilingual_ezmaxpartner_shortdescription_t *multilingual_ezmaxpartner_shortdescription);

#endif /* _multilingual_ezmaxpartner_shortdescription_H_ */

