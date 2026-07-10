/*
 * ezsignfoldersignerassociation_response_v3.h
 *
 * An Ezsignfoldersignerassociation Object
 */

#ifndef _ezsignfoldersignerassociation_response_v3_H_
#define _ezsignfoldersignerassociation_response_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_response_v3_t ezsignfoldersignerassociation_response_v3_t;

#include "field_e_ezsignfoldersignerassociation_role.h"



typedef struct ezsignfoldersignerassociation_response_v3_t {
    int *pki_ezsignfoldersignerassociation_id; //numeric
    int *fki_ezsignfolder_id; //numeric
    int *b_ezsignfoldersignerassociation_delayedsend; //boolean
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role; //referenced enum
    char *t_ezsignfoldersignerassociation_message; // string
    int *b_ezsignfoldersignerassociation_allowsigninginperson; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldersignerassociation_response_v3_t;

__attribute__((deprecated)) ezsignfoldersignerassociation_response_v3_t *ezsignfoldersignerassociation_response_v3_create(
    int *pki_ezsignfoldersignerassociation_id,
    int *fki_ezsignfolder_id,
    int *b_ezsignfoldersignerassociation_delayedsend,
    ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e e_ezsignfoldersignerassociation_role,
    char *t_ezsignfoldersignerassociation_message,
    int *b_ezsignfoldersignerassociation_allowsigninginperson
);

void ezsignfoldersignerassociation_response_v3_free(ezsignfoldersignerassociation_response_v3_t *ezsignfoldersignerassociation_response_v3);

ezsignfoldersignerassociation_response_v3_t *ezsignfoldersignerassociation_response_v3_parseFromJSON(cJSON *ezsignfoldersignerassociation_response_v3JSON);

cJSON *ezsignfoldersignerassociation_response_v3_convertToJSON(ezsignfoldersignerassociation_response_v3_t *ezsignfoldersignerassociation_response_v3);

#endif /* _ezsignfoldersignerassociation_response_v3_H_ */

