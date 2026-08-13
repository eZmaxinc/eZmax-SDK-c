/*
 * field_e_ezsignfoldersignerassociation_role.h
 *
 * The role of the Ezsignfoldersignerassociation.  1. **CC** receive a copy of all documents. 2. **Signer** sign document. 3. **SignerAndCC** sign document and receive a copy of all documents.
 */

#ifndef _field_e_ezsignfoldersignerassociation_role_H_
#define _field_e_ezsignfoldersignerassociation_role_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignfoldersignerassociation_role_t field_e_ezsignfoldersignerassociation_role_t;


// Enum  for field_e_ezsignfoldersignerassociation_role

typedef enum { ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__NULL = 0, ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__CC, ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__Signer, ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__SignerAndCC } ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e;

char* field_e_ezsignfoldersignerassociation_role_field_e_ezsignfoldersignerassociation_role_ToString(ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e field_e_ezsignfoldersignerassociation_role);

ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e field_e_ezsignfoldersignerassociation_role_field_e_ezsignfoldersignerassociation_role_FromString(char* field_e_ezsignfoldersignerassociation_role);

cJSON *field_e_ezsignfoldersignerassociation_role_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e field_e_ezsignfoldersignerassociation_role);

ezmax_api_definition__full_field_e_ezsignfoldersignerassociation_role__e field_e_ezsignfoldersignerassociation_role_parseFromJSON(cJSON *field_e_ezsignfoldersignerassociation_roleJSON);

#endif /* _field_e_ezsignfoldersignerassociation_role_H_ */

