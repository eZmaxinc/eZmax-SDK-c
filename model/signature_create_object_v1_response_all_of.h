/*
 * signature_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _signature_create_object_v1_response_all_of_H_
#define _signature_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_create_object_v1_response_all_of_t signature_create_object_v1_response_all_of_t;

#include "signature_create_object_v1_response_m_payload.h"



typedef struct signature_create_object_v1_response_all_of_t {
    struct signature_create_object_v1_response_m_payload_t *m_payload; //model

} signature_create_object_v1_response_all_of_t;

signature_create_object_v1_response_all_of_t *signature_create_object_v1_response_all_of_create(
    signature_create_object_v1_response_m_payload_t *m_payload
);

void signature_create_object_v1_response_all_of_free(signature_create_object_v1_response_all_of_t *signature_create_object_v1_response_all_of);

signature_create_object_v1_response_all_of_t *signature_create_object_v1_response_all_of_parseFromJSON(cJSON *signature_create_object_v1_response_all_ofJSON);

cJSON *signature_create_object_v1_response_all_of_convertToJSON(signature_create_object_v1_response_all_of_t *signature_create_object_v1_response_all_of);

#endif /* _signature_create_object_v1_response_all_of_H_ */

