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



typedef struct signature_request_t {
    int pki_signature_id; //numeric
    int fki_font_id; //numeric
    ezmax_api_definition__full_field_e_signature_preference__e e_signature_preference; //referenced enum
    char *t_signature_svg; // string
    char *t_signature_svginitials; // string

    int _library_owned; // Is the library responsible for freeing this object?
} signature_request_t;

__attribute__((deprecated)) signature_request_t *signature_request_create(
    int pki_signature_id,
    int fki_font_id,
    ezmax_api_definition__full_field_e_signature_preference__e e_signature_preference,
    char *t_signature_svg,
    char *t_signature_svginitials
);

void signature_request_free(signature_request_t *signature_request);

signature_request_t *signature_request_parseFromJSON(cJSON *signature_requestJSON);

cJSON *signature_request_convertToJSON(signature_request_t *signature_request);

#endif /* _signature_request_H_ */

