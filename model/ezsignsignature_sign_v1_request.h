/*
 * ezsignsignature_sign_v1_request.h
 *
 * Request for POST /1/object/ezsignsignature/{pkiEzsignsignatureID}/sign
 */

#ifndef _ezsignsignature_sign_v1_request_H_
#define _ezsignsignature_sign_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_sign_v1_request_t ezsignsignature_sign_v1_request_t;




typedef struct ezsignsignature_sign_v1_request_t {
    char *s_value; // string
    int b_is_automatic; //boolean

} ezsignsignature_sign_v1_request_t;

ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request_create(
    char *s_value,
    int b_is_automatic
);

void ezsignsignature_sign_v1_request_free(ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request);

ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request_parseFromJSON(cJSON *ezsignsignature_sign_v1_requestJSON);

cJSON *ezsignsignature_sign_v1_request_convertToJSON(ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request);

#endif /* _ezsignsignature_sign_v1_request_H_ */

