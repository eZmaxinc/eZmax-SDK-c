/*
 * list_get_listpresentation_v1_response.h
 *
 * Response for the GET /1/module/list/listpresentation/{sListName} API Request
 */

#ifndef _list_get_listpresentation_v1_response_H_
#define _list_get_listpresentation_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct list_get_listpresentation_v1_response_t list_get_listpresentation_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "list_get_listpresentation_v1_response_all_of.h"
#include "list_get_listpresentation_v1_response_m_payload.h"



typedef struct list_get_listpresentation_v1_response_t {
    struct list_get_listpresentation_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} list_get_listpresentation_v1_response_t;

list_get_listpresentation_v1_response_t *list_get_listpresentation_v1_response_create(
    list_get_listpresentation_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void list_get_listpresentation_v1_response_free(list_get_listpresentation_v1_response_t *list_get_listpresentation_v1_response);

list_get_listpresentation_v1_response_t *list_get_listpresentation_v1_response_parseFromJSON(cJSON *list_get_listpresentation_v1_responseJSON);

cJSON *list_get_listpresentation_v1_response_convertToJSON(list_get_listpresentation_v1_response_t *list_get_listpresentation_v1_response);

#endif /* _list_get_listpresentation_v1_response_H_ */

