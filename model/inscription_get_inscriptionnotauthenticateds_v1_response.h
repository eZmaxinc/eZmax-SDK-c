/*
 * inscription_get_inscriptionnotauthenticateds_v1_response.h
 *
 * Response for GET /1/object/inscription/{pkiInscriptionID}/getInscriptionnotauthenticateds
 */

#ifndef _inscription_get_inscriptionnotauthenticateds_v1_response_H_
#define _inscription_get_inscriptionnotauthenticateds_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscription_get_inscriptionnotauthenticateds_v1_response_t inscription_get_inscriptionnotauthenticateds_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "object.h"



typedef struct inscription_get_inscriptionnotauthenticateds_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    object_t *m_payload; //object

    int _library_owned; // Is the library responsible for freeing this object?
} inscription_get_inscriptionnotauthenticateds_v1_response_t;

__attribute__((deprecated)) inscription_get_inscriptionnotauthenticateds_v1_response_t *inscription_get_inscriptionnotauthenticateds_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    object_t *m_payload
);

void inscription_get_inscriptionnotauthenticateds_v1_response_free(inscription_get_inscriptionnotauthenticateds_v1_response_t *inscription_get_inscriptionnotauthenticateds_v1_response);

inscription_get_inscriptionnotauthenticateds_v1_response_t *inscription_get_inscriptionnotauthenticateds_v1_response_parseFromJSON(cJSON *inscription_get_inscriptionnotauthenticateds_v1_responseJSON);

cJSON *inscription_get_inscriptionnotauthenticateds_v1_response_convertToJSON(inscription_get_inscriptionnotauthenticateds_v1_response_t *inscription_get_inscriptionnotauthenticateds_v1_response);

#endif /* _inscription_get_inscriptionnotauthenticateds_v1_response_H_ */

