/*
 * list_save_listpresentation_v1_request.h
 *
 * Request for the POST /1/module/list/listpresentation/{sListName} API Request
 */

#ifndef _list_save_listpresentation_v1_request_H_
#define _list_save_listpresentation_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct list_save_listpresentation_v1_request_t list_save_listpresentation_v1_request_t;

#include "listpresentation_request_compound.h"



typedef struct list_save_listpresentation_v1_request_t {
    list_t *a_obj_listpresentation; //nonprimitive container

} list_save_listpresentation_v1_request_t;

list_save_listpresentation_v1_request_t *list_save_listpresentation_v1_request_create(
    list_t *a_obj_listpresentation
);

void list_save_listpresentation_v1_request_free(list_save_listpresentation_v1_request_t *list_save_listpresentation_v1_request);

list_save_listpresentation_v1_request_t *list_save_listpresentation_v1_request_parseFromJSON(cJSON *list_save_listpresentation_v1_requestJSON);

cJSON *list_save_listpresentation_v1_request_convertToJSON(list_save_listpresentation_v1_request_t *list_save_listpresentation_v1_request);

#endif /* _list_save_listpresentation_v1_request_H_ */

