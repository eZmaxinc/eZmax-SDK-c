/*
 * signature_response_v3.h
 *
 * A Signature Object
 */

#ifndef _signature_response_v3_H_
#define _signature_response_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_response_v3_t signature_response_v3_t;

#include "field_e_signature_preference.h"

// Enum  for signature_response_v3

typedef enum  { ezmax_api_definition__full_signature_response_v3__NULL = 0, ezmax_api_definition__full_signature_response_v3__Text, ezmax_api_definition__full_signature_response_v3__Handwritten } ezmax_api_definition__full_signature_response_v3__e;

char* signature_response_v3_e_signature_preference_ToString(ezmax_api_definition__full_signature_response_v3__e e_signature_preference);

ezmax_api_definition__full_signature_response_v3__e signature_response_v3_e_signature_preference_FromString(char* e_signature_preference);



typedef struct signature_response_v3_t {
    int pki_signature_id; //numeric
    int fki_font_id; //numeric
    field_e_signature_preference_t *e_signature_preference; // custom
    int b_signature_svg; //boolean
    int b_signature_svginitials; //boolean

} signature_response_v3_t;

signature_response_v3_t *signature_response_v3_create(
    int pki_signature_id,
    int fki_font_id,
    field_e_signature_preference_t *e_signature_preference,
    int b_signature_svg,
    int b_signature_svginitials
);

void signature_response_v3_free(signature_response_v3_t *signature_response_v3);

signature_response_v3_t *signature_response_v3_parseFromJSON(cJSON *signature_response_v3JSON);

cJSON *signature_response_v3_convertToJSON(signature_response_v3_t *signature_response_v3);

#endif /* _signature_response_v3_H_ */

