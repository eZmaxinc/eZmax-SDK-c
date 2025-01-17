/*
 * ezsigndocument_create_object_v3_response.h
 *
 * Response for POST /3/object/ezsigndocument
 */

#ifndef _ezsigndocument_create_object_v3_response_H_
#define _ezsigndocument_create_object_v3_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_create_object_v3_response_t ezsigndocument_create_object_v3_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigndocument_create_object_v3_response_m_payload.h"



typedef struct ezsigndocument_create_object_v3_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigndocument_create_object_v3_response_m_payload_t *m_payload; //model

} ezsigndocument_create_object_v3_response_t;

ezsigndocument_create_object_v3_response_t *ezsigndocument_create_object_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigndocument_create_object_v3_response_m_payload_t *m_payload
);

void ezsigndocument_create_object_v3_response_free(ezsigndocument_create_object_v3_response_t *ezsigndocument_create_object_v3_response);

ezsigndocument_create_object_v3_response_t *ezsigndocument_create_object_v3_response_parseFromJSON(cJSON *ezsigndocument_create_object_v3_responseJSON);

cJSON *ezsigndocument_create_object_v3_response_convertToJSON(ezsigndocument_create_object_v3_response_t *ezsigndocument_create_object_v3_response);

#endif /* _ezsigndocument_create_object_v3_response_H_ */

