/*
 * ezsignfoldersignerassociation_edit_object_v1_request.h
 *
 * Request for the /1/object/ezsignfoldersignerassociation/editObject API Request
 */

#ifndef _ezsignfoldersignerassociation_edit_object_v1_request_H_
#define _ezsignfoldersignerassociation_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_edit_object_v1_request_t ezsignfoldersignerassociation_edit_object_v1_request_t;

#include "ezsignfoldersignerassociation_request.h"



typedef struct ezsignfoldersignerassociation_edit_object_v1_request_t {
    struct ezsignfoldersignerassociation_request_t *obj_ezsignfoldersignerassociation; //model

} ezsignfoldersignerassociation_edit_object_v1_request_t;

ezsignfoldersignerassociation_edit_object_v1_request_t *ezsignfoldersignerassociation_edit_object_v1_request_create(
    ezsignfoldersignerassociation_request_t *obj_ezsignfoldersignerassociation
);

void ezsignfoldersignerassociation_edit_object_v1_request_free(ezsignfoldersignerassociation_edit_object_v1_request_t *ezsignfoldersignerassociation_edit_object_v1_request);

ezsignfoldersignerassociation_edit_object_v1_request_t *ezsignfoldersignerassociation_edit_object_v1_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_edit_object_v1_requestJSON);

cJSON *ezsignfoldersignerassociation_edit_object_v1_request_convertToJSON(ezsignfoldersignerassociation_edit_object_v1_request_t *ezsignfoldersignerassociation_edit_object_v1_request);

#endif /* _ezsignfoldersignerassociation_edit_object_v1_request_H_ */

