/*
 * documenttype_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/documenttype/getList
 */

#ifndef _documenttype_get_list_v1_response_m_payload_H_
#define _documenttype_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttype_get_list_v1_response_m_payload_t documenttype_get_list_v1_response_m_payload_t;

#include "documenttype_list_element.h"



typedef struct documenttype_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_documenttype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} documenttype_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) documenttype_get_list_v1_response_m_payload_t *documenttype_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_documenttype
);

void documenttype_get_list_v1_response_m_payload_free(documenttype_get_list_v1_response_m_payload_t *documenttype_get_list_v1_response_m_payload);

documenttype_get_list_v1_response_m_payload_t *documenttype_get_list_v1_response_m_payload_parseFromJSON(cJSON *documenttype_get_list_v1_response_m_payloadJSON);

cJSON *documenttype_get_list_v1_response_m_payload_convertToJSON(documenttype_get_list_v1_response_m_payload_t *documenttype_get_list_v1_response_m_payload);

#endif /* _documenttype_get_list_v1_response_m_payload_H_ */

