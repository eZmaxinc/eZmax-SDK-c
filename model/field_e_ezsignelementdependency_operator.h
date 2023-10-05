/*
 * field_e_ezsignelementdependency_operator.h
 *
 * The operator of the Ezsignelementdependency
 */

#ifndef _field_e_ezsignelementdependency_operator_H_
#define _field_e_ezsignelementdependency_operator_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignelementdependency_operator_t field_e_ezsignelementdependency_operator_t;


// Enum  for field_e_ezsignelementdependency_operator

typedef enum { ezmax_api_definition__full_field_e_ezsignelementdependency_operator__NULL = 0, ezmax_api_definition__full_field_e_ezsignelementdependency_operator__eq, ezmax_api_definition__full_field_e_ezsignelementdependency_operator__neq, ezmax_api_definition__full_field_e_ezsignelementdependency_operator__gt, ezmax_api_definition__full_field_e_ezsignelementdependency_operator__gte, ezmax_api_definition__full_field_e_ezsignelementdependency_operator__lt, ezmax_api_definition__full_field_e_ezsignelementdependency_operator__lte, ezmax_api_definition__full_field_e_ezsignelementdependency_operator__in, ezmax_api_definition__full_field_e_ezsignelementdependency_operator__nin, ezmax_api_definition__full_field_e_ezsignelementdependency_operator__rg, ezmax_api_definition__full_field_e_ezsignelementdependency_operator__like, ezmax_api_definition__full_field_e_ezsignelementdependency_operator__between } ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e;

char* field_e_ezsignelementdependency_operator_field_e_ezsignelementdependency_operator_ToString(ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e field_e_ezsignelementdependency_operator);

ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e field_e_ezsignelementdependency_operator_field_e_ezsignelementdependency_operator_FromString(char* field_e_ezsignelementdependency_operator);

//cJSON *field_e_ezsignelementdependency_operator_field_e_ezsignelementdependency_operator_convertToJSON(ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e field_e_ezsignelementdependency_operator);

//ezmax_api_definition__full_field_e_ezsignelementdependency_operator__e field_e_ezsignelementdependency_operator_field_e_ezsignelementdependency_operator_parseFromJSON(cJSON *field_e_ezsignelementdependency_operatorJSON);

#endif /* _field_e_ezsignelementdependency_operator_H_ */

