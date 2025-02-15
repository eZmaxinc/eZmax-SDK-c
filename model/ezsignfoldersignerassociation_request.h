/*
 * ezsignfoldersignerassociation_request.h
 *
 * An Ezsignfoldersignerassociation Object
 */

#ifndef _ezsignfoldersignerassociation_request_H_
#define _ezsignfoldersignerassociation_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_request_t ezsignfoldersignerassociation_request_t;




typedef struct ezsignfoldersignerassociation_request_t {
    int pki_ezsignfoldersignerassociation_id; //numeric
    int fki_user_id; //numeric
    int fki_ezsignsignergroup_id; //numeric
    int fki_ezsignfolder_id; //numeric
    int b_ezsignfoldersignerassociation_receivecopy; //boolean
    char *t_ezsignfoldersignerassociation_message; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldersignerassociation_request_t;

__attribute__((deprecated)) ezsignfoldersignerassociation_request_t *ezsignfoldersignerassociation_request_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_user_id,
    int fki_ezsignsignergroup_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message
);

void ezsignfoldersignerassociation_request_free(ezsignfoldersignerassociation_request_t *ezsignfoldersignerassociation_request);

ezsignfoldersignerassociation_request_t *ezsignfoldersignerassociation_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_requestJSON);

cJSON *ezsignfoldersignerassociation_request_convertToJSON(ezsignfoldersignerassociation_request_t *ezsignfoldersignerassociation_request);

#endif /* _ezsignfoldersignerassociation_request_H_ */

