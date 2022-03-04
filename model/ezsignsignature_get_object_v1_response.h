/*
 * ezsignsignature_get_object_v1_response.h
 *
 * Response for the /1/object/ezsignsignature/getObject API Request
 */

#ifndef _ezsignsignature_get_object_v1_response_H_
#define _ezsignsignature_get_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_get_object_v1_response_t ezsignsignature_get_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignsignature_get_object_v1_response_all_of.h"
#include "ezsignsignature_get_object_v1_response_m_payload.h"



typedef struct ezsignsignature_get_object_v1_response_t {
    struct ezsignsignature_get_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignsignature_get_object_v1_response_t;

ezsignsignature_get_object_v1_response_t *ezsignsignature_get_object_v1_response_create(
    ezsignsignature_get_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignsignature_get_object_v1_response_free(ezsignsignature_get_object_v1_response_t *ezsignsignature_get_object_v1_response);

ezsignsignature_get_object_v1_response_t *ezsignsignature_get_object_v1_response_parseFromJSON(cJSON *ezsignsignature_get_object_v1_responseJSON);

cJSON *ezsignsignature_get_object_v1_response_convertToJSON(ezsignsignature_get_object_v1_response_t *ezsignsignature_get_object_v1_response);

#endif /* _ezsignsignature_get_object_v1_response_H_ */

