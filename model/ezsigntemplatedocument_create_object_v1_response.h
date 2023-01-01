/*
 * ezsigntemplatedocument_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsigntemplatedocument
 */

#ifndef _ezsigntemplatedocument_create_object_v1_response_H_
#define _ezsigntemplatedocument_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_create_object_v1_response_t ezsigntemplatedocument_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigntemplatedocument_create_object_v1_response_m_payload.h"



typedef struct ezsigntemplatedocument_create_object_v1_response_t {
    struct ezsigntemplatedocument_create_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigntemplatedocument_create_object_v1_response_t;

ezsigntemplatedocument_create_object_v1_response_t *ezsigntemplatedocument_create_object_v1_response_create(
    ezsigntemplatedocument_create_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatedocument_create_object_v1_response_free(ezsigntemplatedocument_create_object_v1_response_t *ezsigntemplatedocument_create_object_v1_response);

ezsigntemplatedocument_create_object_v1_response_t *ezsigntemplatedocument_create_object_v1_response_parseFromJSON(cJSON *ezsigntemplatedocument_create_object_v1_responseJSON);

cJSON *ezsigntemplatedocument_create_object_v1_response_convertToJSON(ezsigntemplatedocument_create_object_v1_response_t *ezsigntemplatedocument_create_object_v1_response);

#endif /* _ezsigntemplatedocument_create_object_v1_response_H_ */

