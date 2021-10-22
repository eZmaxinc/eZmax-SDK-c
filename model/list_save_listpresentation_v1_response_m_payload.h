/*
 * list_save_listpresentation_v1_response_m_payload.h
 *
 * Payload for the POST /1/module/list/listpresentation/{sListName} API Request
 */

#ifndef _list_save_listpresentation_v1_response_m_payload_H_
#define _list_save_listpresentation_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct list_save_listpresentation_v1_response_m_payload_t list_save_listpresentation_v1_response_m_payload_t;

#include "listpresentation_request.h"



typedef struct list_save_listpresentation_v1_response_m_payload_t {
    list_t *a_obj_listpresentation; //nonprimitive container

} list_save_listpresentation_v1_response_m_payload_t;

list_save_listpresentation_v1_response_m_payload_t *list_save_listpresentation_v1_response_m_payload_create(
    list_t *a_obj_listpresentation
);

void list_save_listpresentation_v1_response_m_payload_free(list_save_listpresentation_v1_response_m_payload_t *list_save_listpresentation_v1_response_m_payload);

list_save_listpresentation_v1_response_m_payload_t *list_save_listpresentation_v1_response_m_payload_parseFromJSON(cJSON *list_save_listpresentation_v1_response_m_payloadJSON);

cJSON *list_save_listpresentation_v1_response_m_payload_convertToJSON(list_save_listpresentation_v1_response_m_payload_t *list_save_listpresentation_v1_response_m_payload);

#endif /* _list_save_listpresentation_v1_response_m_payload_H_ */

