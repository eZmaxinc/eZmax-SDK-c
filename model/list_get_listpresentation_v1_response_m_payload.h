/*
 * list_get_listpresentation_v1_response_m_payload.h
 *
 * Payload for the GET /1/module/list/listpresentation/{sListName} API Request
 */

#ifndef _list_get_listpresentation_v1_response_m_payload_H_
#define _list_get_listpresentation_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct list_get_listpresentation_v1_response_m_payload_t list_get_listpresentation_v1_response_m_payload_t;

#include "listpresentation_request.h"



typedef struct list_get_listpresentation_v1_response_m_payload_t {
    list_t *a_obj_listpresentation; //nonprimitive container

} list_get_listpresentation_v1_response_m_payload_t;

list_get_listpresentation_v1_response_m_payload_t *list_get_listpresentation_v1_response_m_payload_create(
    list_t *a_obj_listpresentation
);

void list_get_listpresentation_v1_response_m_payload_free(list_get_listpresentation_v1_response_m_payload_t *list_get_listpresentation_v1_response_m_payload);

list_get_listpresentation_v1_response_m_payload_t *list_get_listpresentation_v1_response_m_payload_parseFromJSON(cJSON *list_get_listpresentation_v1_response_m_payloadJSON);

cJSON *list_get_listpresentation_v1_response_m_payload_convertToJSON(list_get_listpresentation_v1_response_m_payload_t *list_get_listpresentation_v1_response_m_payload);

#endif /* _list_get_listpresentation_v1_response_m_payload_H_ */

