/*
 * field_e_buyercontract_type.h
 *
 * The type of the Buyercontract
 */

#ifndef _field_e_buyercontract_type_H_
#define _field_e_buyercontract_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_buyercontract_type_t field_e_buyercontract_type_t;


// Enum  for field_e_buyercontract_type

typedef enum { ezmax_api_definition__full_field_e_buyercontract_type__NULL = 0, ezmax_api_definition__full_field_e_buyercontract_type__Rent, ezmax_api_definition__full_field_e_buyercontract_type__Sale, ezmax_api_definition__full_field_e_buyercontract_type__RentOrSale } ezmax_api_definition__full_field_e_buyercontract_type__e;

char* field_e_buyercontract_type_field_e_buyercontract_type_ToString(ezmax_api_definition__full_field_e_buyercontract_type__e field_e_buyercontract_type);

ezmax_api_definition__full_field_e_buyercontract_type__e field_e_buyercontract_type_field_e_buyercontract_type_FromString(char* field_e_buyercontract_type);

cJSON *field_e_buyercontract_type_convertToJSON(ezmax_api_definition__full_field_e_buyercontract_type__e field_e_buyercontract_type);

ezmax_api_definition__full_field_e_buyercontract_type__e field_e_buyercontract_type_parseFromJSON(cJSON *field_e_buyercontract_typeJSON);

#endif /* _field_e_buyercontract_type_H_ */

