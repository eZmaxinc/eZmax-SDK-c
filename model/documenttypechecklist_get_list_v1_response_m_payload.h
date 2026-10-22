/*
 * documenttypechecklist_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/documenttypechecklist/getList
 */

#ifndef _documenttypechecklist_get_list_v1_response_m_payload_H_
#define _documenttypechecklist_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttypechecklist_get_list_v1_response_m_payload_t documenttypechecklist_get_list_v1_response_m_payload_t;

#include "documenttypechecklist_list_element.h"



typedef struct documenttypechecklist_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_documenttypechecklist; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} documenttypechecklist_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) documenttypechecklist_get_list_v1_response_m_payload_t *documenttypechecklist_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_documenttypechecklist
);

void documenttypechecklist_get_list_v1_response_m_payload_free(documenttypechecklist_get_list_v1_response_m_payload_t *documenttypechecklist_get_list_v1_response_m_payload);

documenttypechecklist_get_list_v1_response_m_payload_t *documenttypechecklist_get_list_v1_response_m_payload_parseFromJSON(cJSON *documenttypechecklist_get_list_v1_response_m_payloadJSON);

cJSON *documenttypechecklist_get_list_v1_response_m_payload_convertToJSON(documenttypechecklist_get_list_v1_response_m_payload_t *documenttypechecklist_get_list_v1_response_m_payload);

#endif /* _documenttypechecklist_get_list_v1_response_m_payload_H_ */

