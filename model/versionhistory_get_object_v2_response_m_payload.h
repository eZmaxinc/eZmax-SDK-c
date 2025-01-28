/*
 * versionhistory_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/versionhistory/{pkiVersionhistoryID}
 */

#ifndef _versionhistory_get_object_v2_response_m_payload_H_
#define _versionhistory_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct versionhistory_get_object_v2_response_m_payload_t versionhistory_get_object_v2_response_m_payload_t;

#include "versionhistory_response_compound.h"



typedef struct versionhistory_get_object_v2_response_m_payload_t {
    struct versionhistory_response_compound_t *obj_versionhistory; //model

    int _library_owned; // Is the library responsible for freeing this object?
} versionhistory_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) versionhistory_get_object_v2_response_m_payload_t *versionhistory_get_object_v2_response_m_payload_create(
    versionhistory_response_compound_t *obj_versionhistory
);

void versionhistory_get_object_v2_response_m_payload_free(versionhistory_get_object_v2_response_m_payload_t *versionhistory_get_object_v2_response_m_payload);

versionhistory_get_object_v2_response_m_payload_t *versionhistory_get_object_v2_response_m_payload_parseFromJSON(cJSON *versionhistory_get_object_v2_response_m_payloadJSON);

cJSON *versionhistory_get_object_v2_response_m_payload_convertToJSON(versionhistory_get_object_v2_response_m_payload_t *versionhistory_get_object_v2_response_m_payload);

#endif /* _versionhistory_get_object_v2_response_m_payload_H_ */

