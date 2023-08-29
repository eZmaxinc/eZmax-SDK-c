/*
 * activesession_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/activesession/getList
 */

#ifndef _activesession_get_list_v1_response_m_payload_H_
#define _activesession_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_get_list_v1_response_m_payload_t activesession_get_list_v1_response_m_payload_t;

#include "activesession_list_element.h"



typedef struct activesession_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_activesession; //nonprimitive container

} activesession_get_list_v1_response_m_payload_t;

activesession_get_list_v1_response_m_payload_t *activesession_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_activesession
);

void activesession_get_list_v1_response_m_payload_free(activesession_get_list_v1_response_m_payload_t *activesession_get_list_v1_response_m_payload);

activesession_get_list_v1_response_m_payload_t *activesession_get_list_v1_response_m_payload_parseFromJSON(cJSON *activesession_get_list_v1_response_m_payloadJSON);

cJSON *activesession_get_list_v1_response_m_payload_convertToJSON(activesession_get_list_v1_response_m_payload_t *activesession_get_list_v1_response_m_payload);

#endif /* _activesession_get_list_v1_response_m_payload_H_ */

