/*
 * communication_send_v1_response.h
 *
 * Response for POST /1/object/communication
 */

#ifndef _communication_send_v1_response_H_
#define _communication_send_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_send_v1_response_t communication_send_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "communication_send_v1_response_m_payload.h"



typedef struct communication_send_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct communication_send_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} communication_send_v1_response_t;

__attribute__((deprecated)) communication_send_v1_response_t *communication_send_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    communication_send_v1_response_m_payload_t *m_payload
);

void communication_send_v1_response_free(communication_send_v1_response_t *communication_send_v1_response);

communication_send_v1_response_t *communication_send_v1_response_parseFromJSON(cJSON *communication_send_v1_responseJSON);

cJSON *communication_send_v1_response_convertToJSON(communication_send_v1_response_t *communication_send_v1_response);

#endif /* _communication_send_v1_response_H_ */

