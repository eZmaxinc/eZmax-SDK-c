/*
 * documenttypechecklist_get_list_v1_response.h
 *
 * Response for GET /1/object/documenttypechecklist/getList
 */

#ifndef _documenttypechecklist_get_list_v1_response_H_
#define _documenttypechecklist_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttypechecklist_get_list_v1_response_t documenttypechecklist_get_list_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "documenttypechecklist_get_list_v1_response_m_payload.h"



typedef struct documenttypechecklist_get_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct documenttypechecklist_get_list_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} documenttypechecklist_get_list_v1_response_t;

__attribute__((deprecated)) documenttypechecklist_get_list_v1_response_t *documenttypechecklist_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    documenttypechecklist_get_list_v1_response_m_payload_t *m_payload
);

void documenttypechecklist_get_list_v1_response_free(documenttypechecklist_get_list_v1_response_t *documenttypechecklist_get_list_v1_response);

documenttypechecklist_get_list_v1_response_t *documenttypechecklist_get_list_v1_response_parseFromJSON(cJSON *documenttypechecklist_get_list_v1_responseJSON);

cJSON *documenttypechecklist_get_list_v1_response_convertToJSON(documenttypechecklist_get_list_v1_response_t *documenttypechecklist_get_list_v1_response);

#endif /* _documenttypechecklist_get_list_v1_response_H_ */

