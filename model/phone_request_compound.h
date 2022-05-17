/*
 * phone_request_compound.h
 *
 * A Phone Object and children to create a complete structure
 */

#ifndef _phone_request_compound_H_
#define _phone_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct phone_request_compound_t phone_request_compound_t;

#include "field_e_phone_type.h"
#include "phone_request.h"

// Enum  for phone_request_compound

typedef enum  { ezmax_api_definition__full_phone_request_compound__NULL = 0, ezmax_api_definition__full_phone_request_compound__Local, ezmax_api_definition__full_phone_request_compound__International } ezmax_api_definition__full_phone_request_compound__e;

char* phone_request_compound_e_phone_type_ToString(ezmax_api_definition__full_phone_request_compound__e e_phone_type);

ezmax_api_definition__full_phone_request_compound__e phone_request_compound_e_phone_type_FromString(char* e_phone_type);



typedef struct phone_request_compound_t {
    int fki_phonetype_id; //numeric
    field_e_phone_type_t *e_phone_type; // custom
    char *s_phone_region; // string
    char *s_phone_exchange; // string
    char *s_phone_number; // string
    char *s_phone_international; // string
    char *s_phone_extension; // string

} phone_request_compound_t;

phone_request_compound_t *phone_request_compound_create(
    int fki_phonetype_id,
    field_e_phone_type_t *e_phone_type,
    char *s_phone_region,
    char *s_phone_exchange,
    char *s_phone_number,
    char *s_phone_international,
    char *s_phone_extension
);

void phone_request_compound_free(phone_request_compound_t *phone_request_compound);

phone_request_compound_t *phone_request_compound_parseFromJSON(cJSON *phone_request_compoundJSON);

cJSON *phone_request_compound_convertToJSON(phone_request_compound_t *phone_request_compound);

#endif /* _phone_request_compound_H_ */

