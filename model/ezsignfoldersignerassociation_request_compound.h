/*
 * ezsignfoldersignerassociation_request_compound.h
 *
 * An Ezsignfoldersignerassociation Object and children to create a complete structure
 */

#ifndef _ezsignfoldersignerassociation_request_compound_H_
#define _ezsignfoldersignerassociation_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_request_compound_t ezsignfoldersignerassociation_request_compound_t;

#include "ezsignfoldersignerassociation_request.h"
#include "ezsignfoldersignerassociation_request_compound_all_of.h"
#include "ezsignsigner_request_compound.h"



typedef struct ezsignfoldersignerassociation_request_compound_t {
    int pki_ezsignfoldersignerassociation_id; //numeric
    int fki_user_id; //numeric
    int fki_ezsignfolder_id; //numeric
    int b_ezsignfoldersignerassociation_receivecopy; //boolean
    char *t_ezsignfoldersignerassociation_message; // string
    struct ezsignsigner_request_compound_t *obj_ezsignsigner; //model

} ezsignfoldersignerassociation_request_compound_t;

ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_user_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message,
    ezsignsigner_request_compound_t *obj_ezsignsigner
);

void ezsignfoldersignerassociation_request_compound_free(ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound);

ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound_parseFromJSON(cJSON *ezsignfoldersignerassociation_request_compoundJSON);

cJSON *ezsignfoldersignerassociation_request_compound_convertToJSON(ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound);

#endif /* _ezsignfoldersignerassociation_request_compound_H_ */

