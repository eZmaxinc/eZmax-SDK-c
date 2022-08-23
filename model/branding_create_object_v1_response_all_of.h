/*
 * branding_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _branding_create_object_v1_response_all_of_H_
#define _branding_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_create_object_v1_response_all_of_t branding_create_object_v1_response_all_of_t;

#include "branding_create_object_v1_response_m_payload.h"



typedef struct branding_create_object_v1_response_all_of_t {
    struct branding_create_object_v1_response_m_payload_t *m_payload; //model

} branding_create_object_v1_response_all_of_t;

branding_create_object_v1_response_all_of_t *branding_create_object_v1_response_all_of_create(
    branding_create_object_v1_response_m_payload_t *m_payload
);

void branding_create_object_v1_response_all_of_free(branding_create_object_v1_response_all_of_t *branding_create_object_v1_response_all_of);

branding_create_object_v1_response_all_of_t *branding_create_object_v1_response_all_of_parseFromJSON(cJSON *branding_create_object_v1_response_all_ofJSON);

cJSON *branding_create_object_v1_response_all_of_convertToJSON(branding_create_object_v1_response_all_of_t *branding_create_object_v1_response_all_of);

#endif /* _branding_create_object_v1_response_all_of_H_ */

