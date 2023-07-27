/*
 * apikey_get_list_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _apikey_get_list_v1_response_m_payload_all_of_H_
#define _apikey_get_list_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_get_list_v1_response_m_payload_all_of_t apikey_get_list_v1_response_m_payload_all_of_t;

#include "apikey_list_element.h"



typedef struct apikey_get_list_v1_response_m_payload_all_of_t {
    list_t *a_obj_apikey; //nonprimitive container

} apikey_get_list_v1_response_m_payload_all_of_t;

apikey_get_list_v1_response_m_payload_all_of_t *apikey_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_apikey
);

void apikey_get_list_v1_response_m_payload_all_of_free(apikey_get_list_v1_response_m_payload_all_of_t *apikey_get_list_v1_response_m_payload_all_of);

apikey_get_list_v1_response_m_payload_all_of_t *apikey_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *apikey_get_list_v1_response_m_payload_all_ofJSON);

cJSON *apikey_get_list_v1_response_m_payload_all_of_convertToJSON(apikey_get_list_v1_response_m_payload_all_of_t *apikey_get_list_v1_response_m_payload_all_of);

#endif /* _apikey_get_list_v1_response_m_payload_all_of_H_ */

