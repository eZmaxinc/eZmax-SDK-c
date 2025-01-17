/*
 * supply_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/supply/getList
 */

#ifndef _supply_get_list_v1_response_m_payload_H_
#define _supply_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supply_get_list_v1_response_m_payload_t supply_get_list_v1_response_m_payload_t;

#include "supply_list_element.h"



typedef struct supply_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_supply; //nonprimitive container

} supply_get_list_v1_response_m_payload_t;

supply_get_list_v1_response_m_payload_t *supply_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_supply
);

void supply_get_list_v1_response_m_payload_free(supply_get_list_v1_response_m_payload_t *supply_get_list_v1_response_m_payload);

supply_get_list_v1_response_m_payload_t *supply_get_list_v1_response_m_payload_parseFromJSON(cJSON *supply_get_list_v1_response_m_payloadJSON);

cJSON *supply_get_list_v1_response_m_payload_convertToJSON(supply_get_list_v1_response_m_payload_t *supply_get_list_v1_response_m_payload);

#endif /* _supply_get_list_v1_response_m_payload_H_ */

