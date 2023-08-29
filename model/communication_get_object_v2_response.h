/*
 * communication_get_object_v2_response.h
 *
 * Response for GET /2/object/communication/{pkiCommunicationID}
 */

#ifndef _communication_get_object_v2_response_H_
#define _communication_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_get_object_v2_response_t communication_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "communication_get_object_v2_response_m_payload.h"



typedef struct communication_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct communication_get_object_v2_response_m_payload_t *m_payload; //model

} communication_get_object_v2_response_t;

communication_get_object_v2_response_t *communication_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    communication_get_object_v2_response_m_payload_t *m_payload
);

void communication_get_object_v2_response_free(communication_get_object_v2_response_t *communication_get_object_v2_response);

communication_get_object_v2_response_t *communication_get_object_v2_response_parseFromJSON(cJSON *communication_get_object_v2_responseJSON);

cJSON *communication_get_object_v2_response_convertToJSON(communication_get_object_v2_response_t *communication_get_object_v2_response);

#endif /* _communication_get_object_v2_response_H_ */

