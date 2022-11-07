/*
 * ezsignfoldersignerassociation_response.h
 *
 * An Ezsignfoldersignerassociation Object
 */

#ifndef _ezsignfoldersignerassociation_response_H_
#define _ezsignfoldersignerassociation_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_response_t ezsignfoldersignerassociation_response_t;




typedef struct ezsignfoldersignerassociation_response_t {
    int pki_ezsignfoldersignerassociation_id; //numeric
    int fki_ezsignfolder_id; //numeric
    int b_ezsignfoldersignerassociation_delayedsend; //boolean
    int b_ezsignfoldersignerassociation_receivecopy; //boolean
    char *t_ezsignfoldersignerassociation_message; // string

} ezsignfoldersignerassociation_response_t;

ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_delayedsend,
    int b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message
);

void ezsignfoldersignerassociation_response_free(ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response);

ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response_parseFromJSON(cJSON *ezsignfoldersignerassociation_responseJSON);

cJSON *ezsignfoldersignerassociation_response_convertToJSON(ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response);

#endif /* _ezsignfoldersignerassociation_response_H_ */

