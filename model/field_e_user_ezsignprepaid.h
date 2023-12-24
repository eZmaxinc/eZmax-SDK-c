/*
 * field_e_user_ezsignprepaid.h
 *
 * Subscription level when a user has a Prepaid subscription.
 */

#ifndef _field_e_user_ezsignprepaid_H_
#define _field_e_user_ezsignprepaid_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_user_ezsignprepaid_t field_e_user_ezsignprepaid_t;


// Enum  for field_e_user_ezsignprepaid

typedef enum { ezmax_api_definition__full_field_e_user_ezsignprepaid__NULL = 0, ezmax_api_definition__full_field_e_user_ezsignprepaid__Basic, ezmax_api_definition__full_field_e_user_ezsignprepaid__Unlimited, ezmax_api_definition__full_field_e_user_ezsignprepaid__Pro } ezmax_api_definition__full_field_e_user_ezsignprepaid__e;

char* field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_ToString(ezmax_api_definition__full_field_e_user_ezsignprepaid__e field_e_user_ezsignprepaid);

ezmax_api_definition__full_field_e_user_ezsignprepaid__e field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_FromString(char* field_e_user_ezsignprepaid);

//cJSON *field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_convertToJSON(ezmax_api_definition__full_field_e_user_ezsignprepaid__e field_e_user_ezsignprepaid);

//ezmax_api_definition__full_field_e_user_ezsignprepaid__e field_e_user_ezsignprepaid_field_e_user_ezsignprepaid_parseFromJSON(cJSON *field_e_user_ezsignprepaidJSON);

#endif /* _field_e_user_ezsignprepaid_H_ */

