/*
 * ezsignsignergroup_get_object_v2_response_all_of.h
 *
 * 
 */

#ifndef _ezsignsignergroup_get_object_v2_response_all_of_H_
#define _ezsignsignergroup_get_object_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroup_get_object_v2_response_all_of_t ezsignsignergroup_get_object_v2_response_all_of_t;

#include "ezsignsignergroup_get_object_v2_response_m_payload.h"



typedef struct ezsignsignergroup_get_object_v2_response_all_of_t {
    struct ezsignsignergroup_get_object_v2_response_m_payload_t *m_payload; //model

} ezsignsignergroup_get_object_v2_response_all_of_t;

ezsignsignergroup_get_object_v2_response_all_of_t *ezsignsignergroup_get_object_v2_response_all_of_create(
    ezsignsignergroup_get_object_v2_response_m_payload_t *m_payload
);

void ezsignsignergroup_get_object_v2_response_all_of_free(ezsignsignergroup_get_object_v2_response_all_of_t *ezsignsignergroup_get_object_v2_response_all_of);

ezsignsignergroup_get_object_v2_response_all_of_t *ezsignsignergroup_get_object_v2_response_all_of_parseFromJSON(cJSON *ezsignsignergroup_get_object_v2_response_all_ofJSON);

cJSON *ezsignsignergroup_get_object_v2_response_all_of_convertToJSON(ezsignsignergroup_get_object_v2_response_all_of_t *ezsignsignergroup_get_object_v2_response_all_of);

#endif /* _ezsignsignergroup_get_object_v2_response_all_of_H_ */

