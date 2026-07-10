/*
 * multilingual_ezmaxpartner_logourl.h
 *
 * Logo url of the Ezmaxpartner
 */

#ifndef _multilingual_ezmaxpartner_logourl_H_
#define _multilingual_ezmaxpartner_logourl_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezmaxpartner_logourl_t multilingual_ezmaxpartner_logourl_t;




typedef struct multilingual_ezmaxpartner_logourl_t {
    char *s_ezmaxpartner_logourl1; // string
    char *s_ezmaxpartner_logourl2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezmaxpartner_logourl_t;

__attribute__((deprecated)) multilingual_ezmaxpartner_logourl_t *multilingual_ezmaxpartner_logourl_create(
    char *s_ezmaxpartner_logourl1,
    char *s_ezmaxpartner_logourl2
);

void multilingual_ezmaxpartner_logourl_free(multilingual_ezmaxpartner_logourl_t *multilingual_ezmaxpartner_logourl);

multilingual_ezmaxpartner_logourl_t *multilingual_ezmaxpartner_logourl_parseFromJSON(cJSON *multilingual_ezmaxpartner_logourlJSON);

cJSON *multilingual_ezmaxpartner_logourl_convertToJSON(multilingual_ezmaxpartner_logourl_t *multilingual_ezmaxpartner_logourl);

#endif /* _multilingual_ezmaxpartner_logourl_H_ */

