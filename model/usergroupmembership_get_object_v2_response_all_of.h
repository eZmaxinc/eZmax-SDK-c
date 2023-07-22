/*
 * usergroupmembership_get_object_v2_response_all_of.h
 *
 * 
 */

#ifndef _usergroupmembership_get_object_v2_response_all_of_H_
#define _usergroupmembership_get_object_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupmembership_get_object_v2_response_all_of_t usergroupmembership_get_object_v2_response_all_of_t;

#include "usergroupmembership_get_object_v2_response_m_payload.h"



typedef struct usergroupmembership_get_object_v2_response_all_of_t {
    struct usergroupmembership_get_object_v2_response_m_payload_t *m_payload; //model

} usergroupmembership_get_object_v2_response_all_of_t;

usergroupmembership_get_object_v2_response_all_of_t *usergroupmembership_get_object_v2_response_all_of_create(
    usergroupmembership_get_object_v2_response_m_payload_t *m_payload
);

void usergroupmembership_get_object_v2_response_all_of_free(usergroupmembership_get_object_v2_response_all_of_t *usergroupmembership_get_object_v2_response_all_of);

usergroupmembership_get_object_v2_response_all_of_t *usergroupmembership_get_object_v2_response_all_of_parseFromJSON(cJSON *usergroupmembership_get_object_v2_response_all_ofJSON);

cJSON *usergroupmembership_get_object_v2_response_all_of_convertToJSON(usergroupmembership_get_object_v2_response_all_of_t *usergroupmembership_get_object_v2_response_all_of);

#endif /* _usergroupmembership_get_object_v2_response_all_of_H_ */

