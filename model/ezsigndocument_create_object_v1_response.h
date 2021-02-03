/*
 * ezsigndocument_create_object_v1_response.h
 *
 * Response for the /1/object/ezsigndocument/createObject API Request
 */

#ifndef _ezsigndocument_create_object_v1_response_H_
#define _ezsigndocument_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_create_object_v1_response_t ezsigndocument_create_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigndocument_create_object_v1_response_m_payload.h"



typedef struct ezsigndocument_create_object_v1_response_t {
    struct ezsigndocument_create_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsigndocument_create_object_v1_response_t;

ezsigndocument_create_object_v1_response_t *ezsigndocument_create_object_v1_response_create(
    ezsigndocument_create_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigndocument_create_object_v1_response_free(ezsigndocument_create_object_v1_response_t *ezsigndocument_create_object_v1_response);

ezsigndocument_create_object_v1_response_t *ezsigndocument_create_object_v1_response_parseFromJSON(cJSON *ezsigndocument_create_object_v1_responseJSON);

cJSON *ezsigndocument_create_object_v1_response_convertToJSON(ezsigndocument_create_object_v1_response_t *ezsigndocument_create_object_v1_response);

#endif /* _ezsigndocument_create_object_v1_response_H_ */

