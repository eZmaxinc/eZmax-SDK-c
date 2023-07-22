/*
 * usergroupmembership_create_object_v1_response_all_of.h
 *
 * 
 */

#ifndef _usergroupmembership_create_object_v1_response_all_of_H_
#define _usergroupmembership_create_object_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupmembership_create_object_v1_response_all_of_t usergroupmembership_create_object_v1_response_all_of_t;

#include "usergroupmembership_create_object_v1_response_m_payload.h"



typedef struct usergroupmembership_create_object_v1_response_all_of_t {
    struct usergroupmembership_create_object_v1_response_m_payload_t *m_payload; //model

} usergroupmembership_create_object_v1_response_all_of_t;

usergroupmembership_create_object_v1_response_all_of_t *usergroupmembership_create_object_v1_response_all_of_create(
    usergroupmembership_create_object_v1_response_m_payload_t *m_payload
);

void usergroupmembership_create_object_v1_response_all_of_free(usergroupmembership_create_object_v1_response_all_of_t *usergroupmembership_create_object_v1_response_all_of);

usergroupmembership_create_object_v1_response_all_of_t *usergroupmembership_create_object_v1_response_all_of_parseFromJSON(cJSON *usergroupmembership_create_object_v1_response_all_ofJSON);

cJSON *usergroupmembership_create_object_v1_response_all_of_convertToJSON(usergroupmembership_create_object_v1_response_all_of_t *usergroupmembership_create_object_v1_response_all_of);

#endif /* _usergroupmembership_create_object_v1_response_all_of_H_ */

