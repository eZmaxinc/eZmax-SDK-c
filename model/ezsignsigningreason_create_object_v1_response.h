/*
 * ezsignsigningreason_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsignsigningreason
 */

#ifndef _ezsignsigningreason_create_object_v1_response_H_
#define _ezsignsigningreason_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_create_object_v1_response_t ezsignsigningreason_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignsigningreason_create_object_v1_response_m_payload.h"



typedef struct ezsignsigningreason_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignsigningreason_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsigningreason_create_object_v1_response_t;

__attribute__((deprecated)) ezsignsigningreason_create_object_v1_response_t *ezsignsigningreason_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignsigningreason_create_object_v1_response_m_payload_t *m_payload
);

void ezsignsigningreason_create_object_v1_response_free(ezsignsigningreason_create_object_v1_response_t *ezsignsigningreason_create_object_v1_response);

ezsignsigningreason_create_object_v1_response_t *ezsignsigningreason_create_object_v1_response_parseFromJSON(cJSON *ezsignsigningreason_create_object_v1_responseJSON);

cJSON *ezsignsigningreason_create_object_v1_response_convertToJSON(ezsignsigningreason_create_object_v1_response_t *ezsignsigningreason_create_object_v1_response);

#endif /* _ezsignsigningreason_create_object_v1_response_H_ */

