/*
 * signature_response.h
 *
 * A Signature Object
 */

#ifndef _signature_response_H_
#define _signature_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_response_t signature_response_t;




typedef struct signature_response_t {
    int pki_signature_id; //numeric
    int fki_font_id; //numeric
    char *s_signature_url; // string
    char *s_signature_urlinitials; // string

    int _library_owned; // Is the library responsible for freeing this object?
} signature_response_t;

__attribute__((deprecated)) signature_response_t *signature_response_create(
    int pki_signature_id,
    int fki_font_id,
    char *s_signature_url,
    char *s_signature_urlinitials
);

void signature_response_free(signature_response_t *signature_response);

signature_response_t *signature_response_parseFromJSON(cJSON *signature_responseJSON);

cJSON *signature_response_convertToJSON(signature_response_t *signature_response);

#endif /* _signature_response_H_ */

