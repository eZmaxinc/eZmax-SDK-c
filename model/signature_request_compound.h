/*
 * signature_request_compound.h
 *
 * A Signature Object and children
 */

#ifndef _signature_request_compound_H_
#define _signature_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_request_compound_t signature_request_compound_t;

#include "field_e_signature_preference.h"
#include "signature_request.h"

// Enum  for signature_request_compound

typedef enum  { ezmax_api_definition__full_signature_request_compound__NULL = 0, ezmax_api_definition__full_signature_request_compound__Text, ezmax_api_definition__full_signature_request_compound__Handwritten } ezmax_api_definition__full_signature_request_compound__e;

char* signature_request_compound_e_signature_preference_ToString(ezmax_api_definition__full_signature_request_compound__e e_signature_preference);

ezmax_api_definition__full_signature_request_compound__e signature_request_compound_e_signature_preference_FromString(char* e_signature_preference);



typedef struct signature_request_compound_t {
    int pki_signature_id; //numeric
    int fki_font_id; //numeric
    field_e_signature_preference_t *e_signature_preference; // custom
    char *t_signature_svg; // string
    char *t_signature_svginitials; // string

} signature_request_compound_t;

signature_request_compound_t *signature_request_compound_create(
    int pki_signature_id,
    int fki_font_id,
    field_e_signature_preference_t *e_signature_preference,
    char *t_signature_svg,
    char *t_signature_svginitials
);

void signature_request_compound_free(signature_request_compound_t *signature_request_compound);

signature_request_compound_t *signature_request_compound_parseFromJSON(cJSON *signature_request_compoundJSON);

cJSON *signature_request_compound_convertToJSON(signature_request_compound_t *signature_request_compound);

#endif /* _signature_request_compound_H_ */

