/*
 * ezsignfoldersignerassociation_get_object_v1_response.h
 *
 * Response for GET /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}
 */

#ifndef _ezsignfoldersignerassociation_get_object_v1_response_H_
#define _ezsignfoldersignerassociation_get_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_get_object_v1_response_t ezsignfoldersignerassociation_get_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "ezsignfoldersignerassociation_response_compound.h"



typedef struct ezsignfoldersignerassociation_get_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct ezsignfoldersignerassociation_response_compound_t *m_payload; //model

} ezsignfoldersignerassociation_get_object_v1_response_t;

ezsignfoldersignerassociation_get_object_v1_response_t *ezsignfoldersignerassociation_get_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignfoldersignerassociation_response_compound_t *m_payload
);

void ezsignfoldersignerassociation_get_object_v1_response_free(ezsignfoldersignerassociation_get_object_v1_response_t *ezsignfoldersignerassociation_get_object_v1_response);

ezsignfoldersignerassociation_get_object_v1_response_t *ezsignfoldersignerassociation_get_object_v1_response_parseFromJSON(cJSON *ezsignfoldersignerassociation_get_object_v1_responseJSON);

cJSON *ezsignfoldersignerassociation_get_object_v1_response_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response_t *ezsignfoldersignerassociation_get_object_v1_response);

#endif /* _ezsignfoldersignerassociation_get_object_v1_response_H_ */

