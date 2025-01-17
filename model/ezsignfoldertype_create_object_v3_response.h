/*
 * ezsignfoldertype_create_object_v3_response.h
 *
 * Response for POST /3/object/ezsignfoldertype
 */

#ifndef _ezsignfoldertype_create_object_v3_response_H_
#define _ezsignfoldertype_create_object_v3_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_create_object_v3_response_t ezsignfoldertype_create_object_v3_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignfoldertype_create_object_v3_response_m_payload.h"



typedef struct ezsignfoldertype_create_object_v3_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignfoldertype_create_object_v3_response_m_payload_t *m_payload; //model

} ezsignfoldertype_create_object_v3_response_t;

ezsignfoldertype_create_object_v3_response_t *ezsignfoldertype_create_object_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignfoldertype_create_object_v3_response_m_payload_t *m_payload
);

void ezsignfoldertype_create_object_v3_response_free(ezsignfoldertype_create_object_v3_response_t *ezsignfoldertype_create_object_v3_response);

ezsignfoldertype_create_object_v3_response_t *ezsignfoldertype_create_object_v3_response_parseFromJSON(cJSON *ezsignfoldertype_create_object_v3_responseJSON);

cJSON *ezsignfoldertype_create_object_v3_response_convertToJSON(ezsignfoldertype_create_object_v3_response_t *ezsignfoldertype_create_object_v3_response);

#endif /* _ezsignfoldertype_create_object_v3_response_H_ */

