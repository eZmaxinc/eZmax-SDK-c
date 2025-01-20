/*
 * ezsigndocument_get_object_v1_response.h
 *
 * Response for GET /1/object/ezsigndocument/{pkiEzsigndocumentID}
 */

#ifndef _ezsigndocument_get_object_v1_response_H_
#define _ezsigndocument_get_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_object_v1_response_t ezsigndocument_get_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigndocument_response_compound.h"



typedef struct ezsigndocument_get_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigndocument_response_compound_t *m_payload; //model

} ezsigndocument_get_object_v1_response_t;

ezsigndocument_get_object_v1_response_t *ezsigndocument_get_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigndocument_response_compound_t *m_payload
);

void ezsigndocument_get_object_v1_response_free(ezsigndocument_get_object_v1_response_t *ezsigndocument_get_object_v1_response);

ezsigndocument_get_object_v1_response_t *ezsigndocument_get_object_v1_response_parseFromJSON(cJSON *ezsigndocument_get_object_v1_responseJSON);

cJSON *ezsigndocument_get_object_v1_response_convertToJSON(ezsigndocument_get_object_v1_response_t *ezsigndocument_get_object_v1_response);

#endif /* _ezsigndocument_get_object_v1_response_H_ */

