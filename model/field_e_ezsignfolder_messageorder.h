/*
 * field_e_ezsignfolder_messageorder.h
 *
 * Message order of the Ezsignfolder.
 */

#ifndef _field_e_ezsignfolder_messageorder_H_
#define _field_e_ezsignfolder_messageorder_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignfolder_messageorder_t field_e_ezsignfolder_messageorder_t;


// Enum  for field_e_ezsignfolder_messageorder

typedef enum { ezmax_api_definition__full_field_e_ezsignfolder_messageorder__NULL = 0, ezmax_api_definition__full_field_e_ezsignfolder_messageorder__GlobalFirst, ezmax_api_definition__full_field_e_ezsignfolder_messageorder__PrivateFirst } ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e;

char* field_e_ezsignfolder_messageorder_field_e_ezsignfolder_messageorder_ToString(ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e field_e_ezsignfolder_messageorder);

ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e field_e_ezsignfolder_messageorder_field_e_ezsignfolder_messageorder_FromString(char* field_e_ezsignfolder_messageorder);

cJSON *field_e_ezsignfolder_messageorder_convertToJSON(ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e field_e_ezsignfolder_messageorder);

ezmax_api_definition__full_field_e_ezsignfolder_messageorder__e field_e_ezsignfolder_messageorder_parseFromJSON(cJSON *field_e_ezsignfolder_messageorderJSON);

#endif /* _field_e_ezsignfolder_messageorder_H_ */

