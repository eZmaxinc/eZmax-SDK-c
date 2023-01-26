/*
 * field_e_communication_importance.h
 *
 * The importance of the Communication
 */

#ifndef _field_e_communication_importance_H_
#define _field_e_communication_importance_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_communication_importance_t field_e_communication_importance_t;


// Enum  for field_e_communication_importance

typedef enum { ezmax_api_definition__full_field_e_communication_importance__NULL = 0, ezmax_api_definition__full_field_e_communication_importance__High, ezmax_api_definition__full_field_e_communication_importance__Normal, ezmax_api_definition__full_field_e_communication_importance__Low } ezmax_api_definition__full_field_e_communication_importance__e;

char* field_e_communication_importance_field_e_communication_importance_ToString(ezmax_api_definition__full_field_e_communication_importance__e field_e_communication_importance);

ezmax_api_definition__full_field_e_communication_importance__e field_e_communication_importance_field_e_communication_importance_FromString(char* field_e_communication_importance);

//cJSON *field_e_communication_importance_field_e_communication_importance_convertToJSON(ezmax_api_definition__full_field_e_communication_importance__e field_e_communication_importance);

//ezmax_api_definition__full_field_e_communication_importance__e field_e_communication_importance_field_e_communication_importance_parseFromJSON(cJSON *field_e_communication_importanceJSON);

#endif /* _field_e_communication_importance_H_ */

