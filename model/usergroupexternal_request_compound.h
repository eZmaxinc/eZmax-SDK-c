/*
 * usergroupexternal_request_compound.h
 *
 * A Usergroupexternal Object and children
 */

#ifndef _usergroupexternal_request_compound_H_
#define _usergroupexternal_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_request_compound_t usergroupexternal_request_compound_t;




typedef struct usergroupexternal_request_compound_t {
    int pki_usergroupexternal_id; //numeric
    char *s_usergroupexternal_name; // string
    char *s_usergroupexternal_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupexternal_request_compound_t;

__attribute__((deprecated)) usergroupexternal_request_compound_t *usergroupexternal_request_compound_create(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    char *s_usergroupexternal_id
);

void usergroupexternal_request_compound_free(usergroupexternal_request_compound_t *usergroupexternal_request_compound);

usergroupexternal_request_compound_t *usergroupexternal_request_compound_parseFromJSON(cJSON *usergroupexternal_request_compoundJSON);

cJSON *usergroupexternal_request_compound_convertToJSON(usergroupexternal_request_compound_t *usergroupexternal_request_compound);

#endif /* _usergroupexternal_request_compound_H_ */

