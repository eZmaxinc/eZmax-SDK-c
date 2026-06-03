/*
 * multilingual_ezmaxpartner_address.h
 *
 * Address of the Ezmaxpartner
 */

#ifndef _multilingual_ezmaxpartner_address_H_
#define _multilingual_ezmaxpartner_address_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezmaxpartner_address_t multilingual_ezmaxpartner_address_t;




typedef struct multilingual_ezmaxpartner_address_t {
    char *s_ezmaxpartner_address1; // string
    char *s_ezmaxpartner_address2; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezmaxpartner_address_t;

__attribute__((deprecated)) multilingual_ezmaxpartner_address_t *multilingual_ezmaxpartner_address_create(
    char *s_ezmaxpartner_address1,
    char *s_ezmaxpartner_address2
);

void multilingual_ezmaxpartner_address_free(multilingual_ezmaxpartner_address_t *multilingual_ezmaxpartner_address);

multilingual_ezmaxpartner_address_t *multilingual_ezmaxpartner_address_parseFromJSON(cJSON *multilingual_ezmaxpartner_addressJSON);

cJSON *multilingual_ezmaxpartner_address_convertToJSON(multilingual_ezmaxpartner_address_t *multilingual_ezmaxpartner_address);

#endif /* _multilingual_ezmaxpartner_address_H_ */

