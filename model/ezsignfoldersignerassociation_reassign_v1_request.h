/*
 * ezsignfoldersignerassociation_reassign_v1_request.h
 *
 * Request for POST /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/reassign
 */

#ifndef _ezsignfoldersignerassociation_reassign_v1_request_H_
#define _ezsignfoldersignerassociation_reassign_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_reassign_v1_request_t ezsignfoldersignerassociation_reassign_v1_request_t;




typedef struct ezsignfoldersignerassociation_reassign_v1_request_t {
    int fki_ezsignfoldersignerassociation_id; //numeric

} ezsignfoldersignerassociation_reassign_v1_request_t;

ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request_create(
    int fki_ezsignfoldersignerassociation_id
);

void ezsignfoldersignerassociation_reassign_v1_request_free(ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request);

ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_reassign_v1_requestJSON);

cJSON *ezsignfoldersignerassociation_reassign_v1_request_convertToJSON(ezsignfoldersignerassociation_reassign_v1_request_t *ezsignfoldersignerassociation_reassign_v1_request);

#endif /* _ezsignfoldersignerassociation_reassign_v1_request_H_ */

