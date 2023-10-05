/*
 * ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload.h
 *
 * Response for GET /1/object/ezsignsignergroup/{pkiEzsignsignergroupID}/getEzsignsignergroupmemberships
 */

#ifndef _ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_H_
#define _ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_t ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_t;

#include "ezsignsignergroupmembership_response_compound.h"



typedef struct ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_t {
    list_t *a_obj_ezsignsignergroupmembership; //nonprimitive container

} ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_t;

ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_t *ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_create(
    list_t *a_obj_ezsignsignergroupmembership
);

void ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_free(ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_t *ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload);

ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_t *ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_parseFromJSON(cJSON *ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payloadJSON);

cJSON *ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_convertToJSON(ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_t *ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload);

#endif /* _ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_m_payload_H_ */
