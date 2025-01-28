/*
 * phone_response.h
 *
 * A Phone Object
 */

#ifndef _phone_response_H_
#define _phone_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct phone_response_t phone_response_t;

#include "field_e_phone_type.h"



typedef struct phone_response_t {
    int pki_phone_id; //numeric
    int fki_phonetype_id; //numeric
    ezmax_api_definition__full_field_e_phone_type__e e_phone_type; //referenced enum
    char *s_phone_e164; // string
    char *s_phone_extension; // string

    int _library_owned; // Is the library responsible for freeing this object?
} phone_response_t;

__attribute__((deprecated)) phone_response_t *phone_response_create(
    int pki_phone_id,
    int fki_phonetype_id,
    ezmax_api_definition__full_field_e_phone_type__e e_phone_type,
    char *s_phone_e164,
    char *s_phone_extension
);

void phone_response_free(phone_response_t *phone_response);

phone_response_t *phone_response_parseFromJSON(cJSON *phone_responseJSON);

cJSON *phone_response_convertToJSON(phone_response_t *phone_response);

#endif /* _phone_response_H_ */

