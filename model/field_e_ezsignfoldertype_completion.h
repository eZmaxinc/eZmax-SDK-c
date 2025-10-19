/*
 * field_e_ezsignfoldertype_completion.h
 *
 * Indicates if the Ezsigndocument is completed when all signatures of this Ezsigndocument were applied or when all signatures of all Ezsigndocument were applied. When eEzsignfoldertypeCompletion equals PerEzsignfolderStepSync, the document steps are synchronized. All documents move to a new step when all forms or signatures from the previous step have been completed for all documents.
 */

#ifndef _field_e_ezsignfoldertype_completion_H_
#define _field_e_ezsignfoldertype_completion_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignfoldertype_completion_t field_e_ezsignfoldertype_completion_t;


// Enum  for field_e_ezsignfoldertype_completion

typedef enum { ezmax_api_definition__full_field_e_ezsignfoldertype_completion__NULL = 0, ezmax_api_definition__full_field_e_ezsignfoldertype_completion__PerEzsigndocument, ezmax_api_definition__full_field_e_ezsignfoldertype_completion__PerEzsignfolder, ezmax_api_definition__full_field_e_ezsignfoldertype_completion__PerEzsignfolderStepSync } ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e;

char* field_e_ezsignfoldertype_completion_field_e_ezsignfoldertype_completion_ToString(ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e field_e_ezsignfoldertype_completion);

ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e field_e_ezsignfoldertype_completion_field_e_ezsignfoldertype_completion_FromString(char* field_e_ezsignfoldertype_completion);

cJSON *field_e_ezsignfoldertype_completion_convertToJSON(ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e field_e_ezsignfoldertype_completion);

ezmax_api_definition__full_field_e_ezsignfoldertype_completion__e field_e_ezsignfoldertype_completion_parseFromJSON(cJSON *field_e_ezsignfoldertype_completionJSON);

#endif /* _field_e_ezsignfoldertype_completion_H_ */

