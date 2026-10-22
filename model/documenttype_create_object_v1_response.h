/*
 * documenttype_create_object_v1_response.h
 *
 * Response for POST /1/object/documenttype
 */

#ifndef _documenttype_create_object_v1_response_H_
#define _documenttype_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttype_create_object_v1_response_t documenttype_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "documenttype_create_object_v1_response_m_payload.h"



typedef struct documenttype_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct documenttype_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} documenttype_create_object_v1_response_t;

__attribute__((deprecated)) documenttype_create_object_v1_response_t *documenttype_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    documenttype_create_object_v1_response_m_payload_t *m_payload
);

void documenttype_create_object_v1_response_free(documenttype_create_object_v1_response_t *documenttype_create_object_v1_response);

documenttype_create_object_v1_response_t *documenttype_create_object_v1_response_parseFromJSON(cJSON *documenttype_create_object_v1_responseJSON);

cJSON *documenttype_create_object_v1_response_convertToJSON(documenttype_create_object_v1_response_t *documenttype_create_object_v1_response);

#endif /* _documenttype_create_object_v1_response_H_ */

