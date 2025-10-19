/*
 * field_e_buyercontract_step.h
 *
 * The step of the Buyercontract
 */

#ifndef _field_e_buyercontract_step_H_
#define _field_e_buyercontract_step_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_buyercontract_step_t field_e_buyercontract_step_t;


// Enum  for field_e_buyercontract_step

typedef enum { ezmax_api_definition__full_field_e_buyercontract_step__NULL = 0, ezmax_api_definition__full_field_e_buyercontract_step__Imported, ezmax_api_definition__full_field_e_buyercontract_step__Active, ezmax_api_definition__full_field_e_buyercontract_step__Modified, ezmax_api_definition__full_field_e_buyercontract_step__ContractEnded, ezmax_api_definition__full_field_e_buyercontract_step__ExpiredContract, ezmax_api_definition__full_field_e_buyercontract_step__Bought } ezmax_api_definition__full_field_e_buyercontract_step__e;

char* field_e_buyercontract_step_field_e_buyercontract_step_ToString(ezmax_api_definition__full_field_e_buyercontract_step__e field_e_buyercontract_step);

ezmax_api_definition__full_field_e_buyercontract_step__e field_e_buyercontract_step_field_e_buyercontract_step_FromString(char* field_e_buyercontract_step);

cJSON *field_e_buyercontract_step_convertToJSON(ezmax_api_definition__full_field_e_buyercontract_step__e field_e_buyercontract_step);

ezmax_api_definition__full_field_e_buyercontract_step__e field_e_buyercontract_step_parseFromJSON(cJSON *field_e_buyercontract_stepJSON);

#endif /* _field_e_buyercontract_step_H_ */

