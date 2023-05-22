/*
 * userstaged_map_v1_request.h
 *
 * Request for POST /1/object/userstaged/{pkiUserstagedID}/map
 */

#ifndef _userstaged_map_v1_request_H_
#define _userstaged_map_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userstaged_map_v1_request_t userstaged_map_v1_request_t;




typedef struct userstaged_map_v1_request_t {
    int fki_user_id; //numeric

} userstaged_map_v1_request_t;

userstaged_map_v1_request_t *userstaged_map_v1_request_create(
    int fki_user_id
);

void userstaged_map_v1_request_free(userstaged_map_v1_request_t *userstaged_map_v1_request);

userstaged_map_v1_request_t *userstaged_map_v1_request_parseFromJSON(cJSON *userstaged_map_v1_requestJSON);

cJSON *userstaged_map_v1_request_convertToJSON(userstaged_map_v1_request_t *userstaged_map_v1_request);

#endif /* _userstaged_map_v1_request_H_ */

