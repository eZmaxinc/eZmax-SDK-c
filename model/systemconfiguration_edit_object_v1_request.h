/*
 * systemconfiguration_edit_object_v1_request.h
 *
 * Request for PUT /1/object/systemconfiguration/{pkiSystemconfigurationID}
 */

#ifndef _systemconfiguration_edit_object_v1_request_H_
#define _systemconfiguration_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct systemconfiguration_edit_object_v1_request_t systemconfiguration_edit_object_v1_request_t;

#include "systemconfiguration_request_compound.h"



typedef struct systemconfiguration_edit_object_v1_request_t {
    struct systemconfiguration_request_compound_t *obj_systemconfiguration; //model

} systemconfiguration_edit_object_v1_request_t;

systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request_create(
    systemconfiguration_request_compound_t *obj_systemconfiguration
);

void systemconfiguration_edit_object_v1_request_free(systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request);

systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request_parseFromJSON(cJSON *systemconfiguration_edit_object_v1_requestJSON);

cJSON *systemconfiguration_edit_object_v1_request_convertToJSON(systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request);

#endif /* _systemconfiguration_edit_object_v1_request_H_ */

