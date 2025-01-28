/*
 * usergroupexternal_response.h
 *
 * A Usergroupexternal Object
 */

#ifndef _usergroupexternal_response_H_
#define _usergroupexternal_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_response_t usergroupexternal_response_t;




typedef struct usergroupexternal_response_t {
    int pki_usergroupexternal_id; //numeric
    char *s_usergroupexternal_name; // string
    char *s_usergroupexternal_id; // string

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupexternal_response_t;

__attribute__((deprecated)) usergroupexternal_response_t *usergroupexternal_response_create(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    char *s_usergroupexternal_id
);

void usergroupexternal_response_free(usergroupexternal_response_t *usergroupexternal_response);

usergroupexternal_response_t *usergroupexternal_response_parseFromJSON(cJSON *usergroupexternal_responseJSON);

cJSON *usergroupexternal_response_convertToJSON(usergroupexternal_response_t *usergroupexternal_response);

#endif /* _usergroupexternal_response_H_ */

