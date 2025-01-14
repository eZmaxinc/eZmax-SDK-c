/*
 * ezsignfoldertype_get_object_v4_response.h
 *
 * Response for GET /4/object/ezsignfoldertype/{pkiEzsignfoldertypeID}
 */

#ifndef _ezsignfoldertype_get_object_v4_response_H_
#define _ezsignfoldertype_get_object_v4_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_get_object_v4_response_t ezsignfoldertype_get_object_v4_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignfoldertype_get_object_v4_response_m_payload.h"



typedef struct ezsignfoldertype_get_object_v4_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignfoldertype_get_object_v4_response_m_payload_t *m_payload; //model

} ezsignfoldertype_get_object_v4_response_t;

ezsignfoldertype_get_object_v4_response_t *ezsignfoldertype_get_object_v4_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignfoldertype_get_object_v4_response_m_payload_t *m_payload
);

void ezsignfoldertype_get_object_v4_response_free(ezsignfoldertype_get_object_v4_response_t *ezsignfoldertype_get_object_v4_response);

ezsignfoldertype_get_object_v4_response_t *ezsignfoldertype_get_object_v4_response_parseFromJSON(cJSON *ezsignfoldertype_get_object_v4_responseJSON);

cJSON *ezsignfoldertype_get_object_v4_response_convertToJSON(ezsignfoldertype_get_object_v4_response_t *ezsignfoldertype_get_object_v4_response);

#endif /* _ezsignfoldertype_get_object_v4_response_H_ */

