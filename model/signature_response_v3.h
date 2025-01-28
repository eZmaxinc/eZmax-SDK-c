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



typedef struct signature_response_v3_t {
    int pki_signature_id; //numeric
    int fki_font_id; //numeric
    ezmax_api_definition__full_field_e_signature_preference__e e_signature_preference; //referenced enum
    int b_signature_svg; //boolean
    int b_signature_svginitials; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} signature_response_v3_t;

__attribute__((deprecated)) signature_response_v3_t *signature_response_v3_create(
    int pki_signature_id,
    int fki_font_id,
    ezmax_api_definition__full_field_e_signature_preference__e e_signature_preference,
    int b_signature_svg,
    int b_signature_svginitials
);

void signature_response_v3_free(signature_response_v3_t *signature_response_v3);

signature_response_v3_t *signature_response_v3_parseFromJSON(cJSON *signature_response_v3JSON);

cJSON *signature_response_v3_convertToJSON(signature_response_v3_t *signature_response_v3);

#endif /* _signature_response_v3_H_ */

