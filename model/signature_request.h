/*
 * signature_request.h
 *
 * A Signature Object
 */

#ifndef _signature_request_H_
#define _signature_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_request_t signature_request_t;

#include "field_e_signature_preference.h"

// Enum  for signature_request

typedef enum  { ezmax_api_definition__full_signature_request__NULL = 0, ezmax_api_definition__full_signature_request__Text, ezmax_api_definition__full_signature_request__Handwritten } ezmax_api_definition__full_signature_request__e;

char* signature_request_e_signature_preference_ToString(ezmax_api_definition__full_signature_request__e e_signature_preference);

ezmax_api_definition__full_signature_request__e signature_request_e_signature_preference_FromString(char* e_signature_preference);



typedef struct signature_request_t {
    int pki_signature_id; //numeric
    int fki_font_id; //numeric
    field_e_signature_preference_t *e_signature_preference; // custom
    char *t_signature_svg; // string
    char *t_signature_svginitials; // string

} signature_request_t;

signature_request_t *signature_request_create(
    int pki_signature_id,
    int fki_font_id,
    field_e_signature_preference_t *e_signature_preference,
    char *t_signature_svg,
    char *t_signature_svginitials
);

void signature_request_free(signature_request_t *signature_request);

signature_request_t *signature_request_parseFromJSON(cJSON *signature_requestJSON);

cJSON *signature_request_convertToJSON(signature_request_t *signature_request);

#endif /* _signature_request_H_ */

