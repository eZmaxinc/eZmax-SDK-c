/*
 * field_e_customer_type.h
 *
 * The type of the Customer
 */

#ifndef _field_e_customer_type_H_
#define _field_e_customer_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_customer_type_t field_e_customer_type_t;


// Enum  for field_e_customer_type

typedef enum { ezmax_api_definition__full_field_e_customer_type__NULL = 0, ezmax_api_definition__full_field_e_customer_type__Normal, ezmax_api_definition__full_field_e_customer_type__Vetrx_Server, ezmax_api_definition__full_field_e_customer_type__Reward_Administration, ezmax_api_definition__full_field_e_customer_type__Reward_Representative, ezmax_api_definition__full_field_e_customer_type__Reward_Server } ezmax_api_definition__full_field_e_customer_type__e;

char* field_e_customer_type_field_e_customer_type_ToString(ezmax_api_definition__full_field_e_customer_type__e field_e_customer_type);

ezmax_api_definition__full_field_e_customer_type__e field_e_customer_type_field_e_customer_type_FromString(char* field_e_customer_type);

cJSON *field_e_customer_type_convertToJSON(ezmax_api_definition__full_field_e_customer_type__e field_e_customer_type);

ezmax_api_definition__full_field_e_customer_type__e field_e_customer_type_parseFromJSON(cJSON *field_e_customer_typeJSON);

#endif /* _field_e_customer_type_H_ */

