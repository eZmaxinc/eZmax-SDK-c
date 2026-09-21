/*
 * disclosure_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/disclosure/getList
 */

#ifndef _disclosure_get_list_v1_response_m_payload_H_
#define _disclosure_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct disclosure_get_list_v1_response_m_payload_t disclosure_get_list_v1_response_m_payload_t;

#include "disclosure_list_element.h"



typedef struct disclosure_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_disclosure; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} disclosure_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) disclosure_get_list_v1_response_m_payload_t *disclosure_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_disclosure
);

void disclosure_get_list_v1_response_m_payload_free(disclosure_get_list_v1_response_m_payload_t *disclosure_get_list_v1_response_m_payload);

disclosure_get_list_v1_response_m_payload_t *disclosure_get_list_v1_response_m_payload_parseFromJSON(cJSON *disclosure_get_list_v1_response_m_payloadJSON);

cJSON *disclosure_get_list_v1_response_m_payload_convertToJSON(disclosure_get_list_v1_response_m_payload_t *disclosure_get_list_v1_response_m_payload);

#endif /* _disclosure_get_list_v1_response_m_payload_H_ */

