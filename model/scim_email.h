/*
 * scim_email.h
 *
 * 
 */

#ifndef _scim_email_H_
#define _scim_email_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct scim_email_t scim_email_t;




typedef struct scim_email_t {
    char *value; // string
    int primary; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} scim_email_t;

__attribute__((deprecated)) scim_email_t *scim_email_create(
    char *value,
    int primary
);

void scim_email_free(scim_email_t *scim_email);

scim_email_t *scim_email_parseFromJSON(cJSON *scim_emailJSON);

cJSON *scim_email_convertToJSON(scim_email_t *scim_email);

#endif /* _scim_email_H_ */

