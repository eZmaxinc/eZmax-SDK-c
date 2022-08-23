/*
 * branding_get_list_v1_response_all_of.h
 *
 * 
 */

#ifndef _branding_get_list_v1_response_all_of_H_
#define _branding_get_list_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_get_list_v1_response_all_of_t branding_get_list_v1_response_all_of_t;

#include "branding_get_list_v1_response_m_payload.h"



typedef struct branding_get_list_v1_response_all_of_t {
    struct branding_get_list_v1_response_m_payload_t *m_payload; //model

} branding_get_list_v1_response_all_of_t;

branding_get_list_v1_response_all_of_t *branding_get_list_v1_response_all_of_create(
    branding_get_list_v1_response_m_payload_t *m_payload
);

void branding_get_list_v1_response_all_of_free(branding_get_list_v1_response_all_of_t *branding_get_list_v1_response_all_of);

branding_get_list_v1_response_all_of_t *branding_get_list_v1_response_all_of_parseFromJSON(cJSON *branding_get_list_v1_response_all_ofJSON);

cJSON *branding_get_list_v1_response_all_of_convertToJSON(branding_get_list_v1_response_all_of_t *branding_get_list_v1_response_all_of);

#endif /* _branding_get_list_v1_response_all_of_H_ */

