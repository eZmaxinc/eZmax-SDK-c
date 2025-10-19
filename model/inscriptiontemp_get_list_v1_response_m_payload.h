/*
 * inscriptiontemp_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/inscriptiontemp/getList
 */

#ifndef _inscriptiontemp_get_list_v1_response_m_payload_H_
#define _inscriptiontemp_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptiontemp_get_list_v1_response_m_payload_t inscriptiontemp_get_list_v1_response_m_payload_t;

#include "inscriptiontemp_list_element.h"



typedef struct inscriptiontemp_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_inscriptiontemp; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptiontemp_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) inscriptiontemp_get_list_v1_response_m_payload_t *inscriptiontemp_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_inscriptiontemp
);

void inscriptiontemp_get_list_v1_response_m_payload_free(inscriptiontemp_get_list_v1_response_m_payload_t *inscriptiontemp_get_list_v1_response_m_payload);

inscriptiontemp_get_list_v1_response_m_payload_t *inscriptiontemp_get_list_v1_response_m_payload_parseFromJSON(cJSON *inscriptiontemp_get_list_v1_response_m_payloadJSON);

cJSON *inscriptiontemp_get_list_v1_response_m_payload_convertToJSON(inscriptiontemp_get_list_v1_response_m_payload_t *inscriptiontemp_get_list_v1_response_m_payload);

#endif /* _inscriptiontemp_get_list_v1_response_m_payload_H_ */

