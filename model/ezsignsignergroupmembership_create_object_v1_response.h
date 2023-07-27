/*
 * ezsignsignergroupmembership_create_object_v1_response.h
 *
 * Response for POST /1/object/ezsignsignergroupmembership
 */

#ifndef _ezsignsignergroupmembership_create_object_v1_response_H_
#define _ezsignsignergroupmembership_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroupmembership_create_object_v1_response_t ezsignsignergroupmembership_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignsignergroupmembership_create_object_v1_response_m_payload.h"



typedef struct ezsignsignergroupmembership_create_object_v1_response_t {
    struct ezsignsignergroupmembership_create_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} ezsignsignergroupmembership_create_object_v1_response_t;

ezsignsignergroupmembership_create_object_v1_response_t *ezsignsignergroupmembership_create_object_v1_response_create(
    ezsignsignergroupmembership_create_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignsignergroupmembership_create_object_v1_response_free(ezsignsignergroupmembership_create_object_v1_response_t *ezsignsignergroupmembership_create_object_v1_response);

ezsignsignergroupmembership_create_object_v1_response_t *ezsignsignergroupmembership_create_object_v1_response_parseFromJSON(cJSON *ezsignsignergroupmembership_create_object_v1_responseJSON);

cJSON *ezsignsignergroupmembership_create_object_v1_response_convertToJSON(ezsignsignergroupmembership_create_object_v1_response_t *ezsignsignergroupmembership_create_object_v1_response);

#endif /* _ezsignsignergroupmembership_create_object_v1_response_H_ */

