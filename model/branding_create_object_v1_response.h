/*
 * branding_create_object_v1_response.h
 *
 * Response for POST /1/object/branding
 */

#ifndef _branding_create_object_v1_response_H_
#define _branding_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_create_object_v1_response_t branding_create_object_v1_response_t;

#include "branding_create_object_v1_response_all_of.h"
#include "branding_create_object_v1_response_m_payload.h"
#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct branding_create_object_v1_response_t {
    struct branding_create_object_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} branding_create_object_v1_response_t;

branding_create_object_v1_response_t *branding_create_object_v1_response_create(
    branding_create_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void branding_create_object_v1_response_free(branding_create_object_v1_response_t *branding_create_object_v1_response);

branding_create_object_v1_response_t *branding_create_object_v1_response_parseFromJSON(cJSON *branding_create_object_v1_responseJSON);

cJSON *branding_create_object_v1_response_convertToJSON(branding_create_object_v1_response_t *branding_create_object_v1_response);

#endif /* _branding_create_object_v1_response_H_ */

