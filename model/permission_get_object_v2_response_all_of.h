/*
 * permission_get_object_v2_response_all_of.h
 *
 * 
 */

#ifndef _permission_get_object_v2_response_all_of_H_
#define _permission_get_object_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct permission_get_object_v2_response_all_of_t permission_get_object_v2_response_all_of_t;

#include "permission_get_object_v2_response_m_payload.h"



typedef struct permission_get_object_v2_response_all_of_t {
    struct permission_get_object_v2_response_m_payload_t *m_payload; //model

} permission_get_object_v2_response_all_of_t;

permission_get_object_v2_response_all_of_t *permission_get_object_v2_response_all_of_create(
    permission_get_object_v2_response_m_payload_t *m_payload
);

void permission_get_object_v2_response_all_of_free(permission_get_object_v2_response_all_of_t *permission_get_object_v2_response_all_of);

permission_get_object_v2_response_all_of_t *permission_get_object_v2_response_all_of_parseFromJSON(cJSON *permission_get_object_v2_response_all_ofJSON);

cJSON *permission_get_object_v2_response_all_of_convertToJSON(permission_get_object_v2_response_all_of_t *permission_get_object_v2_response_all_of);

#endif /* _permission_get_object_v2_response_all_of_H_ */

