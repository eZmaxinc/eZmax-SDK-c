/*
 * domain_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/domain/getList
 */

#ifndef _domain_get_list_v1_response_m_payload_H_
#define _domain_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_get_list_v1_response_m_payload_t domain_get_list_v1_response_m_payload_t;

#include "common_get_list_v1_response_m_payload.h"
#include "domain_list_element.h"



typedef struct domain_get_list_v1_response_m_payload_t {
    int i_row_returned; //numeric
    int i_row_filtered; //numeric
    list_t *a_obj_domain; //nonprimitive container

} domain_get_list_v1_response_m_payload_t;

domain_get_list_v1_response_m_payload_t *domain_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_domain
);

void domain_get_list_v1_response_m_payload_free(domain_get_list_v1_response_m_payload_t *domain_get_list_v1_response_m_payload);

domain_get_list_v1_response_m_payload_t *domain_get_list_v1_response_m_payload_parseFromJSON(cJSON *domain_get_list_v1_response_m_payloadJSON);

cJSON *domain_get_list_v1_response_m_payload_convertToJSON(domain_get_list_v1_response_m_payload_t *domain_get_list_v1_response_m_payload);

#endif /* _domain_get_list_v1_response_m_payload_H_ */

