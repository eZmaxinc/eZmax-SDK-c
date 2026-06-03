/*
 * inscription_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/inscription/getList
 */

#ifndef _inscription_get_list_v1_response_m_payload_H_
#define _inscription_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscription_get_list_v1_response_m_payload_t inscription_get_list_v1_response_m_payload_t;

#include "inscription_list_element.h"



typedef struct inscription_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_inscription; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscription_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) inscription_get_list_v1_response_m_payload_t *inscription_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_inscription
);

void inscription_get_list_v1_response_m_payload_free(inscription_get_list_v1_response_m_payload_t *inscription_get_list_v1_response_m_payload);

inscription_get_list_v1_response_m_payload_t *inscription_get_list_v1_response_m_payload_parseFromJSON(cJSON *inscription_get_list_v1_response_m_payloadJSON);

cJSON *inscription_get_list_v1_response_m_payload_convertToJSON(inscription_get_list_v1_response_m_payload_t *inscription_get_list_v1_response_m_payload);

#endif /* _inscription_get_list_v1_response_m_payload_H_ */

