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
    char *s_signature_url; // string

} signature_response_t;

signature_response_t *signature_response_create(
    int pki_signature_id,
    char *s_signature_url
);

void signature_response_free(signature_response_t *signature_response);

signature_response_t *signature_response_parseFromJSON(cJSON *signature_responseJSON);

cJSON *signature_response_convertToJSON(signature_response_t *signature_response);

#endif /* _signature_response_H_ */

