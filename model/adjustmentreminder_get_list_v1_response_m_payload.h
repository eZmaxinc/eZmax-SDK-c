/*
 * adjustmentreminder_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/adjustmentreminder/getList
 */

#ifndef _adjustmentreminder_get_list_v1_response_m_payload_H_
#define _adjustmentreminder_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct adjustmentreminder_get_list_v1_response_m_payload_t adjustmentreminder_get_list_v1_response_m_payload_t;

#include "adjustmentreminder_list_element.h"



typedef struct adjustmentreminder_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_adjustmentreminder; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} adjustmentreminder_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) adjustmentreminder_get_list_v1_response_m_payload_t *adjustmentreminder_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_adjustmentreminder
);

void adjustmentreminder_get_list_v1_response_m_payload_free(adjustmentreminder_get_list_v1_response_m_payload_t *adjustmentreminder_get_list_v1_response_m_payload);

adjustmentreminder_get_list_v1_response_m_payload_t *adjustmentreminder_get_list_v1_response_m_payload_parseFromJSON(cJSON *adjustmentreminder_get_list_v1_response_m_payloadJSON);

cJSON *adjustmentreminder_get_list_v1_response_m_payload_convertToJSON(adjustmentreminder_get_list_v1_response_m_payload_t *adjustmentreminder_get_list_v1_response_m_payload);

#endif /* _adjustmentreminder_get_list_v1_response_m_payload_H_ */

