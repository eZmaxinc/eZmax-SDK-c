/*
 * signature_response_compound.h
 *
 * A Signature Object
 */

#ifndef _signature_response_compound_H_
#define _signature_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_response_compound_t signature_response_compound_t;




typedef struct signature_response_compound_t {
    int pki_signature_id; //numeric
    char *s_signature_url; // string

} signature_response_compound_t;

signature_response_compound_t *signature_response_compound_create(
    int pki_signature_id,
    char *s_signature_url
);

void signature_response_compound_free(signature_response_compound_t *signature_response_compound);

signature_response_compound_t *signature_response_compound_parseFromJSON(cJSON *signature_response_compoundJSON);

cJSON *signature_response_compound_convertToJSON(signature_response_compound_t *signature_response_compound);

#endif /* _signature_response_compound_H_ */

