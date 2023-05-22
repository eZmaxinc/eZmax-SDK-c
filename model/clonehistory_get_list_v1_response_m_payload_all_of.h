/*
 * clonehistory_get_list_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _clonehistory_get_list_v1_response_m_payload_all_of_H_
#define _clonehistory_get_list_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct clonehistory_get_list_v1_response_m_payload_all_of_t clonehistory_get_list_v1_response_m_payload_all_of_t;

#include "clonehistory_list_element.h"



typedef struct clonehistory_get_list_v1_response_m_payload_all_of_t {
    list_t *a_obj_clonehistory; //nonprimitive container

} clonehistory_get_list_v1_response_m_payload_all_of_t;

clonehistory_get_list_v1_response_m_payload_all_of_t *clonehistory_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_clonehistory
);

void clonehistory_get_list_v1_response_m_payload_all_of_free(clonehistory_get_list_v1_response_m_payload_all_of_t *clonehistory_get_list_v1_response_m_payload_all_of);

clonehistory_get_list_v1_response_m_payload_all_of_t *clonehistory_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *clonehistory_get_list_v1_response_m_payload_all_ofJSON);

cJSON *clonehistory_get_list_v1_response_m_payload_all_of_convertToJSON(clonehistory_get_list_v1_response_m_payload_all_of_t *clonehistory_get_list_v1_response_m_payload_all_of);

#endif /* _clonehistory_get_list_v1_response_m_payload_all_of_H_ */

