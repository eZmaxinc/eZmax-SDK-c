/*
 * inscriptiontemp_get_communicationsenders_v1_response.h
 *
 * Response for GET /1/object/inscriptiontemp/{pkiInscriptiontempID}/getCommunicationrecipients
 */

#ifndef _inscriptiontemp_get_communicationsenders_v1_response_H_
#define _inscriptiontemp_get_communicationsenders_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptiontemp_get_communicationsenders_v1_response_t inscriptiontemp_get_communicationsenders_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "inscriptiontemp_get_communicationsenders_v1_response_m_payload.h"



typedef struct inscriptiontemp_get_communicationsenders_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct inscriptiontemp_get_communicationsenders_v1_response_m_payload_t *m_payload; //model

} inscriptiontemp_get_communicationsenders_v1_response_t;

inscriptiontemp_get_communicationsenders_v1_response_t *inscriptiontemp_get_communicationsenders_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    inscriptiontemp_get_communicationsenders_v1_response_m_payload_t *m_payload
);

void inscriptiontemp_get_communicationsenders_v1_response_free(inscriptiontemp_get_communicationsenders_v1_response_t *inscriptiontemp_get_communicationsenders_v1_response);

inscriptiontemp_get_communicationsenders_v1_response_t *inscriptiontemp_get_communicationsenders_v1_response_parseFromJSON(cJSON *inscriptiontemp_get_communicationsenders_v1_responseJSON);

cJSON *inscriptiontemp_get_communicationsenders_v1_response_convertToJSON(inscriptiontemp_get_communicationsenders_v1_response_t *inscriptiontemp_get_communicationsenders_v1_response);

#endif /* _inscriptiontemp_get_communicationsenders_v1_response_H_ */

