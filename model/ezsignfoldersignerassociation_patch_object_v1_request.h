/*
 * ezsignfoldersignerassociation_patch_object_v1_request.h
 *
 * Request for PATCH /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}
 */

#ifndef _ezsignfoldersignerassociation_patch_object_v1_request_H_
#define _ezsignfoldersignerassociation_patch_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_patch_object_v1_request_t ezsignfoldersignerassociation_patch_object_v1_request_t;

#include "ezsignfoldersignerassociation_request_patch.h"



typedef struct ezsignfoldersignerassociation_patch_object_v1_request_t {
    struct ezsignfoldersignerassociation_request_patch_t *obj_ezsignfoldersignerassociation; //model

} ezsignfoldersignerassociation_patch_object_v1_request_t;

ezsignfoldersignerassociation_patch_object_v1_request_t *ezsignfoldersignerassociation_patch_object_v1_request_create(
    ezsignfoldersignerassociation_request_patch_t *obj_ezsignfoldersignerassociation
);

void ezsignfoldersignerassociation_patch_object_v1_request_free(ezsignfoldersignerassociation_patch_object_v1_request_t *ezsignfoldersignerassociation_patch_object_v1_request);

ezsignfoldersignerassociation_patch_object_v1_request_t *ezsignfoldersignerassociation_patch_object_v1_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_patch_object_v1_requestJSON);

cJSON *ezsignfoldersignerassociation_patch_object_v1_request_convertToJSON(ezsignfoldersignerassociation_patch_object_v1_request_t *ezsignfoldersignerassociation_patch_object_v1_request);

#endif /* _ezsignfoldersignerassociation_patch_object_v1_request_H_ */

