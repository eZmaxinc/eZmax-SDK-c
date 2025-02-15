/*
 * usergroupexternalmembership_response_compound.h
 *
 * A Usergroupexternalmembership Object
 */

#ifndef _usergroupexternalmembership_response_compound_H_
#define _usergroupexternalmembership_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroupexternalmembership_response_compound_t usergroupexternalmembership_response_compound_t;




typedef struct usergroupexternalmembership_response_compound_t {
    int pki_usergroupexternalmembership_id; //numeric
    int fki_usergroupexternal_id; //numeric
    int fki_user_id; //numeric
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_user_loginname; // string
    char *s_email_address; // string
    char *s_usergroupexternal_name; // string

    int _library_owned; // Is the library responsible for freeing this object?
} usergroupexternalmembership_response_compound_t;

__attribute__((deprecated)) usergroupexternalmembership_response_compound_t *usergroupexternalmembership_response_compound_create(
    int pki_usergroupexternalmembership_id,
    int fki_usergroupexternal_id,
    int fki_user_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    char *s_email_address,
    char *s_usergroupexternal_name
);

void usergroupexternalmembership_response_compound_free(usergroupexternalmembership_response_compound_t *usergroupexternalmembership_response_compound);

usergroupexternalmembership_response_compound_t *usergroupexternalmembership_response_compound_parseFromJSON(cJSON *usergroupexternalmembership_response_compoundJSON);

cJSON *usergroupexternalmembership_response_compound_convertToJSON(usergroupexternalmembership_response_compound_t *usergroupexternalmembership_response_compound);

#endif /* _usergroupexternalmembership_response_compound_H_ */

