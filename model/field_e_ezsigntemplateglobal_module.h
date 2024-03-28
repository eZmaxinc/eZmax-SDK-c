/*
 * field_e_ezsigntemplateglobal_module.h
 *
 * The Module for the Ezsigntemplateglobal
 */

#ifndef _field_e_ezsigntemplateglobal_module_H_
#define _field_e_ezsigntemplateglobal_module_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsigntemplateglobal_module_t field_e_ezsigntemplateglobal_module_t;


// Enum  for field_e_ezsigntemplateglobal_module

typedef enum { ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__NULL = 0, ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__All, ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__Inscription } ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e;

char* field_e_ezsigntemplateglobal_module_field_e_ezsigntemplateglobal_module_ToString(ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e field_e_ezsigntemplateglobal_module);

ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e field_e_ezsigntemplateglobal_module_field_e_ezsigntemplateglobal_module_FromString(char* field_e_ezsigntemplateglobal_module);

//cJSON *field_e_ezsigntemplateglobal_module_field_e_ezsigntemplateglobal_module_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e field_e_ezsigntemplateglobal_module);

//ezmax_api_definition__full_field_e_ezsigntemplateglobal_module__e field_e_ezsigntemplateglobal_module_field_e_ezsigntemplateglobal_module_parseFromJSON(cJSON *field_e_ezsigntemplateglobal_moduleJSON);

#endif /* _field_e_ezsigntemplateglobal_module_H_ */

