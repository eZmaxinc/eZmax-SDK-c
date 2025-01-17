/*
 * ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response.h
 *
 * Response for GET /1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/getEzsignsignergroupmemberships
 */

#ifndef _ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_H_
#define _ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload.h"



typedef struct ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_t *m_payload; //model

} ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t;

ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t *ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_t *m_payload
);

void ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_free(ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t *ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response);

ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t *ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_parseFromJSON(cJSON *ezsignsignergroup_get_ezsignsignergroupmemberships_v1_responseJSON);

cJSON *ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_convertToJSON(ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t *ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response);

#endif /* _ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_H_ */

