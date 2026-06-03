/*
 * multilingual_ezmaxpartner_url.h
 *
 * Short description of the Ezmaxpartner
 */

#ifndef _multilingual_ezmaxpartner_url_H_
#define _multilingual_ezmaxpartner_url_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezmaxpartner_url_t multilingual_ezmaxpartner_url_t;




typedef struct multilingual_ezmaxpartner_url_t {
    char *s_ezmaxpartner_url1; // string
    char *s_ezmaxpartner_url2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezmaxpartner_url_t;

__attribute__((deprecated)) multilingual_ezmaxpartner_url_t *multilingual_ezmaxpartner_url_create(
    char *s_ezmaxpartner_url1,
    char *s_ezmaxpartner_url2
);

void multilingual_ezmaxpartner_url_free(multilingual_ezmaxpartner_url_t *multilingual_ezmaxpartner_url);

multilingual_ezmaxpartner_url_t *multilingual_ezmaxpartner_url_parseFromJSON(cJSON *multilingual_ezmaxpartner_urlJSON);

cJSON *multilingual_ezmaxpartner_url_convertToJSON(multilingual_ezmaxpartner_url_t *multilingual_ezmaxpartner_url);

#endif /* _multilingual_ezmaxpartner_url_H_ */

