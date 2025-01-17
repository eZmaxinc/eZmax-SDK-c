/*
 * ezsignuser_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsignuser/{pkiEzsignuserID}
 */

#ifndef _ezsignuser_get_object_v2_response_H_
#define _ezsignuser_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignuser_get_object_v2_response_t ezsignuser_get_object_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignuser_get_object_v2_response_m_payload.h"



typedef struct ezsignuser_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignuser_get_object_v2_response_m_payload_t *m_payload; //model

} ezsignuser_get_object_v2_response_t;

ezsignuser_get_object_v2_response_t *ezsignuser_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignuser_get_object_v2_response_m_payload_t *m_payload
);

void ezsignuser_get_object_v2_response_free(ezsignuser_get_object_v2_response_t *ezsignuser_get_object_v2_response);

ezsignuser_get_object_v2_response_t *ezsignuser_get_object_v2_response_parseFromJSON(cJSON *ezsignuser_get_object_v2_responseJSON);

cJSON *ezsignuser_get_object_v2_response_convertToJSON(ezsignuser_get_object_v2_response_t *ezsignuser_get_object_v2_response);

#endif /* _ezsignuser_get_object_v2_response_H_ */

