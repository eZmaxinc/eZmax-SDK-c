/*
 * usergroup_list_element.h
 *
 * A Usergroup List Element
 */

#ifndef _usergroup_list_element_H_
#define _usergroup_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_list_element_t usergroup_list_element_t;




typedef struct usergroup_list_element_t {
    int pki_usergroup_id; //numeric
    char *s_usergroup_name_x; // string
    int i_count_user; //numeric

} usergroup_list_element_t;

usergroup_list_element_t *usergroup_list_element_create(
    int pki_usergroup_id,
    char *s_usergroup_name_x,
    int i_count_user
);

void usergroup_list_element_free(usergroup_list_element_t *usergroup_list_element);

usergroup_list_element_t *usergroup_list_element_parseFromJSON(cJSON *usergroup_list_elementJSON);

cJSON *usergroup_list_element_convertToJSON(usergroup_list_element_t *usergroup_list_element);

#endif /* _usergroup_list_element_H_ */

