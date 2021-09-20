/*
 * ezsignfolder_request_compound_all_of.h
 *
 * 
 */

#ifndef _ezsignfolder_request_compound_all_of_H_
#define _ezsignfolder_request_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_request_compound_all_of_t ezsignfolder_request_compound_all_of_t;

#include "ezsignfoldersignerassociation_request.h"



typedef struct ezsignfolder_request_compound_all_of_t {
    list_t *a_ezsignfoldersignerassociation; //nonprimitive container

} ezsignfolder_request_compound_all_of_t;

ezsignfolder_request_compound_all_of_t *ezsignfolder_request_compound_all_of_create(
    list_t *a_ezsignfoldersignerassociation
);

void ezsignfolder_request_compound_all_of_free(ezsignfolder_request_compound_all_of_t *ezsignfolder_request_compound_all_of);

ezsignfolder_request_compound_all_of_t *ezsignfolder_request_compound_all_of_parseFromJSON(cJSON *ezsignfolder_request_compound_all_ofJSON);

cJSON *ezsignfolder_request_compound_all_of_convertToJSON(ezsignfolder_request_compound_all_of_t *ezsignfolder_request_compound_all_of);

#endif /* _ezsignfolder_request_compound_all_of_H_ */

