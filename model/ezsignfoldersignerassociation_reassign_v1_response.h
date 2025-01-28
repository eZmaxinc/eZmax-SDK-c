/*
 * ezsignfoldersignerassociation_reassign_v1_response.h
 *
 * Response for GET /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/reassign
 */

#ifndef _ezsignfoldersignerassociation_reassign_v1_response_H_
#define _ezsignfoldersignerassociation_reassign_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_reassign_v1_response_t ezsignfoldersignerassociation_reassign_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsignfoldersignerassociation_reassign_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldersignerassociation_reassign_v1_response_t;

__attribute__((deprecated)) ezsignfoldersignerassociation_reassign_v1_response_t *ezsignfoldersignerassociation_reassign_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsignfoldersignerassociation_reassign_v1_response_free(ezsignfoldersignerassociation_reassign_v1_response_t *ezsignfoldersignerassociation_reassign_v1_response);

ezsignfoldersignerassociation_reassign_v1_response_t *ezsignfoldersignerassociation_reassign_v1_response_parseFromJSON(cJSON *ezsignfoldersignerassociation_reassign_v1_responseJSON);

cJSON *ezsignfoldersignerassociation_reassign_v1_response_convertToJSON(ezsignfoldersignerassociation_reassign_v1_response_t *ezsignfoldersignerassociation_reassign_v1_response);

#endif /* _ezsignfoldersignerassociation_reassign_v1_response_H_ */

