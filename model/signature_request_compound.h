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




typedef struct signature_request_compound_t {
    int pki_signature_id; //numeric
    char *t_signature_svg; // string

} signature_request_compound_t;

signature_request_compound_t *signature_request_compound_create(
    int pki_signature_id,
    char *t_signature_svg
);

void signature_request_compound_free(signature_request_compound_t *signature_request_compound);

signature_request_compound_t *signature_request_compound_parseFromJSON(cJSON *signature_request_compoundJSON);

cJSON *signature_request_compound_convertToJSON(signature_request_compound_t *signature_request_compound);

#endif /* _signature_request_compound_H_ */

