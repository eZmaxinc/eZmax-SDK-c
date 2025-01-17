/*
 * versionhistory_get_object_v2_response.h
 *
 * Response for GET /2/object/versionhistory/{pkiVersionhistoryID}
 */

#ifndef _versionhistory_get_object_v2_response_H_
#define _versionhistory_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct versionhistory_get_object_v2_response_t versionhistory_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "versionhistory_get_object_v2_response_m_payload.h"



typedef struct versionhistory_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct versionhistory_get_object_v2_response_m_payload_t *m_payload; //model

} versionhistory_get_object_v2_response_t;

versionhistory_get_object_v2_response_t *versionhistory_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    versionhistory_get_object_v2_response_m_payload_t *m_payload
);

void versionhistory_get_object_v2_response_free(versionhistory_get_object_v2_response_t *versionhistory_get_object_v2_response);

versionhistory_get_object_v2_response_t *versionhistory_get_object_v2_response_parseFromJSON(cJSON *versionhistory_get_object_v2_responseJSON);

cJSON *versionhistory_get_object_v2_response_convertToJSON(versionhistory_get_object_v2_response_t *versionhistory_get_object_v2_response);

#endif /* _versionhistory_get_object_v2_response_H_ */

