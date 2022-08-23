/*
 * field_e_webhook_module.h
 *
 * The module for the Webhook
 */

#ifndef _field_e_webhook_module_H_
#define _field_e_webhook_module_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_webhook_module_t field_e_webhook_module_t;


// Enum  for field_e_webhook_module

typedef enum { ezmax_api_definition__full_field_e_webhook_module__NULL = 0, ezmax_api_definition__full_field_e_webhook_module__Ezsign, ezmax_api_definition__full_field_e_webhook_module__Management } ezmax_api_definition__full_field_e_webhook_module__e;

char* field_e_webhook_module_field_e_webhook_module_ToString(ezmax_api_definition__full_field_e_webhook_module__e field_e_webhook_module);

ezmax_api_definition__full_field_e_webhook_module__e field_e_webhook_module_field_e_webhook_module_FromString(char* field_e_webhook_module);

//cJSON *field_e_webhook_module_field_e_webhook_module_convertToJSON(ezmax_api_definition__full_field_e_webhook_module__e field_e_webhook_module);

//ezmax_api_definition__full_field_e_webhook_module__e field_e_webhook_module_field_e_webhook_module_parseFromJSON(cJSON *field_e_webhook_moduleJSON);

#endif /* _field_e_webhook_module_H_ */

