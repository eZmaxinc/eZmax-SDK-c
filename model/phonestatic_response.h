/*
 * phonestatic_response.h
 *
 * A Phonestatic Object
 */

#ifndef _phonestatic_response_H_
#define _phonestatic_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct phonestatic_response_t phonestatic_response_t;




typedef struct phonestatic_response_t {
    int pki_phonestatic_id; //numeric
    char *s_phonestatic_e164; // string
    char *s_phonestatic_extension; // string

} phonestatic_response_t;

phonestatic_response_t *phonestatic_response_create(
    int pki_phonestatic_id,
    char *s_phonestatic_e164,
    char *s_phonestatic_extension
);

void phonestatic_response_free(phonestatic_response_t *phonestatic_response);

phonestatic_response_t *phonestatic_response_parseFromJSON(cJSON *phonestatic_responseJSON);

cJSON *phonestatic_response_convertToJSON(phonestatic_response_t *phonestatic_response);

#endif /* _phonestatic_response_H_ */

