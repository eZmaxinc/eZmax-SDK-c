/*
 * multilingual_ezmaxpartner_emailaddress.h
 *
 * Email of the Ezmaxpartner
 */

#ifndef _multilingual_ezmaxpartner_emailaddress_H_
#define _multilingual_ezmaxpartner_emailaddress_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezmaxpartner_emailaddress_t multilingual_ezmaxpartner_emailaddress_t;




typedef struct multilingual_ezmaxpartner_emailaddress_t {
    char *s_ezmaxpartner_emailaddress1; // string
    char *s_ezmaxpartner_emailaddress2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezmaxpartner_emailaddress_t;

__attribute__((deprecated)) multilingual_ezmaxpartner_emailaddress_t *multilingual_ezmaxpartner_emailaddress_create(
    char *s_ezmaxpartner_emailaddress1,
    char *s_ezmaxpartner_emailaddress2
);

void multilingual_ezmaxpartner_emailaddress_free(multilingual_ezmaxpartner_emailaddress_t *multilingual_ezmaxpartner_emailaddress);

multilingual_ezmaxpartner_emailaddress_t *multilingual_ezmaxpartner_emailaddress_parseFromJSON(cJSON *multilingual_ezmaxpartner_emailaddressJSON);

cJSON *multilingual_ezmaxpartner_emailaddress_convertToJSON(multilingual_ezmaxpartner_emailaddress_t *multilingual_ezmaxpartner_emailaddress);

#endif /* _multilingual_ezmaxpartner_emailaddress_H_ */

