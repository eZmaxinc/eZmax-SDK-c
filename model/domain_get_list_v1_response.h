/*
 * domain_get_list_v1_response.h
 *
 * Response for GET /1/object/domain/getList
 */

#ifndef _domain_get_list_v1_response_H_
#define _domain_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct domain_get_list_v1_response_t domain_get_list_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "domain_get_list_v1_response_m_payload.h"



typedef struct domain_get_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct domain_get_list_v1_response_m_payload_t *m_payload; //model

} domain_get_list_v1_response_t;

domain_get_list_v1_response_t *domain_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    domain_get_list_v1_response_m_payload_t *m_payload
);

void domain_get_list_v1_response_free(domain_get_list_v1_response_t *domain_get_list_v1_response);

domain_get_list_v1_response_t *domain_get_list_v1_response_parseFromJSON(cJSON *domain_get_list_v1_responseJSON);

cJSON *domain_get_list_v1_response_convertToJSON(domain_get_list_v1_response_t *domain_get_list_v1_response);

#endif /* _domain_get_list_v1_response_H_ */

