/*
 * ezmaxmaillinglist_list_element.h
 *
 * A Ezmaxmaillinglist List Element
 */

#ifndef _ezmaxmaillinglist_list_element_H_
#define _ezmaxmaillinglist_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxmaillinglist_list_element_t ezmaxmaillinglist_list_element_t;




typedef struct ezmaxmaillinglist_list_element_t {
    int *pki_ezmaxmaillinglist_id; //numeric
    char *s_ezmaxmaillinglist_name_x; // string
    char *s_ezmaxmaillinglist_description_x; // string
    int *b_ezmaxmaillinglist_subscribed; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxmaillinglist_list_element_t;

__attribute__((deprecated)) ezmaxmaillinglist_list_element_t *ezmaxmaillinglist_list_element_create(
    int *pki_ezmaxmaillinglist_id,
    char *s_ezmaxmaillinglist_name_x,
    char *s_ezmaxmaillinglist_description_x,
    int *b_ezmaxmaillinglist_subscribed
);

void ezmaxmaillinglist_list_element_free(ezmaxmaillinglist_list_element_t *ezmaxmaillinglist_list_element);

ezmaxmaillinglist_list_element_t *ezmaxmaillinglist_list_element_parseFromJSON(cJSON *ezmaxmaillinglist_list_elementJSON);

cJSON *ezmaxmaillinglist_list_element_convertToJSON(ezmaxmaillinglist_list_element_t *ezmaxmaillinglist_list_element);

#endif /* _ezmaxmaillinglist_list_element_H_ */

