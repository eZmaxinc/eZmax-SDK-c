/*
 * versionhistory_get_object_v2_response_all_of.h
 *
 * 
 */

#ifndef _versionhistory_get_object_v2_response_all_of_H_
#define _versionhistory_get_object_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct versionhistory_get_object_v2_response_all_of_t versionhistory_get_object_v2_response_all_of_t;

#include "versionhistory_get_object_v2_response_m_payload.h"



typedef struct versionhistory_get_object_v2_response_all_of_t {
    struct versionhistory_get_object_v2_response_m_payload_t *m_payload; //model

} versionhistory_get_object_v2_response_all_of_t;

versionhistory_get_object_v2_response_all_of_t *versionhistory_get_object_v2_response_all_of_create(
    versionhistory_get_object_v2_response_m_payload_t *m_payload
);

void versionhistory_get_object_v2_response_all_of_free(versionhistory_get_object_v2_response_all_of_t *versionhistory_get_object_v2_response_all_of);

versionhistory_get_object_v2_response_all_of_t *versionhistory_get_object_v2_response_all_of_parseFromJSON(cJSON *versionhistory_get_object_v2_response_all_ofJSON);

cJSON *versionhistory_get_object_v2_response_all_of_convertToJSON(versionhistory_get_object_v2_response_all_of_t *versionhistory_get_object_v2_response_all_of);

#endif /* _versionhistory_get_object_v2_response_all_of_H_ */

