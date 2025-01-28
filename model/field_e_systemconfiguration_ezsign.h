/*
 * field_e_systemconfiguration_ezsign.h
 *
 * Whether if Ezsign is paid by the company or not
 */

#ifndef _field_e_systemconfiguration_ezsign_H_
#define _field_e_systemconfiguration_ezsign_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_systemconfiguration_ezsign_t field_e_systemconfiguration_ezsign_t;


// Enum  for field_e_systemconfiguration_ezsign

typedef enum { ezmax_api_definition__full_field_e_systemconfiguration_ezsign__NULL = 0, ezmax_api_definition__full_field_e_systemconfiguration_ezsign__No, ezmax_api_definition__full_field_e_systemconfiguration_ezsign__Yes } ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e;

char* field_e_systemconfiguration_ezsign_field_e_systemconfiguration_ezsign_ToString(ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e field_e_systemconfiguration_ezsign);

ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e field_e_systemconfiguration_ezsign_field_e_systemconfiguration_ezsign_FromString(char* field_e_systemconfiguration_ezsign);

cJSON *field_e_systemconfiguration_ezsign_convertToJSON(ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e field_e_systemconfiguration_ezsign);

ezmax_api_definition__full_field_e_systemconfiguration_ezsign__e field_e_systemconfiguration_ezsign_parseFromJSON(cJSON *field_e_systemconfiguration_ezsignJSON);

#endif /* _field_e_systemconfiguration_ezsign_H_ */

