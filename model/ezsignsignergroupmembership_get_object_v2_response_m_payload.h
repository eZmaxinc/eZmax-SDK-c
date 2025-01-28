/*
 * ezsignsignergroupmembership_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsignsignergroupmembership/{pkiEzsignsignergroupmembershipID}
 */

#ifndef _ezsignsignergroupmembership_get_object_v2_response_m_payload_H_
#define _ezsignsignergroupmembership_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroupmembership_get_object_v2_response_m_payload_t ezsignsignergroupmembership_get_object_v2_response_m_payload_t;

#include "ezsignsignergroupmembership_response_compound.h"



typedef struct ezsignsignergroupmembership_get_object_v2_response_m_payload_t {
    struct ezsignsignergroupmembership_response_compound_t *obj_ezsignsignergroupmembership; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignergroupmembership_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsignsignergroupmembership_get_object_v2_response_m_payload_t *ezsignsignergroupmembership_get_object_v2_response_m_payload_create(
    ezsignsignergroupmembership_response_compound_t *obj_ezsignsignergroupmembership
);

void ezsignsignergroupmembership_get_object_v2_response_m_payload_free(ezsignsignergroupmembership_get_object_v2_response_m_payload_t *ezsignsignergroupmembership_get_object_v2_response_m_payload);

ezsignsignergroupmembership_get_object_v2_response_m_payload_t *ezsignsignergroupmembership_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignsignergroupmembership_get_object_v2_response_m_payloadJSON);

cJSON *ezsignsignergroupmembership_get_object_v2_response_m_payload_convertToJSON(ezsignsignergroupmembership_get_object_v2_response_m_payload_t *ezsignsignergroupmembership_get_object_v2_response_m_payload);

#endif /* _ezsignsignergroupmembership_get_object_v2_response_m_payload_H_ */

