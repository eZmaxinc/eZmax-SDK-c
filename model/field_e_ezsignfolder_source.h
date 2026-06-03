/*
 * field_e_ezsignfolder_source.h
 *
 * The source of the Ezsignfolder.
 */

#ifndef _field_e_ezsignfolder_source_H_
#define _field_e_ezsignfolder_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignfolder_source_t field_e_ezsignfolder_source_t;


// Enum  for field_e_ezsignfolder_source

typedef enum { ezmax_api_definition__full_field_e_ezsignfolder_source__NULL = 0, ezmax_api_definition__full_field_e_ezsignfolder_source__Normal, ezmax_api_definition__full_field_e_ezsignfolder_source__Ezsignbulksend, ezmax_api_definition__full_field_e_ezsignfolder_source__Ezsigntemplatepublic } ezmax_api_definition__full_field_e_ezsignfolder_source__e;

char* field_e_ezsignfolder_source_field_e_ezsignfolder_source_ToString(ezmax_api_definition__full_field_e_ezsignfolder_source__e field_e_ezsignfolder_source);

ezmax_api_definition__full_field_e_ezsignfolder_source__e field_e_ezsignfolder_source_field_e_ezsignfolder_source_FromString(char* field_e_ezsignfolder_source);

cJSON *field_e_ezsignfolder_source_convertToJSON(ezmax_api_definition__full_field_e_ezsignfolder_source__e field_e_ezsignfolder_source);

ezmax_api_definition__full_field_e_ezsignfolder_source__e field_e_ezsignfolder_source_parseFromJSON(cJSON *field_e_ezsignfolder_sourceJSON);

#endif /* _field_e_ezsignfolder_source_H_ */

