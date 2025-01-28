/*
 * ezsignsignergroup_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsignsignergroup/{pkiEzsignsignergroupID}
 */

#ifndef _ezsignsignergroup_get_object_v2_response_m_payload_H_
#define _ezsignsignergroup_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroup_get_object_v2_response_m_payload_t ezsignsignergroup_get_object_v2_response_m_payload_t;

#include "ezsignsignergroup_response_compound.h"



typedef struct ezsignsignergroup_get_object_v2_response_m_payload_t {
    struct ezsignsignergroup_response_compound_t *obj_ezsignsignergroup; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignergroup_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsignsignergroup_get_object_v2_response_m_payload_t *ezsignsignergroup_get_object_v2_response_m_payload_create(
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup
);

void ezsignsignergroup_get_object_v2_response_m_payload_free(ezsignsignergroup_get_object_v2_response_m_payload_t *ezsignsignergroup_get_object_v2_response_m_payload);

ezsignsignergroup_get_object_v2_response_m_payload_t *ezsignsignergroup_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsignsignergroup_get_object_v2_response_m_payloadJSON);

cJSON *ezsignsignergroup_get_object_v2_response_m_payload_convertToJSON(ezsignsignergroup_get_object_v2_response_m_payload_t *ezsignsignergroup_get_object_v2_response_m_payload);

#endif /* _ezsignsignergroup_get_object_v2_response_m_payload_H_ */

