/*
 * apikey_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/apikey/getList
 */

#ifndef _apikey_get_list_v1_response_m_payload_H_
#define _apikey_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_get_list_v1_response_m_payload_t apikey_get_list_v1_response_m_payload_t;

#include "apikey_list_element.h"



typedef struct apikey_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_apikey; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} apikey_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) apikey_get_list_v1_response_m_payload_t *apikey_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_apikey
);

void apikey_get_list_v1_response_m_payload_free(apikey_get_list_v1_response_m_payload_t *apikey_get_list_v1_response_m_payload);

apikey_get_list_v1_response_m_payload_t *apikey_get_list_v1_response_m_payload_parseFromJSON(cJSON *apikey_get_list_v1_response_m_payloadJSON);

cJSON *apikey_get_list_v1_response_m_payload_convertToJSON(apikey_get_list_v1_response_m_payload_t *apikey_get_list_v1_response_m_payload);

#endif /* _apikey_get_list_v1_response_m_payload_H_ */

