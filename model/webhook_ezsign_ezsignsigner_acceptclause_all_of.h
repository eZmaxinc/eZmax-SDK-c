/*
 * webhook_ezsign_ezsignsigner_acceptclause_all_of.h
 *
 * 
 */

#ifndef _webhook_ezsign_ezsignsigner_acceptclause_all_of_H_
#define _webhook_ezsign_ezsignsigner_acceptclause_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct webhook_ezsign_ezsignsigner_acceptclause_all_of_t webhook_ezsign_ezsignsigner_acceptclause_all_of_t;

#include "ezsignfolder_response.h"
#include "ezsignfoldersignerassociation_response_compound.h"



typedef struct webhook_ezsign_ezsignsigner_acceptclause_all_of_t {
    struct ezsignfolder_response_t *obj_ezsignfolder; //model
    struct ezsignfoldersignerassociation_response_compound_t *obj_ezsignfoldersignerassociation; //model

} webhook_ezsign_ezsignsigner_acceptclause_all_of_t;

webhook_ezsign_ezsignsigner_acceptclause_all_of_t *webhook_ezsign_ezsignsigner_acceptclause_all_of_create(
    ezsignfolder_response_t *obj_ezsignfolder,
    ezsignfoldersignerassociation_response_compound_t *obj_ezsignfoldersignerassociation
);

void webhook_ezsign_ezsignsigner_acceptclause_all_of_free(webhook_ezsign_ezsignsigner_acceptclause_all_of_t *webhook_ezsign_ezsignsigner_acceptclause_all_of);

webhook_ezsign_ezsignsigner_acceptclause_all_of_t *webhook_ezsign_ezsignsigner_acceptclause_all_of_parseFromJSON(cJSON *webhook_ezsign_ezsignsigner_acceptclause_all_ofJSON);

cJSON *webhook_ezsign_ezsignsigner_acceptclause_all_of_convertToJSON(webhook_ezsign_ezsignsigner_acceptclause_all_of_t *webhook_ezsign_ezsignsigner_acceptclause_all_of);

#endif /* _webhook_ezsign_ezsignsigner_acceptclause_all_of_H_ */

