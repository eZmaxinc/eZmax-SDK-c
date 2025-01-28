/*
 * userstaged_response.h
 *
 * A Userstaged Object
 */

#ifndef _userstaged_response_H_
#define _userstaged_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userstaged_response_t userstaged_response_t;




typedef struct userstaged_response_t {
    int pki_userstaged_id; //numeric
    int fki_email_id; //numeric
    char *s_email_address; // string
    char *s_userstaged_firstname; // string
    char *s_userstaged_lastname; // string
    char *s_userstaged_externalid; // string

    int _library_owned; // Is the library responsible for freeing this object?
} userstaged_response_t;

__attribute__((deprecated)) userstaged_response_t *userstaged_response_create(
    int pki_userstaged_id,
    int fki_email_id,
    char *s_email_address,
    char *s_userstaged_firstname,
    char *s_userstaged_lastname,
    char *s_userstaged_externalid
);

void userstaged_response_free(userstaged_response_t *userstaged_response);

userstaged_response_t *userstaged_response_parseFromJSON(cJSON *userstaged_responseJSON);

cJSON *userstaged_response_convertToJSON(userstaged_response_t *userstaged_response);

#endif /* _userstaged_response_H_ */

