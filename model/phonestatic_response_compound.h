/*
 * phonestatic_response_compound.h
 *
 * A Phonestatic Object and children to create a complete structure
 */

#ifndef _phonestatic_response_compound_H_
#define _phonestatic_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct phonestatic_response_compound_t phonestatic_response_compound_t;




typedef struct phonestatic_response_compound_t {
    int pki_phonestatic_id; //numeric
    char *s_phonestatic_e164; // string
    char *s_phonestatic_extension; // string

} phonestatic_response_compound_t;

phonestatic_response_compound_t *phonestatic_response_compound_create(
    int pki_phonestatic_id,
    char *s_phonestatic_e164,
    char *s_phonestatic_extension
);

void phonestatic_response_compound_free(phonestatic_response_compound_t *phonestatic_response_compound);

phonestatic_response_compound_t *phonestatic_response_compound_parseFromJSON(cJSON *phonestatic_response_compoundJSON);

cJSON *phonestatic_response_compound_convertToJSON(phonestatic_response_compound_t *phonestatic_response_compound);

#endif /* _phonestatic_response_compound_H_ */

