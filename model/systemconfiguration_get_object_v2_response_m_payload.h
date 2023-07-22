/*
 * systemconfiguration_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/systemconfiguration/{pkiSystemconfigurationID}
 */

#ifndef _systemconfiguration_get_object_v2_response_m_payload_H_
#define _systemconfiguration_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct systemconfiguration_get_object_v2_response_m_payload_t systemconfiguration_get_object_v2_response_m_payload_t;

#include "systemconfiguration_response_compound.h"



typedef struct systemconfiguration_get_object_v2_response_m_payload_t {
    struct systemconfiguration_response_compound_t *obj_systemconfiguration; //model

} systemconfiguration_get_object_v2_response_m_payload_t;

systemconfiguration_get_object_v2_response_m_payload_t *systemconfiguration_get_object_v2_response_m_payload_create(
    systemconfiguration_response_compound_t *obj_systemconfiguration
);

void systemconfiguration_get_object_v2_response_m_payload_free(systemconfiguration_get_object_v2_response_m_payload_t *systemconfiguration_get_object_v2_response_m_payload);

systemconfiguration_get_object_v2_response_m_payload_t *systemconfiguration_get_object_v2_response_m_payload_parseFromJSON(cJSON *systemconfiguration_get_object_v2_response_m_payloadJSON);

cJSON *systemconfiguration_get_object_v2_response_m_payload_convertToJSON(systemconfiguration_get_object_v2_response_m_payload_t *systemconfiguration_get_object_v2_response_m_payload);

#endif /* _systemconfiguration_get_object_v2_response_m_payload_H_ */

