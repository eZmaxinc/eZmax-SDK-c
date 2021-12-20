/*
 * ezsignfoldersignerassociation_response_compound.h
 *
 * An Ezsignfoldersignerassociation Object
 */

#ifndef _ezsignfoldersignerassociation_response_compound_H_
#define _ezsignfoldersignerassociation_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_response_compound_t ezsignfoldersignerassociation_response_compound_t;

#include "ezsignfoldersignerassociation_response.h"



typedef struct ezsignfoldersignerassociation_response_compound_t {
    int pki_ezsignfoldersignerassociation_id; //numeric
    int fki_ezsignfolder_id; //numeric
    int fki_ezsignsigner_id; //numeric
    int fki_user_id; //numeric
    int b_ezsignfoldersignerassociation_receivecopy; //boolean

} ezsignfoldersignerassociation_response_compound_t;

ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id,
    int fki_ezsignsigner_id,
    int fki_user_id,
    int b_ezsignfoldersignerassociation_receivecopy
);

void ezsignfoldersignerassociation_response_compound_free(ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound);

ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound_parseFromJSON(cJSON *ezsignfoldersignerassociation_response_compoundJSON);

cJSON *ezsignfoldersignerassociation_response_compound_convertToJSON(ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound);

#endif /* _ezsignfoldersignerassociation_response_compound_H_ */

