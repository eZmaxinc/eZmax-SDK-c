/*
 * field_e_versionhistory_type.h
 *
 * The type of Versionhistory.
 */

#ifndef _field_e_versionhistory_type_H_
#define _field_e_versionhistory_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_versionhistory_type_t field_e_versionhistory_type_t;


// Enum  for field_e_versionhistory_type

typedef enum { ezmax_api_definition__full_field_e_versionhistory_type__NULL = 0, ezmax_api_definition__full_field_e_versionhistory_type__AgentBroker, ezmax_api_definition__full_field_e_versionhistory_type__NewFeature, ezmax_api_definition__full_field_e_versionhistory_type__Correction, ezmax_api_definition__full_field_e_versionhistory_type__Modification, ezmax_api_definition__full_field_e_versionhistory_type__ImportantMessage } ezmax_api_definition__full_field_e_versionhistory_type__e;

char* field_e_versionhistory_type_field_e_versionhistory_type_ToString(ezmax_api_definition__full_field_e_versionhistory_type__e field_e_versionhistory_type);

ezmax_api_definition__full_field_e_versionhistory_type__e field_e_versionhistory_type_field_e_versionhistory_type_FromString(char* field_e_versionhistory_type);

cJSON *field_e_versionhistory_type_convertToJSON(ezmax_api_definition__full_field_e_versionhistory_type__e field_e_versionhistory_type);

ezmax_api_definition__full_field_e_versionhistory_type__e field_e_versionhistory_type_parseFromJSON(cJSON *field_e_versionhistory_typeJSON);

#endif /* _field_e_versionhistory_type_H_ */

