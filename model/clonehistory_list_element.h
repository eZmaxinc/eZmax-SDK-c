/*
 * clonehistory_list_element.h
 *
 * A Clonehistory List Element
 */

#ifndef _clonehistory_list_element_H_
#define _clonehistory_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct clonehistory_list_element_t clonehistory_list_element_t;




typedef struct clonehistory_list_element_t {
    int pki_clonehistory_id; //numeric
    int fki_user_id_cloning; //numeric
    int fki_user_id_cloned; //numeric
    char *dt_clonehistory_firsthit; // string
    char *dt_clonehistory_lasthit; // string
    char *s_user_loginname_cloning; // string
    char *s_user_firstname_cloning; // string
    char *s_user_lastname_cloning; // string
    char *s_user_loginname_cloned; // string
    char *s_user_firstname_cloned; // string
    char *s_user_lastname_cloned; // string

    int _library_owned; // Is the library responsible for freeing this object?
} clonehistory_list_element_t;

__attribute__((deprecated)) clonehistory_list_element_t *clonehistory_list_element_create(
    int pki_clonehistory_id,
    int fki_user_id_cloning,
    int fki_user_id_cloned,
    char *dt_clonehistory_firsthit,
    char *dt_clonehistory_lasthit,
    char *s_user_loginname_cloning,
    char *s_user_firstname_cloning,
    char *s_user_lastname_cloning,
    char *s_user_loginname_cloned,
    char *s_user_firstname_cloned,
    char *s_user_lastname_cloned
);

void clonehistory_list_element_free(clonehistory_list_element_t *clonehistory_list_element);

clonehistory_list_element_t *clonehistory_list_element_parseFromJSON(cJSON *clonehistory_list_elementJSON);

cJSON *clonehistory_list_element_convertToJSON(clonehistory_list_element_t *clonehistory_list_element);

#endif /* _clonehistory_list_element_H_ */

