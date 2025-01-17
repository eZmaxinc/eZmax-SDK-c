/*
 * systemconfiguration_edit_object_v1_response.h
 *
 * Response for PUT /1/object/systemconfiguration/{pkiSystemconfigurationID}
 */

#ifndef _systemconfiguration_edit_object_v1_response_H_
#define _systemconfiguration_edit_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct systemconfiguration_edit_object_v1_response_t systemconfiguration_edit_object_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct systemconfiguration_edit_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} systemconfiguration_edit_object_v1_response_t;

systemconfiguration_edit_object_v1_response_t *systemconfiguration_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void systemconfiguration_edit_object_v1_response_free(systemconfiguration_edit_object_v1_response_t *systemconfiguration_edit_object_v1_response);

systemconfiguration_edit_object_v1_response_t *systemconfiguration_edit_object_v1_response_parseFromJSON(cJSON *systemconfiguration_edit_object_v1_responseJSON);

cJSON *systemconfiguration_edit_object_v1_response_convertToJSON(systemconfiguration_edit_object_v1_response_t *systemconfiguration_edit_object_v1_response);

#endif /* _systemconfiguration_edit_object_v1_response_H_ */

