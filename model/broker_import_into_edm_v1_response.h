/*
 * broker_import_into_edm_v1_response.h
 *
 * Response for POST /1/object/broker/{pkiBrokerID}/importIntoEDM
 */

#ifndef _broker_import_into_edm_v1_response_H_
#define _broker_import_into_edm_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct broker_import_into_edm_v1_response_t broker_import_into_edm_v1_response_t;

#include "broker_import_into_edm_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct broker_import_into_edm_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct broker_import_into_edm_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} broker_import_into_edm_v1_response_t;

__attribute__((deprecated)) broker_import_into_edm_v1_response_t *broker_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    broker_import_into_edm_v1_response_m_payload_t *m_payload
);

void broker_import_into_edm_v1_response_free(broker_import_into_edm_v1_response_t *broker_import_into_edm_v1_response);

broker_import_into_edm_v1_response_t *broker_import_into_edm_v1_response_parseFromJSON(cJSON *broker_import_into_edm_v1_responseJSON);

cJSON *broker_import_into_edm_v1_response_convertToJSON(broker_import_into_edm_v1_response_t *broker_import_into_edm_v1_response);

#endif /* _broker_import_into_edm_v1_response_H_ */

