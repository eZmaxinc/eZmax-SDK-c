/*
 * modulegroup_get_all_v1_response_all_of.h
 *
 * 
 */

#ifndef _modulegroup_get_all_v1_response_all_of_H_
#define _modulegroup_get_all_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct modulegroup_get_all_v1_response_all_of_t modulegroup_get_all_v1_response_all_of_t;

#include "modulegroup_get_all_v1_response_m_payload.h"



typedef struct modulegroup_get_all_v1_response_all_of_t {
    struct modulegroup_get_all_v1_response_m_payload_t *m_payload; //model

} modulegroup_get_all_v1_response_all_of_t;

modulegroup_get_all_v1_response_all_of_t *modulegroup_get_all_v1_response_all_of_create(
    modulegroup_get_all_v1_response_m_payload_t *m_payload
);

void modulegroup_get_all_v1_response_all_of_free(modulegroup_get_all_v1_response_all_of_t *modulegroup_get_all_v1_response_all_of);

modulegroup_get_all_v1_response_all_of_t *modulegroup_get_all_v1_response_all_of_parseFromJSON(cJSON *modulegroup_get_all_v1_response_all_ofJSON);

cJSON *modulegroup_get_all_v1_response_all_of_convertToJSON(modulegroup_get_all_v1_response_all_of_t *modulegroup_get_all_v1_response_all_of);

#endif /* _modulegroup_get_all_v1_response_all_of_H_ */

