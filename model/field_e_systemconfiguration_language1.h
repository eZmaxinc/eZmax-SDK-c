/*
 * field_e_systemconfiguration_language1.h
 *
 * The type of the french for the client
 */

#ifndef _field_e_systemconfiguration_language1_H_
#define _field_e_systemconfiguration_language1_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_systemconfiguration_language1_t field_e_systemconfiguration_language1_t;


// Enum  for field_e_systemconfiguration_language1

typedef enum { ezmax_api_definition__full_field_e_systemconfiguration_language1__NULL = 0, ezmax_api_definition__full_field_e_systemconfiguration_language1__fr_QC } ezmax_api_definition__full_field_e_systemconfiguration_language1__e;

char* field_e_systemconfiguration_language1_field_e_systemconfiguration_language1_ToString(ezmax_api_definition__full_field_e_systemconfiguration_language1__e field_e_systemconfiguration_language1);

ezmax_api_definition__full_field_e_systemconfiguration_language1__e field_e_systemconfiguration_language1_field_e_systemconfiguration_language1_FromString(char* field_e_systemconfiguration_language1);

cJSON *field_e_systemconfiguration_language1_convertToJSON(ezmax_api_definition__full_field_e_systemconfiguration_language1__e field_e_systemconfiguration_language1);

ezmax_api_definition__full_field_e_systemconfiguration_language1__e field_e_systemconfiguration_language1_parseFromJSON(cJSON *field_e_systemconfiguration_language1JSON);

#endif /* _field_e_systemconfiguration_language1_H_ */

