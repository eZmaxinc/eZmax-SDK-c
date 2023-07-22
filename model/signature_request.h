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




typedef struct signature_request_t {
    int pki_signature_id; //numeric
    char *t_signature_svg; // string

} signature_request_t;

signature_request_t *signature_request_create(
    int pki_signature_id,
    char *t_signature_svg
);

void signature_request_free(signature_request_t *signature_request);

signature_request_t *signature_request_parseFromJSON(cJSON *signature_requestJSON);

cJSON *signature_request_convertToJSON(signature_request_t *signature_request);

#endif /* _signature_request_H_ */

