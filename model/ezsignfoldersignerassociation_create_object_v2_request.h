/*
 * ezsignfoldersignerassociation_create_object_v2_request.h
 *
 * Request for POST /2/object/ezsignfoldersignerassociation
 */

#ifndef _ezsignfoldersignerassociation_create_object_v2_request_H_
#define _ezsignfoldersignerassociation_create_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_create_object_v2_request_t ezsignfoldersignerassociation_create_object_v2_request_t;

#include "ezsignfoldersignerassociation_request_compound.h"



typedef struct ezsignfoldersignerassociation_create_object_v2_request_t {
    list_t *a_obj_ezsignfoldersignerassociation; //nonprimitive container

} ezsignfoldersignerassociation_create_object_v2_request_t;

ezsignfoldersignerassociation_create_object_v2_request_t *ezsignfoldersignerassociation_create_object_v2_request_create(
    list_t *a_obj_ezsignfoldersignerassociation
);

void ezsignfoldersignerassociation_create_object_v2_request_free(ezsignfoldersignerassociation_create_object_v2_request_t *ezsignfoldersignerassociation_create_object_v2_request);

ezsignfoldersignerassociation_create_object_v2_request_t *ezsignfoldersignerassociation_create_object_v2_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_object_v2_requestJSON);

cJSON *ezsignfoldersignerassociation_create_object_v2_request_convertToJSON(ezsignfoldersignerassociation_create_object_v2_request_t *ezsignfoldersignerassociation_create_object_v2_request);

#endif /* _ezsignfoldersignerassociation_create_object_v2_request_H_ */

