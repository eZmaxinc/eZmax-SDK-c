/*
 * usergroupexternal_list_element.h
 *
 * A Usergroupexternal List Element
 */

#ifndef _usergroupexternal_list_element_H_
#define _usergroupexternal_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternal_list_element_t usergroupexternal_list_element_t;




typedef struct usergroupexternal_list_element_t {
    int pki_usergroupexternal_id; //numeric
    char *s_usergroupexternal_name; // string
    char *s_usergroupexternal_id; // string

} usergroupexternal_list_element_t;

usergroupexternal_list_element_t *usergroupexternal_list_element_create(
    int pki_usergroupexternal_id,
    char *s_usergroupexternal_name,
    char *s_usergroupexternal_id
);

void usergroupexternal_list_element_free(usergroupexternal_list_element_t *usergroupexternal_list_element);

usergroupexternal_list_element_t *usergroupexternal_list_element_parseFromJSON(cJSON *usergroupexternal_list_elementJSON);

cJSON *usergroupexternal_list_element_convertToJSON(usergroupexternal_list_element_t *usergroupexternal_list_element);

#endif /* _usergroupexternal_list_element_H_ */

