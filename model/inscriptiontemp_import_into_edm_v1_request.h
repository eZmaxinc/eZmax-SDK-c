/*
 * inscriptiontemp_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/inscriptiontemp/{pkiInscriptiontempID}/importIntoEDM
 */

#ifndef _inscriptiontemp_import_into_edm_v1_request_H_
#define _inscriptiontemp_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptiontemp_import_into_edm_v1_request_t inscriptiontemp_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct inscriptiontemp_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptiontemp_import_into_edm_v1_request_t;

__attribute__((deprecated)) inscriptiontemp_import_into_edm_v1_request_t *inscriptiontemp_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void inscriptiontemp_import_into_edm_v1_request_free(inscriptiontemp_import_into_edm_v1_request_t *inscriptiontemp_import_into_edm_v1_request);

inscriptiontemp_import_into_edm_v1_request_t *inscriptiontemp_import_into_edm_v1_request_parseFromJSON(cJSON *inscriptiontemp_import_into_edm_v1_requestJSON);

cJSON *inscriptiontemp_import_into_edm_v1_request_convertToJSON(inscriptiontemp_import_into_edm_v1_request_t *inscriptiontemp_import_into_edm_v1_request);

#endif /* _inscriptiontemp_import_into_edm_v1_request_H_ */

