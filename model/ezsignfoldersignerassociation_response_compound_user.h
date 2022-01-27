/*
 * ezsignfoldersignerassociation_response_compound_user.h
 *
 * A Ezsignfoldersignerassociation-&gt;User Object and children to create a complete structure
 */

#ifndef _ezsignfoldersignerassociation_response_compound_user_H_
#define _ezsignfoldersignerassociation_response_compound_user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_response_compound_user_t ezsignfoldersignerassociation_response_compound_user_t;




typedef struct ezsignfoldersignerassociation_response_compound_user_t {
    int pki_user_id; //numeric
    int fki_language_id; //numeric
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_email_address; // string

} ezsignfoldersignerassociation_response_compound_user_t;

ezsignfoldersignerassociation_response_compound_user_t *ezsignfoldersignerassociation_response_compound_user_create(
    int pki_user_id,
    int fki_language_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address
);

void ezsignfoldersignerassociation_response_compound_user_free(ezsignfoldersignerassociation_response_compound_user_t *ezsignfoldersignerassociation_response_compound_user);

ezsignfoldersignerassociation_response_compound_user_t *ezsignfoldersignerassociation_response_compound_user_parseFromJSON(cJSON *ezsignfoldersignerassociation_response_compound_userJSON);

cJSON *ezsignfoldersignerassociation_response_compound_user_convertToJSON(ezsignfoldersignerassociation_response_compound_user_t *ezsignfoldersignerassociation_response_compound_user);

#endif /* _ezsignfoldersignerassociation_response_compound_user_H_ */

