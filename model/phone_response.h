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

// Enum  for phone_response

typedef enum  { ezmax_api_definition__full_phone_response__NULL = 0, ezmax_api_definition__full_phone_response__Local, ezmax_api_definition__full_phone_response__International } ezmax_api_definition__full_phone_response__e;

char* phone_response_e_phone_type_ToString(ezmax_api_definition__full_phone_response__e e_phone_type);

ezmax_api_definition__full_phone_response__e phone_response_e_phone_type_FromString(char* e_phone_type);



typedef struct phone_response_t {
    int pki_phone_id; //numeric
    int fki_phonetype_id; //numeric
    field_e_phone_type_t *e_phone_type; // custom
    char *s_phone_region; // string
    char *s_phone_exchange; // string
    char *i_phone_number; // string
    char *s_phone_extension; // string
    char *s_phone_international; // string

} phone_response_t;

phone_response_t *phone_response_create(
    int pki_phone_id,
    int fki_phonetype_id,
    field_e_phone_type_t *e_phone_type,
    char *s_phone_region,
    char *s_phone_exchange,
    char *i_phone_number,
    char *s_phone_extension,
    char *s_phone_international
);

void phone_response_free(phone_response_t *phone_response);

phone_response_t *phone_response_parseFromJSON(cJSON *phone_responseJSON);

cJSON *phone_response_convertToJSON(phone_response_t *phone_response);

#endif /* _phone_response_H_ */

