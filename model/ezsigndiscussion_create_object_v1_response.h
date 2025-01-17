/*
 * ezsigndiscussion_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsigndiscussion
 */

#ifndef _ezsigndiscussion_create_object_v1_response_H_
#define _ezsigndiscussion_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndiscussion_create_object_v1_response_t ezsigndiscussion_create_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigndiscussion_create_object_v1_response_m_payload.h"



typedef struct ezsigndiscussion_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigndiscussion_create_object_v1_response_m_payload_t *m_payload; //model

} ezsigndiscussion_create_object_v1_response_t;

ezsigndiscussion_create_object_v1_response_t *ezsigndiscussion_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigndiscussion_create_object_v1_response_m_payload_t *m_payload
);

void ezsigndiscussion_create_object_v1_response_free(ezsigndiscussion_create_object_v1_response_t *ezsigndiscussion_create_object_v1_response);

ezsigndiscussion_create_object_v1_response_t *ezsigndiscussion_create_object_v1_response_parseFromJSON(cJSON *ezsigndiscussion_create_object_v1_responseJSON);

cJSON *ezsigndiscussion_create_object_v1_response_convertToJSON(ezsigndiscussion_create_object_v1_response_t *ezsigndiscussion_create_object_v1_response);

#endif /* _ezsigndiscussion_create_object_v1_response_H_ */

