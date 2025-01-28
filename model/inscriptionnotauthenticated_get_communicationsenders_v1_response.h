/*
 * inscriptionnotauthenticated_get_communicationsenders_v1_response.h
 *
 * Response for GET /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/getCommunicationrecipients
 */

#ifndef _inscriptionnotauthenticated_get_communicationsenders_v1_response_H_
#define _inscriptionnotauthenticated_get_communicationsenders_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionnotauthenticated_get_communicationsenders_v1_response_t inscriptionnotauthenticated_get_communicationsenders_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload.h"



typedef struct inscriptionnotauthenticated_get_communicationsenders_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionnotauthenticated_get_communicationsenders_v1_response_t;

__attribute__((deprecated)) inscriptionnotauthenticated_get_communicationsenders_v1_response_t *inscriptionnotauthenticated_get_communicationsenders_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    inscriptionnotauthenticated_get_communicationsenders_v1_response_m_payload_t *m_payload
);

void inscriptionnotauthenticated_get_communicationsenders_v1_response_free(inscriptionnotauthenticated_get_communicationsenders_v1_response_t *inscriptionnotauthenticated_get_communicationsenders_v1_response);

inscriptionnotauthenticated_get_communicationsenders_v1_response_t *inscriptionnotauthenticated_get_communicationsenders_v1_response_parseFromJSON(cJSON *inscriptionnotauthenticated_get_communicationsenders_v1_responseJSON);

cJSON *inscriptionnotauthenticated_get_communicationsenders_v1_response_convertToJSON(inscriptionnotauthenticated_get_communicationsenders_v1_response_t *inscriptionnotauthenticated_get_communicationsenders_v1_response);

#endif /* _inscriptionnotauthenticated_get_communicationsenders_v1_response_H_ */

