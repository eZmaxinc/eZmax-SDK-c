/*
 * ezsignsignergroupmembership_get_object_v2_response_all_of.h
 *
 * 
 */

#ifndef _ezsignsignergroupmembership_get_object_v2_response_all_of_H_
#define _ezsignsignergroupmembership_get_object_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignergroupmembership_get_object_v2_response_all_of_t ezsignsignergroupmembership_get_object_v2_response_all_of_t;

#include "ezsignsignergroupmembership_get_object_v2_response_m_payload.h"



typedef struct ezsignsignergroupmembership_get_object_v2_response_all_of_t {
    struct ezsignsignergroupmembership_get_object_v2_response_m_payload_t *m_payload; //model

} ezsignsignergroupmembership_get_object_v2_response_all_of_t;

ezsignsignergroupmembership_get_object_v2_response_all_of_t *ezsignsignergroupmembership_get_object_v2_response_all_of_create(
    ezsignsignergroupmembership_get_object_v2_response_m_payload_t *m_payload
);

void ezsignsignergroupmembership_get_object_v2_response_all_of_free(ezsignsignergroupmembership_get_object_v2_response_all_of_t *ezsignsignergroupmembership_get_object_v2_response_all_of);

ezsignsignergroupmembership_get_object_v2_response_all_of_t *ezsignsignergroupmembership_get_object_v2_response_all_of_parseFromJSON(cJSON *ezsignsignergroupmembership_get_object_v2_response_all_ofJSON);

cJSON *ezsignsignergroupmembership_get_object_v2_response_all_of_convertToJSON(ezsignsignergroupmembership_get_object_v2_response_all_of_t *ezsignsignergroupmembership_get_object_v2_response_all_of);

#endif /* _ezsignsignergroupmembership_get_object_v2_response_all_of_H_ */

