/*
 * systemconfiguration_get_object_v2_response.h
 *
 * Response for GET /2/object/systemconfiguration/{pkiSystemconfigurationID}
 */

#ifndef _systemconfiguration_get_object_v2_response_H_
#define _systemconfiguration_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct systemconfiguration_get_object_v2_response_t systemconfiguration_get_object_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "systemconfiguration_get_object_v2_response_m_payload.h"



typedef struct systemconfiguration_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct systemconfiguration_get_object_v2_response_m_payload_t *m_payload; //model

} systemconfiguration_get_object_v2_response_t;

systemconfiguration_get_object_v2_response_t *systemconfiguration_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    systemconfiguration_get_object_v2_response_m_payload_t *m_payload
);

void systemconfiguration_get_object_v2_response_free(systemconfiguration_get_object_v2_response_t *systemconfiguration_get_object_v2_response);

systemconfiguration_get_object_v2_response_t *systemconfiguration_get_object_v2_response_parseFromJSON(cJSON *systemconfiguration_get_object_v2_responseJSON);

cJSON *systemconfiguration_get_object_v2_response_convertToJSON(systemconfiguration_get_object_v2_response_t *systemconfiguration_get_object_v2_response);

#endif /* _systemconfiguration_get_object_v2_response_H_ */

