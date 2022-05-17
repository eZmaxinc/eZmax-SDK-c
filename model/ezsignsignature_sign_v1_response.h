/*
 * ezsignsignature_sign_v1_response.h
 *
 * Response for POST /1/object/ezsignsignature/{pkiEzsignsignatureID}/sign
 */

#ifndef _ezsignsignature_sign_v1_response_H_
#define _ezsignsignature_sign_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_sign_v1_response_t ezsignsignature_sign_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignsignature_sign_v1_response_all_of.h"
#include "object.h"



typedef struct ezsignsignature_sign_v1_response_t {
    object_t *m_payload; //object
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignsignature_sign_v1_response_t;

ezsignsignature_sign_v1_response_t *ezsignsignature_sign_v1_response_create(
    object_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignsignature_sign_v1_response_free(ezsignsignature_sign_v1_response_t *ezsignsignature_sign_v1_response);

ezsignsignature_sign_v1_response_t *ezsignsignature_sign_v1_response_parseFromJSON(cJSON *ezsignsignature_sign_v1_responseJSON);

cJSON *ezsignsignature_sign_v1_response_convertToJSON(ezsignsignature_sign_v1_response_t *ezsignsignature_sign_v1_response);

#endif /* _ezsignsignature_sign_v1_response_H_ */

