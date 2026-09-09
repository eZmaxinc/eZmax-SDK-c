/*
 * broker_get_attachments_v1_response.h
 *
 * Response for GET /1/object/broker/{pkiBrokerID}/getAttachments
 */

#ifndef _broker_get_attachments_v1_response_H_
#define _broker_get_attachments_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct broker_get_attachments_v1_response_t broker_get_attachments_v1_response_t;

#include "broker_get_attachments_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct broker_get_attachments_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct broker_get_attachments_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} broker_get_attachments_v1_response_t;

__attribute__((deprecated)) broker_get_attachments_v1_response_t *broker_get_attachments_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    broker_get_attachments_v1_response_m_payload_t *m_payload
);

void broker_get_attachments_v1_response_free(broker_get_attachments_v1_response_t *broker_get_attachments_v1_response);

broker_get_attachments_v1_response_t *broker_get_attachments_v1_response_parseFromJSON(cJSON *broker_get_attachments_v1_responseJSON);

cJSON *broker_get_attachments_v1_response_convertToJSON(broker_get_attachments_v1_response_t *broker_get_attachments_v1_response);

#endif /* _broker_get_attachments_v1_response_H_ */

