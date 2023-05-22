/*
 * userstaged_list_element.h
 *
 * A Userstaged List Element
 */

#ifndef _userstaged_list_element_H_
#define _userstaged_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userstaged_list_element_t userstaged_list_element_t;




typedef struct userstaged_list_element_t {
    int pki_userstaged_id; //numeric
    char *s_email_address; // string
    char *s_userstaged_firstname; // string
    char *s_userstaged_lastname; // string
    char *s_userstaged_externalid; // string

} userstaged_list_element_t;

userstaged_list_element_t *userstaged_list_element_create(
    int pki_userstaged_id,
    char *s_email_address,
    char *s_userstaged_firstname,
    char *s_userstaged_lastname,
    char *s_userstaged_externalid
);

void userstaged_list_element_free(userstaged_list_element_t *userstaged_list_element);

userstaged_list_element_t *userstaged_list_element_parseFromJSON(cJSON *userstaged_list_elementJSON);

cJSON *userstaged_list_element_convertToJSON(userstaged_list_element_t *userstaged_list_element);

#endif /* _userstaged_list_element_H_ */

