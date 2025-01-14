/*
 * supply_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/supply/{pkiSupplyID}
 */

#ifndef _supply_get_object_v2_response_m_payload_H_
#define _supply_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supply_get_object_v2_response_m_payload_t supply_get_object_v2_response_m_payload_t;

#include "supply_response_compound.h"



typedef struct supply_get_object_v2_response_m_payload_t {
    struct supply_response_compound_t *obj_supply; //model

} supply_get_object_v2_response_m_payload_t;

supply_get_object_v2_response_m_payload_t *supply_get_object_v2_response_m_payload_create(
    supply_response_compound_t *obj_supply
);

void supply_get_object_v2_response_m_payload_free(supply_get_object_v2_response_m_payload_t *supply_get_object_v2_response_m_payload);

supply_get_object_v2_response_m_payload_t *supply_get_object_v2_response_m_payload_parseFromJSON(cJSON *supply_get_object_v2_response_m_payloadJSON);

cJSON *supply_get_object_v2_response_m_payload_convertToJSON(supply_get_object_v2_response_m_payload_t *supply_get_object_v2_response_m_payload);

#endif /* _supply_get_object_v2_response_m_payload_H_ */

