/*
 * billingentityinternal_get_list_v1_response_all_of.h
 *
 * 
 */

#ifndef _billingentityinternal_get_list_v1_response_all_of_H_
#define _billingentityinternal_get_list_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_get_list_v1_response_all_of_t billingentityinternal_get_list_v1_response_all_of_t;

#include "billingentityinternal_get_list_v1_response_m_payload.h"



typedef struct billingentityinternal_get_list_v1_response_all_of_t {
    struct billingentityinternal_get_list_v1_response_m_payload_t *m_payload; //model

} billingentityinternal_get_list_v1_response_all_of_t;

billingentityinternal_get_list_v1_response_all_of_t *billingentityinternal_get_list_v1_response_all_of_create(
    billingentityinternal_get_list_v1_response_m_payload_t *m_payload
);

void billingentityinternal_get_list_v1_response_all_of_free(billingentityinternal_get_list_v1_response_all_of_t *billingentityinternal_get_list_v1_response_all_of);

billingentityinternal_get_list_v1_response_all_of_t *billingentityinternal_get_list_v1_response_all_of_parseFromJSON(cJSON *billingentityinternal_get_list_v1_response_all_ofJSON);

cJSON *billingentityinternal_get_list_v1_response_all_of_convertToJSON(billingentityinternal_get_list_v1_response_all_of_t *billingentityinternal_get_list_v1_response_all_of);

#endif /* _billingentityinternal_get_list_v1_response_all_of_H_ */

