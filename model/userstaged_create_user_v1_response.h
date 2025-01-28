/*
 * userstaged_create_user_v1_response.h
 *
 * Response for POST /1/object/userstaged/{pkiUserstagedID}/createUser
 */

#ifndef _userstaged_create_user_v1_response_H_
#define _userstaged_create_user_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userstaged_create_user_v1_response_t userstaged_create_user_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "userstaged_create_user_v1_response_m_payload.h"



typedef struct userstaged_create_user_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct userstaged_create_user_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} userstaged_create_user_v1_response_t;

__attribute__((deprecated)) userstaged_create_user_v1_response_t *userstaged_create_user_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    userstaged_create_user_v1_response_m_payload_t *m_payload
);

void userstaged_create_user_v1_response_free(userstaged_create_user_v1_response_t *userstaged_create_user_v1_response);

userstaged_create_user_v1_response_t *userstaged_create_user_v1_response_parseFromJSON(cJSON *userstaged_create_user_v1_responseJSON);

cJSON *userstaged_create_user_v1_response_convertToJSON(userstaged_create_user_v1_response_t *userstaged_create_user_v1_response);

#endif /* _userstaged_create_user_v1_response_H_ */

