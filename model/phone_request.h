/*
 * phone_request.h
 *
 * A Phone Object
 */

#ifndef _phone_request_H_
#define _phone_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct phone_request_t phone_request_t;

#include "field_e_phone_type.h"



typedef struct phone_request_t {
    int pki_phone_id; //numeric
    int fki_phonetype_id; //numeric
    ezmax_api_definition__full_field_e_phone_type__e e_phone_type; //referenced enum
    char *s_phone_region; // string
    char *s_phone_exchange; // string
    char *s_phone_number; // string
    char *s_phone_international; // string
    char *s_phone_extension; // string
    char *s_phone_e164; // string

    int _library_owned; // Is the library responsible for freeing this object?
} phone_request_t;

__attribute__((deprecated)) phone_request_t *phone_request_create(
    int pki_phone_id,
    int fki_phonetype_id,
    ezmax_api_definition__full_field_e_phone_type__e e_phone_type,
    char *s_phone_region,
    char *s_phone_exchange,
    char *s_phone_number,
    char *s_phone_international,
    char *s_phone_extension,
    char *s_phone_e164
);

void phone_request_free(phone_request_t *phone_request);

phone_request_t *phone_request_parseFromJSON(cJSON *phone_requestJSON);

cJSON *phone_request_convertToJSON(phone_request_t *phone_request);

#endif /* _phone_request_H_ */

