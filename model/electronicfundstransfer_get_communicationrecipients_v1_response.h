/*
 * electronicfundstransfer_get_communicationrecipients_v1_response.h
 *
 * Response for GET /1/object/electronicfundstransfer/{pkiElectronicfundstransferID}/getCommunicationrecipients
 */

#ifndef _electronicfundstransfer_get_communicationrecipients_v1_response_H_
#define _electronicfundstransfer_get_communicationrecipients_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct electronicfundstransfer_get_communicationrecipients_v1_response_t electronicfundstransfer_get_communicationrecipients_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "electronicfundstransfer_get_communicationrecipients_v1_response_m_payload.h"



typedef struct electronicfundstransfer_get_communicationrecipients_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct electronicfundstransfer_get_communicationrecipients_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} electronicfundstransfer_get_communicationrecipients_v1_response_t;

__attribute__((deprecated)) electronicfundstransfer_get_communicationrecipients_v1_response_t *electronicfundstransfer_get_communicationrecipients_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    electronicfundstransfer_get_communicationrecipients_v1_response_m_payload_t *m_payload
);

void electronicfundstransfer_get_communicationrecipients_v1_response_free(electronicfundstransfer_get_communicationrecipients_v1_response_t *electronicfundstransfer_get_communicationrecipients_v1_response);

electronicfundstransfer_get_communicationrecipients_v1_response_t *electronicfundstransfer_get_communicationrecipients_v1_response_parseFromJSON(cJSON *electronicfundstransfer_get_communicationrecipients_v1_responseJSON);

cJSON *electronicfundstransfer_get_communicationrecipients_v1_response_convertToJSON(electronicfundstransfer_get_communicationrecipients_v1_response_t *electronicfundstransfer_get_communicationrecipients_v1_response);

#endif /* _electronicfundstransfer_get_communicationrecipients_v1_response_H_ */

