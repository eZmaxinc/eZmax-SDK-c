/*
 * ezsignfoldersignerassociation_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsignfoldersignerassociation
 */

#ifndef _ezsignfoldersignerassociation_create_object_v1_request_H_
#define _ezsignfoldersignerassociation_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_create_object_v1_request_t ezsignfoldersignerassociation_create_object_v1_request_t;

#include "ezsignfoldersignerassociation_request.h"
#include "ezsignfoldersignerassociation_request_compound.h"



typedef struct ezsignfoldersignerassociation_create_object_v1_request_t {
    struct ezsignfoldersignerassociation_request_t *obj_ezsignfoldersignerassociation; //model
    struct ezsignfoldersignerassociation_request_compound_t *obj_ezsignfoldersignerassociation_compound; //model

} ezsignfoldersignerassociation_create_object_v1_request_t;

ezsignfoldersignerassociation_create_object_v1_request_t *ezsignfoldersignerassociation_create_object_v1_request_create(
    ezsignfoldersignerassociation_request_t *obj_ezsignfoldersignerassociation,
    ezsignfoldersignerassociation_request_compound_t *obj_ezsignfoldersignerassociation_compound
);

void ezsignfoldersignerassociation_create_object_v1_request_free(ezsignfoldersignerassociation_create_object_v1_request_t *ezsignfoldersignerassociation_create_object_v1_request);

ezsignfoldersignerassociation_create_object_v1_request_t *ezsignfoldersignerassociation_create_object_v1_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_object_v1_requestJSON);

cJSON *ezsignfoldersignerassociation_create_object_v1_request_convertToJSON(ezsignfoldersignerassociation_create_object_v1_request_t *ezsignfoldersignerassociation_create_object_v1_request);

#endif /* _ezsignfoldersignerassociation_create_object_v1_request_H_ */

