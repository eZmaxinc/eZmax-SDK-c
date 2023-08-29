/*
 * ezsigntemplatesignature_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsigntemplatesignature
 */

#ifndef _ezsigntemplatesignature_create_object_v1_response_H_
#define _ezsigntemplatesignature_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_create_object_v1_response_t ezsigntemplatesignature_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatesignature_create_object_v1_response_m_payload.h"



typedef struct ezsigntemplatesignature_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigntemplatesignature_create_object_v1_response_m_payload_t *m_payload; //model

} ezsigntemplatesignature_create_object_v1_response_t;

ezsigntemplatesignature_create_object_v1_response_t *ezsigntemplatesignature_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatesignature_create_object_v1_response_m_payload_t *m_payload
);

void ezsigntemplatesignature_create_object_v1_response_free(ezsigntemplatesignature_create_object_v1_response_t *ezsigntemplatesignature_create_object_v1_response);

ezsigntemplatesignature_create_object_v1_response_t *ezsigntemplatesignature_create_object_v1_response_parseFromJSON(cJSON *ezsigntemplatesignature_create_object_v1_responseJSON);

cJSON *ezsigntemplatesignature_create_object_v1_response_convertToJSON(ezsigntemplatesignature_create_object_v1_response_t *ezsigntemplatesignature_create_object_v1_response);

#endif /* _ezsigntemplatesignature_create_object_v1_response_H_ */

