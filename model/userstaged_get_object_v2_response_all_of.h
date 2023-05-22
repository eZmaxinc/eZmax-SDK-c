/*
 * userstaged_get_object_v2_response_all_of.h
 *
 * 
 */

#ifndef _userstaged_get_object_v2_response_all_of_H_
#define _userstaged_get_object_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userstaged_get_object_v2_response_all_of_t userstaged_get_object_v2_response_all_of_t;

#include "userstaged_get_object_v2_response_m_payload.h"



typedef struct userstaged_get_object_v2_response_all_of_t {
    struct userstaged_get_object_v2_response_m_payload_t *m_payload; //model

} userstaged_get_object_v2_response_all_of_t;

userstaged_get_object_v2_response_all_of_t *userstaged_get_object_v2_response_all_of_create(
    userstaged_get_object_v2_response_m_payload_t *m_payload
);

void userstaged_get_object_v2_response_all_of_free(userstaged_get_object_v2_response_all_of_t *userstaged_get_object_v2_response_all_of);

userstaged_get_object_v2_response_all_of_t *userstaged_get_object_v2_response_all_of_parseFromJSON(cJSON *userstaged_get_object_v2_response_all_ofJSON);

cJSON *userstaged_get_object_v2_response_all_of_convertToJSON(userstaged_get_object_v2_response_all_of_t *userstaged_get_object_v2_response_all_of);

#endif /* _userstaged_get_object_v2_response_all_of_H_ */

