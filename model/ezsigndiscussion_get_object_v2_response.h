/*
 * ezsigndiscussion_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsigndiscussion/{pkiEzsigndiscussionID}
 */

#ifndef _ezsigndiscussion_get_object_v2_response_H_
#define _ezsigndiscussion_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndiscussion_get_object_v2_response_t ezsigndiscussion_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsigndiscussion_get_object_v2_response_m_payload.h"



typedef struct ezsigndiscussion_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsigndiscussion_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndiscussion_get_object_v2_response_t;

__attribute__((deprecated)) ezsigndiscussion_get_object_v2_response_t *ezsigndiscussion_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigndiscussion_get_object_v2_response_m_payload_t *m_payload
);

void ezsigndiscussion_get_object_v2_response_free(ezsigndiscussion_get_object_v2_response_t *ezsigndiscussion_get_object_v2_response);

ezsigndiscussion_get_object_v2_response_t *ezsigndiscussion_get_object_v2_response_parseFromJSON(cJSON *ezsigndiscussion_get_object_v2_responseJSON);

cJSON *ezsigndiscussion_get_object_v2_response_convertToJSON(ezsigndiscussion_get_object_v2_response_t *ezsigndiscussion_get_object_v2_response);

#endif /* _ezsigndiscussion_get_object_v2_response_H_ */

