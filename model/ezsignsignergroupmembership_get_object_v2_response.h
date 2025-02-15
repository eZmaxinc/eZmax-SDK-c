/*
 * ezsignsignergroupmembership_get_object_v2_response.h
 *
 * Response for GET /2/object/ezsignsignergroupmembership/{pkiEzsignsignergroupmembershipID}
 */

#ifndef _ezsignsignergroupmembership_get_object_v2_response_H_
#define _ezsignsignergroupmembership_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroupmembership_get_object_v2_response_t ezsignsignergroupmembership_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignsignergroupmembership_get_object_v2_response_m_payload.h"



typedef struct ezsignsignergroupmembership_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignsignergroupmembership_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignergroupmembership_get_object_v2_response_t;

__attribute__((deprecated)) ezsignsignergroupmembership_get_object_v2_response_t *ezsignsignergroupmembership_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignsignergroupmembership_get_object_v2_response_m_payload_t *m_payload
);

void ezsignsignergroupmembership_get_object_v2_response_free(ezsignsignergroupmembership_get_object_v2_response_t *ezsignsignergroupmembership_get_object_v2_response);

ezsignsignergroupmembership_get_object_v2_response_t *ezsignsignergroupmembership_get_object_v2_response_parseFromJSON(cJSON *ezsignsignergroupmembership_get_object_v2_responseJSON);

cJSON *ezsignsignergroupmembership_get_object_v2_response_convertToJSON(ezsignsignergroupmembership_get_object_v2_response_t *ezsignsignergroupmembership_get_object_v2_response);

#endif /* _ezsignsignergroupmembership_get_object_v2_response_H_ */

