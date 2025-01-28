/*
 * ezsigntemplatedocumentpagerecognition_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsigntemplatedocumentpagerecognition
 */

#ifndef _ezsigntemplatedocumentpagerecognition_create_object_v1_request_H_
#define _ezsigntemplatedocumentpagerecognition_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocumentpagerecognition_create_object_v1_request_t ezsigntemplatedocumentpagerecognition_create_object_v1_request_t;

#include "ezsigntemplatedocumentpagerecognition_request_compound.h"



typedef struct ezsigntemplatedocumentpagerecognition_create_object_v1_request_t {
    list_t *a_obj_ezsigntemplatedocumentpagerecognition; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatedocumentpagerecognition_create_object_v1_request_t;

__attribute__((deprecated)) ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatedocumentpagerecognition
);

void ezsigntemplatedocumentpagerecognition_create_object_v1_request_free(ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request);

ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_create_object_v1_requestJSON);

cJSON *ezsigntemplatedocumentpagerecognition_create_object_v1_request_convertToJSON(ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request);

#endif /* _ezsigntemplatedocumentpagerecognition_create_object_v1_request_H_ */

