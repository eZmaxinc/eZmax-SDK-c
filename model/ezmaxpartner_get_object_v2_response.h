/*
 * ezmaxpartner_get_object_v2_response.h
 *
 * Response for GET /1/object/ezmaxpartner/{pkiEzmaxpartnerID}
 */

#ifndef _ezmaxpartner_get_object_v2_response_H_
#define _ezmaxpartner_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxpartner_get_object_v2_response_t ezmaxpartner_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezmaxpartner_get_object_v2_response_m_payload.h"



typedef struct ezmaxpartner_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezmaxpartner_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxpartner_get_object_v2_response_t;

__attribute__((deprecated)) ezmaxpartner_get_object_v2_response_t *ezmaxpartner_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezmaxpartner_get_object_v2_response_m_payload_t *m_payload
);

void ezmaxpartner_get_object_v2_response_free(ezmaxpartner_get_object_v2_response_t *ezmaxpartner_get_object_v2_response);

ezmaxpartner_get_object_v2_response_t *ezmaxpartner_get_object_v2_response_parseFromJSON(cJSON *ezmaxpartner_get_object_v2_responseJSON);

cJSON *ezmaxpartner_get_object_v2_response_convertToJSON(ezmaxpartner_get_object_v2_response_t *ezmaxpartner_get_object_v2_response);

#endif /* _ezmaxpartner_get_object_v2_response_H_ */

