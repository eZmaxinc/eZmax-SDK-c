/*
 * deposit_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/deposit/getList
 */

#ifndef _deposit_get_list_v1_response_m_payload_H_
#define _deposit_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposit_get_list_v1_response_m_payload_t deposit_get_list_v1_response_m_payload_t;

#include "deposit_list_element.h"



typedef struct deposit_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_deposit; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} deposit_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) deposit_get_list_v1_response_m_payload_t *deposit_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_deposit
);

void deposit_get_list_v1_response_m_payload_free(deposit_get_list_v1_response_m_payload_t *deposit_get_list_v1_response_m_payload);

deposit_get_list_v1_response_m_payload_t *deposit_get_list_v1_response_m_payload_parseFromJSON(cJSON *deposit_get_list_v1_response_m_payloadJSON);

cJSON *deposit_get_list_v1_response_m_payload_convertToJSON(deposit_get_list_v1_response_m_payload_t *deposit_get_list_v1_response_m_payload);

#endif /* _deposit_get_list_v1_response_m_payload_H_ */

