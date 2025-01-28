/*
 * discussion_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/discussion/{pkiDiscussionID}
 */

#ifndef _discussion_get_object_v2_response_m_payload_H_
#define _discussion_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discussion_get_object_v2_response_m_payload_t discussion_get_object_v2_response_m_payload_t;

#include "discussion_response_compound.h"



typedef struct discussion_get_object_v2_response_m_payload_t {
    struct discussion_response_compound_t *obj_discussion; //model

    int _library_owned; // Is the library responsible for freeing this object?
} discussion_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) discussion_get_object_v2_response_m_payload_t *discussion_get_object_v2_response_m_payload_create(
    discussion_response_compound_t *obj_discussion
);

void discussion_get_object_v2_response_m_payload_free(discussion_get_object_v2_response_m_payload_t *discussion_get_object_v2_response_m_payload);

discussion_get_object_v2_response_m_payload_t *discussion_get_object_v2_response_m_payload_parseFromJSON(cJSON *discussion_get_object_v2_response_m_payloadJSON);

cJSON *discussion_get_object_v2_response_m_payload_convertToJSON(discussion_get_object_v2_response_m_payload_t *discussion_get_object_v2_response_m_payload);

#endif /* _discussion_get_object_v2_response_m_payload_H_ */

