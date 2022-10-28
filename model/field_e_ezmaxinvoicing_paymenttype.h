/*
 * field_e_ezmaxinvoicing_paymenttype.h
 *
 * The Ezmaxinvoicing payment type
 */

#ifndef _field_e_ezmaxinvoicing_paymenttype_H_
#define _field_e_ezmaxinvoicing_paymenttype_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezmaxinvoicing_paymenttype_t field_e_ezmaxinvoicing_paymenttype_t;


// Enum  for field_e_ezmaxinvoicing_paymenttype

typedef enum { ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__NULL = 0, ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__Cheque, ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__CreditCard, ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__DirectDebit } ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e;

char* field_e_ezmaxinvoicing_paymenttype_field_e_ezmaxinvoicing_paymenttype_ToString(ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e field_e_ezmaxinvoicing_paymenttype);

ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e field_e_ezmaxinvoicing_paymenttype_field_e_ezmaxinvoicing_paymenttype_FromString(char* field_e_ezmaxinvoicing_paymenttype);

//cJSON *field_e_ezmaxinvoicing_paymenttype_field_e_ezmaxinvoicing_paymenttype_convertToJSON(ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e field_e_ezmaxinvoicing_paymenttype);

//ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e field_e_ezmaxinvoicing_paymenttype_field_e_ezmaxinvoicing_paymenttype_parseFromJSON(cJSON *field_e_ezmaxinvoicing_paymenttypeJSON);

#endif /* _field_e_ezmaxinvoicing_paymenttype_H_ */
