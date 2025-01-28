/*
 * usergroupexternal_request.h
 *
 * A Usergroupexternal Object
 */

#ifndef _usergroupexternal_request_H_
#define _usergroupexternal_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_request_t usergroupexternal_request_t;




typedef struct usergroupexternal_request_t {
    int pki_usergroupexternal_id; //numeric
    char *s_usergroupexternal_name; // string
    char *s_usergroupexternal_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupexternal_request_t;

__attribute__((deprecated)) usergroupexternal_request_t *usergroupexternal_request_create(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    char *s_usergroupexternal_id
);

void usergroupexternal_request_free(usergroupexternal_request_t *usergroupexternal_request);

usergroupexternal_request_t *usergroupexternal_request_parseFromJSON(cJSON *usergroupexternal_requestJSON);

cJSON *usergroupexternal_request_convertToJSON(usergroupexternal_request_t *usergroupexternal_request);

#endif /* _usergroupexternal_request_H_ */

