/*
 * branding_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/branding/getList
 */

#ifndef _branding_get_list_v1_response_m_payload_H_
#define _branding_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_get_list_v1_response_m_payload_t branding_get_list_v1_response_m_payload_t;

#include "branding_list_element.h"



typedef struct branding_get_list_v1_response_m_payload_t {
    list_t *a_obj_branding; //nonprimitive container
    int i_row_returned; //numeric
    int i_row_filtered; //numeric

} branding_get_list_v1_response_m_payload_t;

branding_get_list_v1_response_m_payload_t *branding_get_list_v1_response_m_payload_create(
    list_t *a_obj_branding,
    int i_row_returned,
    int i_row_filtered
);

void branding_get_list_v1_response_m_payload_free(branding_get_list_v1_response_m_payload_t *branding_get_list_v1_response_m_payload);

branding_get_list_v1_response_m_payload_t *branding_get_list_v1_response_m_payload_parseFromJSON(cJSON *branding_get_list_v1_response_m_payloadJSON);

cJSON *branding_get_list_v1_response_m_payload_convertToJSON(branding_get_list_v1_response_m_payload_t *branding_get_list_v1_response_m_payload);

#endif /* _branding_get_list_v1_response_m_payload_H_ */

