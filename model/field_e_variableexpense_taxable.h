/*
 * field_e_variableexpense_taxable.h
 *
 * The taxable of the Variableexpense
 */

#ifndef _field_e_variableexpense_taxable_H_
#define _field_e_variableexpense_taxable_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_variableexpense_taxable_t field_e_variableexpense_taxable_t;


// Enum  for field_e_variableexpense_taxable

typedef enum { ezmax_api_definition__full_field_e_variableexpense_taxable__NULL = 0, ezmax_api_definition__full_field_e_variableexpense_taxable__Yes, ezmax_api_definition__full_field_e_variableexpense_taxable__No, ezmax_api_definition__full_field_e_variableexpense_taxable__Included } ezmax_api_definition__full_field_e_variableexpense_taxable__e;

char* field_e_variableexpense_taxable_field_e_variableexpense_taxable_ToString(ezmax_api_definition__full_field_e_variableexpense_taxable__e field_e_variableexpense_taxable);

ezmax_api_definition__full_field_e_variableexpense_taxable__e field_e_variableexpense_taxable_field_e_variableexpense_taxable_FromString(char* field_e_variableexpense_taxable);

cJSON *field_e_variableexpense_taxable_convertToJSON(ezmax_api_definition__full_field_e_variableexpense_taxable__e field_e_variableexpense_taxable);

ezmax_api_definition__full_field_e_variableexpense_taxable__e field_e_variableexpense_taxable_parseFromJSON(cJSON *field_e_variableexpense_taxableJSON);

#endif /* _field_e_variableexpense_taxable_H_ */

