/*
 * branding_get_object_v3_response.h
 *
 * Response for GET /3/object/branding/{pkiBrandingID}
 */

#ifndef _branding_get_object_v3_response_H_
#define _branding_get_object_v3_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_get_object_v3_response_t branding_get_object_v3_response_t;

#include "branding_get_object_v3_response_m_payload.h"
#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct branding_get_object_v3_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct branding_get_object_v3_response_m_payload_t *m_payload; //model

} branding_get_object_v3_response_t;

branding_get_object_v3_response_t *branding_get_object_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    branding_get_object_v3_response_m_payload_t *m_payload
);

void branding_get_object_v3_response_free(branding_get_object_v3_response_t *branding_get_object_v3_response);

branding_get_object_v3_response_t *branding_get_object_v3_response_parseFromJSON(cJSON *branding_get_object_v3_responseJSON);

cJSON *branding_get_object_v3_response_convertToJSON(branding_get_object_v3_response_t *branding_get_object_v3_response);

#endif /* _branding_get_object_v3_response_H_ */

