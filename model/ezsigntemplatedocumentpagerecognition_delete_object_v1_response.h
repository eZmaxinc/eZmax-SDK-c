/*
 * ezsigntemplatedocumentpagerecognition_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/ezsigntemplatedocumentpagerecognition/{pkiEzsigntemplatedocumentpagerecognitionID}
 */

#ifndef _ezsigntemplatedocumentpagerecognition_delete_object_v1_response_H_
#define _ezsigntemplatedocumentpagerecognition_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t;

__attribute__((deprecated)) ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t *ezsigntemplatedocumentpagerecognition_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void ezsigntemplatedocumentpagerecognition_delete_object_v1_response_free(ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t *ezsigntemplatedocumentpagerecognition_delete_object_v1_response);

ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t *ezsigntemplatedocumentpagerecognition_delete_object_v1_response_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_delete_object_v1_responseJSON);

cJSON *ezsigntemplatedocumentpagerecognition_delete_object_v1_response_convertToJSON(ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t *ezsigntemplatedocumentpagerecognition_delete_object_v1_response);

#endif /* _ezsigntemplatedocumentpagerecognition_delete_object_v1_response_H_ */

