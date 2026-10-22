/*
 * documenttypechecklist_get_object_v2_response.h
 *
 * Response for GET /2/object/documenttypechecklist/{pkiDocumenttypechecklistID}
 */

#ifndef _documenttypechecklist_get_object_v2_response_H_
#define _documenttypechecklist_get_object_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttypechecklist_get_object_v2_response_t documenttypechecklist_get_object_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "documenttypechecklist_get_object_v2_response_m_payload.h"



typedef struct documenttypechecklist_get_object_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct documenttypechecklist_get_object_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} documenttypechecklist_get_object_v2_response_t;

__attribute__((deprecated)) documenttypechecklist_get_object_v2_response_t *documenttypechecklist_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    documenttypechecklist_get_object_v2_response_m_payload_t *m_payload
);

void documenttypechecklist_get_object_v2_response_free(documenttypechecklist_get_object_v2_response_t *documenttypechecklist_get_object_v2_response);

documenttypechecklist_get_object_v2_response_t *documenttypechecklist_get_object_v2_response_parseFromJSON(cJSON *documenttypechecklist_get_object_v2_responseJSON);

cJSON *documenttypechecklist_get_object_v2_response_convertToJSON(documenttypechecklist_get_object_v2_response_t *documenttypechecklist_get_object_v2_response);

#endif /* _documenttypechecklist_get_object_v2_response_H_ */

