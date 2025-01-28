/*
 * phone_request_compound_v2.h
 *
 * A Phone Object and children to create a complete structure
 */

#ifndef _phone_request_compound_v2_H_
#define _phone_request_compound_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct phone_request_compound_v2_t phone_request_compound_v2_t;




typedef struct phone_request_compound_v2_t {
    int pki_phone_id; //numeric
    int fki_phonetype_id; //numeric
    char *s_phone_extension; // string
    char *s_phone_e164; // string

    int _library_owned; // Is the library responsible for freeing this object?
} phone_request_compound_v2_t;

__attribute__((deprecated)) phone_request_compound_v2_t *phone_request_compound_v2_create(
    int pki_phone_id,
    int fki_phonetype_id,
    char *s_phone_extension,
    char *s_phone_e164
);

void phone_request_compound_v2_free(phone_request_compound_v2_t *phone_request_compound_v2);

phone_request_compound_v2_t *phone_request_compound_v2_parseFromJSON(cJSON *phone_request_compound_v2JSON);

cJSON *phone_request_compound_v2_convertToJSON(phone_request_compound_v2_t *phone_request_compound_v2);

#endif /* _phone_request_compound_v2_H_ */

