/*
 * inscriptionnotauthenticated_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/importIntoEDM
 */

#ifndef _inscriptionnotauthenticated_import_into_edm_v1_request_H_
#define _inscriptionnotauthenticated_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionnotauthenticated_import_into_edm_v1_request_t inscriptionnotauthenticated_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct inscriptionnotauthenticated_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionnotauthenticated_import_into_edm_v1_request_t;

__attribute__((deprecated)) inscriptionnotauthenticated_import_into_edm_v1_request_t *inscriptionnotauthenticated_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void inscriptionnotauthenticated_import_into_edm_v1_request_free(inscriptionnotauthenticated_import_into_edm_v1_request_t *inscriptionnotauthenticated_import_into_edm_v1_request);

inscriptionnotauthenticated_import_into_edm_v1_request_t *inscriptionnotauthenticated_import_into_edm_v1_request_parseFromJSON(cJSON *inscriptionnotauthenticated_import_into_edm_v1_requestJSON);

cJSON *inscriptionnotauthenticated_import_into_edm_v1_request_convertToJSON(inscriptionnotauthenticated_import_into_edm_v1_request_t *inscriptionnotauthenticated_import_into_edm_v1_request);

#endif /* _inscriptionnotauthenticated_import_into_edm_v1_request_H_ */

