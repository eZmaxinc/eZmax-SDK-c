/*
 * inscription_synchronization_documenttype_v1_response.h
 *
 * Response for POST /1/object/inscription/{pkiInscriptionID}/synchronizationDocumenttype
 */

#ifndef _inscription_synchronization_documenttype_v1_response_H_
#define _inscription_synchronization_documenttype_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscription_synchronization_documenttype_v1_response_t inscription_synchronization_documenttype_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct inscription_synchronization_documenttype_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} inscription_synchronization_documenttype_v1_response_t;

__attribute__((deprecated)) inscription_synchronization_documenttype_v1_response_t *inscription_synchronization_documenttype_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void inscription_synchronization_documenttype_v1_response_free(inscription_synchronization_documenttype_v1_response_t *inscription_synchronization_documenttype_v1_response);

inscription_synchronization_documenttype_v1_response_t *inscription_synchronization_documenttype_v1_response_parseFromJSON(cJSON *inscription_synchronization_documenttype_v1_responseJSON);

cJSON *inscription_synchronization_documenttype_v1_response_convertToJSON(inscription_synchronization_documenttype_v1_response_t *inscription_synchronization_documenttype_v1_response);

#endif /* _inscription_synchronization_documenttype_v1_response_H_ */

