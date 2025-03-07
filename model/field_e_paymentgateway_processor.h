/*
 * field_e_paymentgateway_processor.h
 *
 * The processor of the Paymentgateway
 */

#ifndef _field_e_paymentgateway_processor_H_
#define _field_e_paymentgateway_processor_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_paymentgateway_processor_t field_e_paymentgateway_processor_t;


// Enum  for field_e_paymentgateway_processor

typedef enum { ezmax_api_definition__full_field_e_paymentgateway_processor__NULL = 0, ezmax_api_definition__full_field_e_paymentgateway_processor__Moneris } ezmax_api_definition__full_field_e_paymentgateway_processor__e;

char* field_e_paymentgateway_processor_field_e_paymentgateway_processor_ToString(ezmax_api_definition__full_field_e_paymentgateway_processor__e field_e_paymentgateway_processor);

ezmax_api_definition__full_field_e_paymentgateway_processor__e field_e_paymentgateway_processor_field_e_paymentgateway_processor_FromString(char* field_e_paymentgateway_processor);

cJSON *field_e_paymentgateway_processor_convertToJSON(ezmax_api_definition__full_field_e_paymentgateway_processor__e field_e_paymentgateway_processor);

ezmax_api_definition__full_field_e_paymentgateway_processor__e field_e_paymentgateway_processor_parseFromJSON(cJSON *field_e_paymentgateway_processorJSON);

#endif /* _field_e_paymentgateway_processor_H_ */

