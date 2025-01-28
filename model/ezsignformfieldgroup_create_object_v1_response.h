/*
 * ezsignformfieldgroup_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsignformfieldgroup
 */

#ifndef _ezsignformfieldgroup_create_object_v1_response_H_
#define _ezsignformfieldgroup_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignformfieldgroup_create_object_v1_response_t ezsignformfieldgroup_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignformfieldgroup_create_object_v1_response_m_payload.h"



typedef struct ezsignformfieldgroup_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignformfieldgroup_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignformfieldgroup_create_object_v1_response_t;

__attribute__((deprecated)) ezsignformfieldgroup_create_object_v1_response_t *ezsignformfieldgroup_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignformfieldgroup_create_object_v1_response_m_payload_t *m_payload
);

void ezsignformfieldgroup_create_object_v1_response_free(ezsignformfieldgroup_create_object_v1_response_t *ezsignformfieldgroup_create_object_v1_response);

ezsignformfieldgroup_create_object_v1_response_t *ezsignformfieldgroup_create_object_v1_response_parseFromJSON(cJSON *ezsignformfieldgroup_create_object_v1_responseJSON);

cJSON *ezsignformfieldgroup_create_object_v1_response_convertToJSON(ezsignformfieldgroup_create_object_v1_response_t *ezsignformfieldgroup_create_object_v1_response);

#endif /* _ezsignformfieldgroup_create_object_v1_response_H_ */

