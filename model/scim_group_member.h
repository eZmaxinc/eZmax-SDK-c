/*
 * scim_group_member.h
 *
 * 
 */

#ifndef _scim_group_member_H_
#define _scim_group_member_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scim_group_member_t scim_group_member_t;




typedef struct scim_group_member_t {
    char *value; // string
    char *display; // string
    char *type; // string
    char *ref; // string

} scim_group_member_t;

scim_group_member_t *scim_group_member_create(
    char *value,
    char *display,
    char *type,
    char *ref
);

void scim_group_member_free(scim_group_member_t *scim_group_member);

scim_group_member_t *scim_group_member_parseFromJSON(cJSON *scim_group_memberJSON);

cJSON *scim_group_member_convertToJSON(scim_group_member_t *scim_group_member);

#endif /* _scim_group_member_H_ */

