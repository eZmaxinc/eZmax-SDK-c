/*
 * ezsigntemplatesigner_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsigntemplatesigner
 */

#ifndef _ezsigntemplatesigner_create_object_v1_response_H_
#define _ezsigntemplatesigner_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_create_object_v1_response_t ezsigntemplatesigner_create_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatesigner_create_object_v1_response_all_of.h"
#include "ezsigntemplatesigner_create_object_v1_response_m_payload.h"



typedef struct ezsigntemplatesigner_create_object_v1_response_t {
    struct ezsigntemplatesigner_create_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatesigner_create_object_v1_response_t;

ezsigntemplatesigner_create_object_v1_response_t *ezsigntemplatesigner_create_object_v1_response_create(
    ezsigntemplatesigner_create_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatesigner_create_object_v1_response_free(ezsigntemplatesigner_create_object_v1_response_t *ezsigntemplatesigner_create_object_v1_response);

ezsigntemplatesigner_create_object_v1_response_t *ezsigntemplatesigner_create_object_v1_response_parseFromJSON(cJSON *ezsigntemplatesigner_create_object_v1_responseJSON);

cJSON *ezsigntemplatesigner_create_object_v1_response_convertToJSON(ezsigntemplatesigner_create_object_v1_response_t *ezsigntemplatesigner_create_object_v1_response);

#endif /* _ezsigntemplatesigner_create_object_v1_response_H_ */

