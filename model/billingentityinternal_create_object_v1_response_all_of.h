/*
 * billingentityinternal_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _billingentityinternal_create_object_v1_response_all_of_H_
#define _billingentityinternal_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct billingentityinternal_create_object_v1_response_all_of_t billingentityinternal_create_object_v1_response_all_of_t;

#include "billingentityinternal_create_object_v1_response_m_payload.h"



typedef struct billingentityinternal_create_object_v1_response_all_of_t {
    struct billingentityinternal_create_object_v1_response_m_payload_t *m_payload; //model

} billingentityinternal_create_object_v1_response_all_of_t;

billingentityinternal_create_object_v1_response_all_of_t *billingentityinternal_create_object_v1_response_all_of_create(
    billingentityinternal_create_object_v1_response_m_payload_t *m_payload
);

void billingentityinternal_create_object_v1_response_all_of_free(billingentityinternal_create_object_v1_response_all_of_t *billingentityinternal_create_object_v1_response_all_of);

billingentityinternal_create_object_v1_response_all_of_t *billingentityinternal_create_object_v1_response_all_of_parseFromJSON(cJSON *billingentityinternal_create_object_v1_response_all_ofJSON);

cJSON *billingentityinternal_create_object_v1_response_all_of_convertToJSON(billingentityinternal_create_object_v1_response_all_of_t *billingentityinternal_create_object_v1_response_all_of);

#endif /* _billingentityinternal_create_object_v1_response_all_of_H_ */

