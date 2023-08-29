/*
 * userstaged_get_list_v1_response.h
 *
 * Response for GET /1/object/userstaged/getList
 */

#ifndef _userstaged_get_list_v1_response_H_
#define _userstaged_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userstaged_get_list_v1_response_t userstaged_get_list_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "userstaged_get_list_v1_response_m_payload.h"



typedef struct userstaged_get_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct userstaged_get_list_v1_response_m_payload_t *m_payload; //model

} userstaged_get_list_v1_response_t;

userstaged_get_list_v1_response_t *userstaged_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    userstaged_get_list_v1_response_m_payload_t *m_payload
);

void userstaged_get_list_v1_response_free(userstaged_get_list_v1_response_t *userstaged_get_list_v1_response);

userstaged_get_list_v1_response_t *userstaged_get_list_v1_response_parseFromJSON(cJSON *userstaged_get_list_v1_responseJSON);

cJSON *userstaged_get_list_v1_response_convertToJSON(userstaged_get_list_v1_response_t *userstaged_get_list_v1_response);

#endif /* _userstaged_get_list_v1_response_H_ */

