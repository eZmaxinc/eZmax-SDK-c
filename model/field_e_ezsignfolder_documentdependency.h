/*
 * field_e_ezsignfolder_documentdependency.h
 *
 * Indicates if document dependencies apply to all users or just to Ezsignsigner
 */

#ifndef _field_e_ezsignfolder_documentdependency_H_
#define _field_e_ezsignfolder_documentdependency_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignfolder_documentdependency_t field_e_ezsignfolder_documentdependency_t;


// Enum  for field_e_ezsignfolder_documentdependency

typedef enum { ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__NULL = 0, ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__All, ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__EzsignsignerOnly } ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e;

char* field_e_ezsignfolder_documentdependency_field_e_ezsignfolder_documentdependency_ToString(ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e field_e_ezsignfolder_documentdependency);

ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e field_e_ezsignfolder_documentdependency_field_e_ezsignfolder_documentdependency_FromString(char* field_e_ezsignfolder_documentdependency);

cJSON *field_e_ezsignfolder_documentdependency_convertToJSON(ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e field_e_ezsignfolder_documentdependency);

ezmax_api_definition__full_field_e_ezsignfolder_documentdependency__e field_e_ezsignfolder_documentdependency_parseFromJSON(cJSON *field_e_ezsignfolder_documentdependencyJSON);

#endif /* _field_e_ezsignfolder_documentdependency_H_ */

