/*
 * branding_get_object_v3_response_m_payload.h
 *
 * Payload for GET /3/object/branding/{pkiBrandingID}
 */

#ifndef _branding_get_object_v3_response_m_payload_H_
#define _branding_get_object_v3_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_get_object_v3_response_m_payload_t branding_get_object_v3_response_m_payload_t;

#include "branding_response_compound_v3.h"



typedef struct branding_get_object_v3_response_m_payload_t {
    struct branding_response_compound_v3_t *obj_branding; //model

} branding_get_object_v3_response_m_payload_t;

branding_get_object_v3_response_m_payload_t *branding_get_object_v3_response_m_payload_create(
    branding_response_compound_v3_t *obj_branding
);

void branding_get_object_v3_response_m_payload_free(branding_get_object_v3_response_m_payload_t *branding_get_object_v3_response_m_payload);

branding_get_object_v3_response_m_payload_t *branding_get_object_v3_response_m_payload_parseFromJSON(cJSON *branding_get_object_v3_response_m_payloadJSON);

cJSON *branding_get_object_v3_response_m_payload_convertToJSON(branding_get_object_v3_response_m_payload_t *branding_get_object_v3_response_m_payload);

#endif /* _branding_get_object_v3_response_m_payload_H_ */

