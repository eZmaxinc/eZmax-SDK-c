/*
 * scim_user.h
 *
 * 
 */

#ifndef _scim_user_H_
#define _scim_user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scim_user_t scim_user_t;

#include "scim_email.h"



typedef struct scim_user_t {
    char *id; // string
    char *user_name; // string
    char *display_name; // string
    list_t *emails; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} scim_user_t;

__attribute__((deprecated)) scim_user_t *scim_user_create(
    char *id,
    char *user_name,
    char *display_name,
    list_t *emails
);

void scim_user_free(scim_user_t *scim_user);

scim_user_t *scim_user_parseFromJSON(cJSON *scim_userJSON);

cJSON *scim_user_convertToJSON(scim_user_t *scim_user);

#endif /* _scim_user_H_ */

