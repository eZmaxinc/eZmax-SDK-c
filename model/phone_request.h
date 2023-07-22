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

// Enum  for phone_request

typedef enum  { ezmax_api_definition__full_phone_request__NULL = 0, ezmax_api_definition__full_phone_request__Local, ezmax_api_definition__full_phone_request__International } ezmax_api_definition__full_phone_request__e;

char* phone_request_e_phone_type_ToString(ezmax_api_definition__full_phone_request__e e_phone_type);

ezmax_api_definition__full_phone_request__e phone_request_e_phone_type_FromString(char* e_phone_type);



typedef struct phone_request_t {
    int pki_phone_id; //numeric
    int fki_phonetype_id; //numeric
    field_e_phone_type_t *e_phone_type; // custom
    char *s_phone_region; // string
    char *s_phone_exchange; // string
    char *s_phone_number; // string
    char *s_phone_international; // string
    char *s_phone_extension; // string
    char *s_phone_e164; // string

} phone_request_t;

phone_request_t *phone_request_create(
    int pki_phone_id,
    int fki_phonetype_id,
    field_e_phone_type_t *e_phone_type,
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

