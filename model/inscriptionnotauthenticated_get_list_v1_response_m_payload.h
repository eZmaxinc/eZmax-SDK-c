/*
 * inscriptionnotauthenticated_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/inscriptionnotauthenticated/getList
 */

#ifndef _inscriptionnotauthenticated_get_list_v1_response_m_payload_H_
#define _inscriptionnotauthenticated_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionnotauthenticated_get_list_v1_response_m_payload_t inscriptionnotauthenticated_get_list_v1_response_m_payload_t;

#include "inscriptionnotauthenticated_list_element.h"



typedef struct inscriptionnotauthenticated_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_inscriptionnotauthenticated; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionnotauthenticated_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) inscriptionnotauthenticated_get_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_inscriptionnotauthenticated
);

void inscriptionnotauthenticated_get_list_v1_response_m_payload_free(inscriptionnotauthenticated_get_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_list_v1_response_m_payload);

inscriptionnotauthenticated_get_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_list_v1_response_m_payload_parseFromJSON(cJSON *inscriptionnotauthenticated_get_list_v1_response_m_payloadJSON);

cJSON *inscriptionnotauthenticated_get_list_v1_response_m_payload_convertToJSON(inscriptionnotauthenticated_get_list_v1_response_m_payload_t *inscriptionnotauthenticated_get_list_v1_response_m_payload);

#endif /* _inscriptionnotauthenticated_get_list_v1_response_m_payload_H_ */

