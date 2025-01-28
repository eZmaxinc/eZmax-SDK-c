/*
 * modulegroup_get_all_v1_response_m_payload.h
 *
 * Response for GET /1/object/modulegroup/getAll
 */

#ifndef _modulegroup_get_all_v1_response_m_payload_H_
#define _modulegroup_get_all_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct modulegroup_get_all_v1_response_m_payload_t modulegroup_get_all_v1_response_m_payload_t;

#include "modulegroup_response_compound.h"



typedef struct modulegroup_get_all_v1_response_m_payload_t {
    list_t *a_obj_modulegroup; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} modulegroup_get_all_v1_response_m_payload_t;

__attribute__((deprecated)) modulegroup_get_all_v1_response_m_payload_t *modulegroup_get_all_v1_response_m_payload_create(
    list_t *a_obj_modulegroup
);

void modulegroup_get_all_v1_response_m_payload_free(modulegroup_get_all_v1_response_m_payload_t *modulegroup_get_all_v1_response_m_payload);

modulegroup_get_all_v1_response_m_payload_t *modulegroup_get_all_v1_response_m_payload_parseFromJSON(cJSON *modulegroup_get_all_v1_response_m_payloadJSON);

cJSON *modulegroup_get_all_v1_response_m_payload_convertToJSON(modulegroup_get_all_v1_response_m_payload_t *modulegroup_get_all_v1_response_m_payload);

#endif /* _modulegroup_get_all_v1_response_m_payload_H_ */

