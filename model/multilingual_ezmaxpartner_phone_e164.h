/*
 * multilingual_ezmaxpartner_phone_e164.h
 *
 * Phone number of the Ezmaxpartner
 */

#ifndef _multilingual_ezmaxpartner_phone_e164_H_
#define _multilingual_ezmaxpartner_phone_e164_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct multilingual_ezmaxpartner_phone_e164_t multilingual_ezmaxpartner_phone_e164_t;




typedef struct multilingual_ezmaxpartner_phone_e164_t {
    char *s_ezmaxpartner_phone_e1641; // string
    char *s_ezmaxpartner_phone_e1642; // string

    int _library_owned; // Is the library responsible for freeing this object?
} multilingual_ezmaxpartner_phone_e164_t;

__attribute__((deprecated)) multilingual_ezmaxpartner_phone_e164_t *multilingual_ezmaxpartner_phone_e164_create(
    char *s_ezmaxpartner_phone_e1641,
    char *s_ezmaxpartner_phone_e1642
);

void multilingual_ezmaxpartner_phone_e164_free(multilingual_ezmaxpartner_phone_e164_t *multilingual_ezmaxpartner_phone_e164);

multilingual_ezmaxpartner_phone_e164_t *multilingual_ezmaxpartner_phone_e164_parseFromJSON(cJSON *multilingual_ezmaxpartner_phone_e164JSON);

cJSON *multilingual_ezmaxpartner_phone_e164_convertToJSON(multilingual_ezmaxpartner_phone_e164_t *multilingual_ezmaxpartner_phone_e164);

#endif /* _multilingual_ezmaxpartner_phone_e164_H_ */

