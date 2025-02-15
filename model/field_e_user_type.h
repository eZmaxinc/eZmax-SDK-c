/*
 * field_e_user_type.h
 *
 * The user type of the User.
 */

#ifndef _field_e_user_type_H_
#define _field_e_user_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_user_type_t field_e_user_type_t;


// Enum  for field_e_user_type

typedef enum { ezmax_api_definition__full_field_e_user_type__NULL = 0, ezmax_api_definition__full_field_e_user_type__AgentBroker, ezmax_api_definition__full_field_e_user_type__Assistant, ezmax_api_definition__full_field_e_user_type__Employee, ezmax_api_definition__full_field_e_user_type__EzsignUser, ezmax_api_definition__full_field_e_user_type__Normal } ezmax_api_definition__full_field_e_user_type__e;

char* field_e_user_type_field_e_user_type_ToString(ezmax_api_definition__full_field_e_user_type__e field_e_user_type);

ezmax_api_definition__full_field_e_user_type__e field_e_user_type_field_e_user_type_FromString(char* field_e_user_type);

cJSON *field_e_user_type_convertToJSON(ezmax_api_definition__full_field_e_user_type__e field_e_user_type);

ezmax_api_definition__full_field_e_user_type__e field_e_user_type_parseFromJSON(cJSON *field_e_user_typeJSON);

#endif /* _field_e_user_type_H_ */

