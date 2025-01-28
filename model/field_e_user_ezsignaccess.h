/*
 * field_e_user_ezsignaccess.h
 *
 * The type of eZsign access the User has
 */

#ifndef _field_e_user_ezsignaccess_H_
#define _field_e_user_ezsignaccess_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_user_ezsignaccess_t field_e_user_ezsignaccess_t;


// Enum  for field_e_user_ezsignaccess

typedef enum { ezmax_api_definition__full_field_e_user_ezsignaccess__NULL = 0, ezmax_api_definition__full_field_e_user_ezsignaccess__No, ezmax_api_definition__full_field_e_user_ezsignaccess__PaidByOffice, ezmax_api_definition__full_field_e_user_ezsignaccess__PerDocument, ezmax_api_definition__full_field_e_user_ezsignaccess__Prepaid } ezmax_api_definition__full_field_e_user_ezsignaccess__e;

char* field_e_user_ezsignaccess_field_e_user_ezsignaccess_ToString(ezmax_api_definition__full_field_e_user_ezsignaccess__e field_e_user_ezsignaccess);

ezmax_api_definition__full_field_e_user_ezsignaccess__e field_e_user_ezsignaccess_field_e_user_ezsignaccess_FromString(char* field_e_user_ezsignaccess);

cJSON *field_e_user_ezsignaccess_convertToJSON(ezmax_api_definition__full_field_e_user_ezsignaccess__e field_e_user_ezsignaccess);

ezmax_api_definition__full_field_e_user_ezsignaccess__e field_e_user_ezsignaccess_parseFromJSON(cJSON *field_e_user_ezsignaccessJSON);

#endif /* _field_e_user_ezsignaccess_H_ */

