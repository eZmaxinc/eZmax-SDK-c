/*
 * ezsignfoldersignerassociation_create_object_v3_request.h
 *
 * Request for POST /2/object/ezsignfoldersignerassociation
 */

#ifndef _ezsignfoldersignerassociation_create_object_v3_request_H_
#define _ezsignfoldersignerassociation_create_object_v3_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_create_object_v3_request_t ezsignfoldersignerassociation_create_object_v3_request_t;

#include "ezsignfoldersignerassociation_request_compound_v2.h"



typedef struct ezsignfoldersignerassociation_create_object_v3_request_t {
    list_t *a_obj_ezsignfoldersignerassociation; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldersignerassociation_create_object_v3_request_t;

__attribute__((deprecated)) ezsignfoldersignerassociation_create_object_v3_request_t *ezsignfoldersignerassociation_create_object_v3_request_create(
    list_t *a_obj_ezsignfoldersignerassociation
);

void ezsignfoldersignerassociation_create_object_v3_request_free(ezsignfoldersignerassociation_create_object_v3_request_t *ezsignfoldersignerassociation_create_object_v3_request);

ezsignfoldersignerassociation_create_object_v3_request_t *ezsignfoldersignerassociation_create_object_v3_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_object_v3_requestJSON);

cJSON *ezsignfoldersignerassociation_create_object_v3_request_convertToJSON(ezsignfoldersignerassociation_create_object_v3_request_t *ezsignfoldersignerassociation_create_object_v3_request);

#endif /* _ezsignfoldersignerassociation_create_object_v3_request_H_ */

