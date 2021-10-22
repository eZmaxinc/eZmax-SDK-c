/*
 * list_save_listpresentation_v1_response_all_of.h
 *
 * 
 */

#ifndef _list_save_listpresentation_v1_response_all_of_H_
#define _list_save_listpresentation_v1_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct list_save_listpresentation_v1_response_all_of_t list_save_listpresentation_v1_response_all_of_t;

#include "list_save_listpresentation_v1_response_m_payload.h"



typedef struct list_save_listpresentation_v1_response_all_of_t {
    struct list_save_listpresentation_v1_response_m_payload_t *m_payload; //model

} list_save_listpresentation_v1_response_all_of_t;

list_save_listpresentation_v1_response_all_of_t *list_save_listpresentation_v1_response_all_of_create(
    list_save_listpresentation_v1_response_m_payload_t *m_payload
);

void list_save_listpresentation_v1_response_all_of_free(list_save_listpresentation_v1_response_all_of_t *list_save_listpresentation_v1_response_all_of);

list_save_listpresentation_v1_response_all_of_t *list_save_listpresentation_v1_response_all_of_parseFromJSON(cJSON *list_save_listpresentation_v1_response_all_ofJSON);

cJSON *list_save_listpresentation_v1_response_all_of_convertToJSON(list_save_listpresentation_v1_response_all_of_t *list_save_listpresentation_v1_response_all_of);

#endif /* _list_save_listpresentation_v1_response_all_of_H_ */

