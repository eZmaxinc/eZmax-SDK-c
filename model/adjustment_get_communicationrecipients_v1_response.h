/*
 * adjustment_get_communicationrecipients_v1_response.h
 *
 * Response for GET /1/object/adjustment/{pkiAdjustmentID}/getCommunicationrecipients
 */

#ifndef _adjustment_get_communicationrecipients_v1_response_H_
#define _adjustment_get_communicationrecipients_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct adjustment_get_communicationrecipients_v1_response_t adjustment_get_communicationrecipients_v1_response_t;

#include "adjustment_get_communicationrecipients_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct adjustment_get_communicationrecipients_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct adjustment_get_communicationrecipients_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} adjustment_get_communicationrecipients_v1_response_t;

__attribute__((deprecated)) adjustment_get_communicationrecipients_v1_response_t *adjustment_get_communicationrecipients_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    adjustment_get_communicationrecipients_v1_response_m_payload_t *m_payload
);

void adjustment_get_communicationrecipients_v1_response_free(adjustment_get_communicationrecipients_v1_response_t *adjustment_get_communicationrecipients_v1_response);

adjustment_get_communicationrecipients_v1_response_t *adjustment_get_communicationrecipients_v1_response_parseFromJSON(cJSON *adjustment_get_communicationrecipients_v1_responseJSON);

cJSON *adjustment_get_communicationrecipients_v1_response_convertToJSON(adjustment_get_communicationrecipients_v1_response_t *adjustment_get_communicationrecipients_v1_response);

#endif /* _adjustment_get_communicationrecipients_v1_response_H_ */

