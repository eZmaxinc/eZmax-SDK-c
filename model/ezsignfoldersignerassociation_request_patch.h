/*
 * ezsignfoldersignerassociation_request_patch.h
 *
 * An Ezsignfoldersignerassociation Object
 */

#ifndef _ezsignfoldersignerassociation_request_patch_H_
#define _ezsignfoldersignerassociation_request_patch_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldersignerassociation_request_patch_t ezsignfoldersignerassociation_request_patch_t;




typedef struct ezsignfoldersignerassociation_request_patch_t {
    char *t_ezsignfoldersignerassociation_message; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldersignerassociation_request_patch_t;

__attribute__((deprecated)) ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch_create(
    char *t_ezsignfoldersignerassociation_message
);

void ezsignfoldersignerassociation_request_patch_free(ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch);

ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch_parseFromJSON(cJSON *ezsignfoldersignerassociation_request_patchJSON);

cJSON *ezsignfoldersignerassociation_request_patch_convertToJSON(ezsignfoldersignerassociation_request_patch_t *ezsignfoldersignerassociation_request_patch);

#endif /* _ezsignfoldersignerassociation_request_patch_H_ */

