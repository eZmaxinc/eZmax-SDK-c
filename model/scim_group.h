/*
 * scim_group.h
 *
 * 
 */

#ifndef _scim_group_H_
#define _scim_group_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scim_group_t scim_group_t;

#include "scim_group_member.h"



typedef struct scim_group_t {
    char *id; // string
    char *display_name; // string
    list_t *members; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} scim_group_t;

__attribute__((deprecated)) scim_group_t *scim_group_create(
    char *id,
    char *display_name,
    list_t *members
);

void scim_group_free(scim_group_t *scim_group);

scim_group_t *scim_group_parseFromJSON(cJSON *scim_groupJSON);

cJSON *scim_group_convertToJSON(scim_group_t *scim_group);

#endif /* _scim_group_H_ */

