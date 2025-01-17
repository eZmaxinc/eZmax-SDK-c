/*
 * usergroupexternal_response_compound.h
 *
 * A Usergroupexternal Object
 */

#ifndef _usergroupexternal_response_compound_H_
#define _usergroupexternal_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_response_compound_t usergroupexternal_response_compound_t;

#include "usergroupexternal_response.h"



typedef struct usergroupexternal_response_compound_t {
    int pki_usergroupexternal_id; //numeric
    char *s_usergroupexternal_name; // string
    char *s_usergroupexternal_id; // string

} usergroupexternal_response_compound_t;

usergroupexternal_response_compound_t *usergroupexternal_response_compound_create(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    char *s_usergroupexternal_id
);

void usergroupexternal_response_compound_free(usergroupexternal_response_compound_t *usergroupexternal_response_compound);

usergroupexternal_response_compound_t *usergroupexternal_response_compound_parseFromJSON(cJSON *usergroupexternal_response_compoundJSON);

cJSON *usergroupexternal_response_compound_convertToJSON(usergroupexternal_response_compound_t *usergroupexternal_response_compound);

#endif /* _usergroupexternal_response_compound_H_ */

