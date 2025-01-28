/*
 * field_e_ezsignfoldertype_pdfarequirement.h
 *
 * The PDF/a requirement of the Ezsignfolder type.  * **None** is for not enforcing the PDF/a * **Declared** is to check the value declared by the document * **Verified** is to verify the document to see the compliance. May takes more time processing the document
 */

#ifndef _field_e_ezsignfoldertype_pdfarequirement_H_
#define _field_e_ezsignfoldertype_pdfarequirement_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignfoldertype_pdfarequirement_t field_e_ezsignfoldertype_pdfarequirement_t;


// Enum  for field_e_ezsignfoldertype_pdfarequirement

typedef enum { ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__NULL = 0, ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__None, ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__Declared, ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__Verified } ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e;

char* field_e_ezsignfoldertype_pdfarequirement_field_e_ezsignfoldertype_pdfarequirement_ToString(ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e field_e_ezsignfoldertype_pdfarequirement);

ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e field_e_ezsignfoldertype_pdfarequirement_field_e_ezsignfoldertype_pdfarequirement_FromString(char* field_e_ezsignfoldertype_pdfarequirement);

cJSON *field_e_ezsignfoldertype_pdfarequirement_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e field_e_ezsignfoldertype_pdfarequirement);

ezmax_api_definition__full_field_e_ezsignfoldertype_pdfarequirement__e field_e_ezsignfoldertype_pdfarequirement_parseFromJSON(cJSON *field_e_ezsignfoldertype_pdfarequirementJSON);

#endif /* _field_e_ezsignfoldertype_pdfarequirement_H_ */

