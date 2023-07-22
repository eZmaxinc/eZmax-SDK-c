/*
 * scim_user_list.h
 *
 * 
 */

#ifndef _scim_user_list_H_
#define _scim_user_list_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scim_user_list_t scim_user_list_t;

#include "scim_user.h"



typedef struct scim_user_list_t {
    int total_results; //numeric
    int items_per_page; //numeric
    int start_index; //numeric
    list_t *schemas; //primitive container
    list_t *resources; //nonprimitive container

} scim_user_list_t;

scim_user_list_t *scim_user_list_create(
    int total_results,
    int items_per_page,
    int start_index,
    list_t *schemas,
    list_t *resources
);

void scim_user_list_free(scim_user_list_t *scim_user_list);

scim_user_list_t *scim_user_list_parseFromJSON(cJSON *scim_user_listJSON);

cJSON *scim_user_list_convertToJSON(scim_user_list_t *scim_user_list);

#endif /* _scim_user_list_H_ */

