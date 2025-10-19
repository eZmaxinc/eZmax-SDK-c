/*
 * broker_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/broker/{pkiBrokerID}/importIntoEDM
 */

#ifndef _broker_import_into_edm_v1_response_m_payload_H_
#define _broker_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct broker_import_into_edm_v1_response_m_payload_t broker_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct broker_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} broker_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) broker_import_into_edm_v1_response_m_payload_t *broker_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void broker_import_into_edm_v1_response_m_payload_free(broker_import_into_edm_v1_response_m_payload_t *broker_import_into_edm_v1_response_m_payload);

broker_import_into_edm_v1_response_m_payload_t *broker_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *broker_import_into_edm_v1_response_m_payloadJSON);

cJSON *broker_import_into_edm_v1_response_m_payload_convertToJSON(broker_import_into_edm_v1_response_m_payload_t *broker_import_into_edm_v1_response_m_payload);

#endif /* _broker_import_into_edm_v1_response_m_payload_H_ */

