/*
 * ezsignsignature_create_object_v3_response.h
 *
 * Response for POST /3/object/ezsignsignature
 */

#ifndef _ezsignsignature_create_object_v3_response_H_
#define _ezsignsignature_create_object_v3_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_create_object_v3_response_t ezsignsignature_create_object_v3_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignsignature_create_object_v3_response_m_payload.h"



typedef struct ezsignsignature_create_object_v3_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignsignature_create_object_v3_response_m_payload_t *m_payload; //model

} ezsignsignature_create_object_v3_response_t;

ezsignsignature_create_object_v3_response_t *ezsignsignature_create_object_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignsignature_create_object_v3_response_m_payload_t *m_payload
);

void ezsignsignature_create_object_v3_response_free(ezsignsignature_create_object_v3_response_t *ezsignsignature_create_object_v3_response);

ezsignsignature_create_object_v3_response_t *ezsignsignature_create_object_v3_response_parseFromJSON(cJSON *ezsignsignature_create_object_v3_responseJSON);

cJSON *ezsignsignature_create_object_v3_response_convertToJSON(ezsignsignature_create_object_v3_response_t *ezsignsignature_create_object_v3_response);

#endif /* _ezsignsignature_create_object_v3_response_H_ */

