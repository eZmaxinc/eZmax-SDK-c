/*
 * ezsignsignergroup_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _ezsignsignergroup_create_object_v1_response_all_of_H_
#define _ezsignsignergroup_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroup_create_object_v1_response_all_of_t ezsignsignergroup_create_object_v1_response_all_of_t;

#include "ezsignsignergroup_create_object_v1_response_m_payload.h"



typedef struct ezsignsignergroup_create_object_v1_response_all_of_t {
    struct ezsignsignergroup_create_object_v1_response_m_payload_t *m_payload; //model

} ezsignsignergroup_create_object_v1_response_all_of_t;

ezsignsignergroup_create_object_v1_response_all_of_t *ezsignsignergroup_create_object_v1_response_all_of_create(
    ezsignsignergroup_create_object_v1_response_m_payload_t *m_payload
);

void ezsignsignergroup_create_object_v1_response_all_of_free(ezsignsignergroup_create_object_v1_response_all_of_t *ezsignsignergroup_create_object_v1_response_all_of);

ezsignsignergroup_create_object_v1_response_all_of_t *ezsignsignergroup_create_object_v1_response_all_of_parseFromJSON(cJSON *ezsignsignergroup_create_object_v1_response_all_ofJSON);

cJSON *ezsignsignergroup_create_object_v1_response_all_of_convertToJSON(ezsignsignergroup_create_object_v1_response_all_of_t *ezsignsignergroup_create_object_v1_response_all_of);

#endif /* _ezsignsignergroup_create_object_v1_response_all_of_H_ */

