/*
 * ezsignsignature_create_object_v2_response.h
 *
 * Response for POST /2/object/ezsignsignature
 */

#ifndef _ezsignsignature_create_object_v2_response_H_
#define _ezsignsignature_create_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_create_object_v2_response_t ezsignsignature_create_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignsignature_create_object_v2_response_m_payload.h"



typedef struct ezsignsignature_create_object_v2_response_t {
    struct ezsignsignature_create_object_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignsignature_create_object_v2_response_t;

ezsignsignature_create_object_v2_response_t *ezsignsignature_create_object_v2_response_create(
    ezsignsignature_create_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignsignature_create_object_v2_response_free(ezsignsignature_create_object_v2_response_t *ezsignsignature_create_object_v2_response);

ezsignsignature_create_object_v2_response_t *ezsignsignature_create_object_v2_response_parseFromJSON(cJSON *ezsignsignature_create_object_v2_responseJSON);

cJSON *ezsignsignature_create_object_v2_response_convertToJSON(ezsignsignature_create_object_v2_response_t *ezsignsignature_create_object_v2_response);

#endif /* _ezsignsignature_create_object_v2_response_H_ */

