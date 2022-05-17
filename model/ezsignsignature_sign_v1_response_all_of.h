/*
 * ezsignsignature_sign_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsignsignature_sign_v1_response_all_of_H_
#define _ezsignsignature_sign_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_sign_v1_response_all_of_t ezsignsignature_sign_v1_response_all_of_t;

#include "object.h"



typedef struct ezsignsignature_sign_v1_response_all_of_t {
    object_t *m_payload; //object

} ezsignsignature_sign_v1_response_all_of_t;

ezsignsignature_sign_v1_response_all_of_t *ezsignsignature_sign_v1_response_all_of_create(
    object_t *m_payload
);

void ezsignsignature_sign_v1_response_all_of_free(ezsignsignature_sign_v1_response_all_of_t *ezsignsignature_sign_v1_response_all_of);

ezsignsignature_sign_v1_response_all_of_t *ezsignsignature_sign_v1_response_all_of_parseFromJSON(cJSON *ezsignsignature_sign_v1_response_all_ofJSON);

cJSON *ezsignsignature_sign_v1_response_all_of_convertToJSON(ezsignsignature_sign_v1_response_all_of_t *ezsignsignature_sign_v1_response_all_of);

#endif /* _ezsignsignature_sign_v1_response_all_of_H_ */

