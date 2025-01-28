/*
 * ezsigndocument_create_object_v2_response.h
 *
 * Response for POST /2/object/ezsigndocument
 */

#ifndef _ezsigndocument_create_object_v2_response_H_
#define _ezsigndocument_create_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_create_object_v2_response_t ezsigndocument_create_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigndocument_create_object_v2_response_m_payload.h"



typedef struct ezsigndocument_create_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigndocument_create_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_create_object_v2_response_t;

__attribute__((deprecated)) ezsigndocument_create_object_v2_response_t *ezsigndocument_create_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigndocument_create_object_v2_response_m_payload_t *m_payload
);

void ezsigndocument_create_object_v2_response_free(ezsigndocument_create_object_v2_response_t *ezsigndocument_create_object_v2_response);

ezsigndocument_create_object_v2_response_t *ezsigndocument_create_object_v2_response_parseFromJSON(cJSON *ezsigndocument_create_object_v2_responseJSON);

cJSON *ezsigndocument_create_object_v2_response_convertToJSON(ezsigndocument_create_object_v2_response_t *ezsigndocument_create_object_v2_response);

#endif /* _ezsigndocument_create_object_v2_response_H_ */

