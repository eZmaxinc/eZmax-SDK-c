/*
 * branding_get_list_v1_response_m_payload_all_of.h
 *
 * 
 */

#ifndef _branding_get_list_v1_response_m_payload_all_of_H_
#define _branding_get_list_v1_response_m_payload_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_get_list_v1_response_m_payload_all_of_t branding_get_list_v1_response_m_payload_all_of_t;

#include "branding_list_element.h"



typedef struct branding_get_list_v1_response_m_payload_all_of_t {
    list_t *a_obj_branding; //nonprimitive container

} branding_get_list_v1_response_m_payload_all_of_t;

branding_get_list_v1_response_m_payload_all_of_t *branding_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_branding
);

void branding_get_list_v1_response_m_payload_all_of_free(branding_get_list_v1_response_m_payload_all_of_t *branding_get_list_v1_response_m_payload_all_of);

branding_get_list_v1_response_m_payload_all_of_t *branding_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *branding_get_list_v1_response_m_payload_all_ofJSON);

cJSON *branding_get_list_v1_response_m_payload_all_of_convertToJSON(branding_get_list_v1_response_m_payload_all_of_t *branding_get_list_v1_response_m_payload_all_of);

#endif /* _branding_get_list_v1_response_m_payload_all_of_H_ */

