/*
 * systemconfiguration_get_object_v2_response_all_of.h
 *
 * 
 */

#ifndef _systemconfiguration_get_object_v2_response_all_of_H_
#define _systemconfiguration_get_object_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct systemconfiguration_get_object_v2_response_all_of_t systemconfiguration_get_object_v2_response_all_of_t;

#include "systemconfiguration_get_object_v2_response_m_payload.h"



typedef struct systemconfiguration_get_object_v2_response_all_of_t {
    struct systemconfiguration_get_object_v2_response_m_payload_t *m_payload; //model

} systemconfiguration_get_object_v2_response_all_of_t;

systemconfiguration_get_object_v2_response_all_of_t *systemconfiguration_get_object_v2_response_all_of_create(
    systemconfiguration_get_object_v2_response_m_payload_t *m_payload
);

void systemconfiguration_get_object_v2_response_all_of_free(systemconfiguration_get_object_v2_response_all_of_t *systemconfiguration_get_object_v2_response_all_of);

systemconfiguration_get_object_v2_response_all_of_t *systemconfiguration_get_object_v2_response_all_of_parseFromJSON(cJSON *systemconfiguration_get_object_v2_response_all_ofJSON);

cJSON *systemconfiguration_get_object_v2_response_all_of_convertToJSON(systemconfiguration_get_object_v2_response_all_of_t *systemconfiguration_get_object_v2_response_all_of);

#endif /* _systemconfiguration_get_object_v2_response_all_of_H_ */

