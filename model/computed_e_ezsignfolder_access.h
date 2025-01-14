/*
 * computed_e_ezsignfolder_access.h
 *
 * Indicates the user&#39;s access level to this folder.
 */

#ifndef _computed_e_ezsignfolder_access_H_
#define _computed_e_ezsignfolder_access_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct computed_e_ezsignfolder_access_t computed_e_ezsignfolder_access_t;


// Enum  for computed_e_ezsignfolder_access

typedef enum { ezmax_api_definition__full_computed_e_ezsignfolder_access__NULL = 0, ezmax_api_definition__full_computed_e_ezsignfolder_access__Signer, ezmax_api_definition__full_computed_e_ezsignfolder_access__Read, ezmax_api_definition__full_computed_e_ezsignfolder_access__Modify, ezmax_api_definition__full_computed_e_ezsignfolder_access__Full } ezmax_api_definition__full_computed_e_ezsignfolder_access__e;

char* computed_e_ezsignfolder_access_computed_e_ezsignfolder_access_ToString(ezmax_api_definition__full_computed_e_ezsignfolder_access__e computed_e_ezsignfolder_access);

ezmax_api_definition__full_computed_e_ezsignfolder_access__e computed_e_ezsignfolder_access_computed_e_ezsignfolder_access_FromString(char* computed_e_ezsignfolder_access);

//cJSON *computed_e_ezsignfolder_access_computed_e_ezsignfolder_access_convertToJSON(ezmax_api_definition__full_computed_e_ezsignfolder_access__e computed_e_ezsignfolder_access);

//ezmax_api_definition__full_computed_e_ezsignfolder_access__e computed_e_ezsignfolder_access_computed_e_ezsignfolder_access_parseFromJSON(cJSON *computed_e_ezsignfolder_accessJSON);

#endif /* _computed_e_ezsignfolder_access_H_ */

