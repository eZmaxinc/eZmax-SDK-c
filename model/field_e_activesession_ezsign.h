/*
 * field_e_activesession_ezsign.h
 *
 * Clone rights for eZsign folders.
 */

#ifndef _field_e_activesession_ezsign_H_
#define _field_e_activesession_ezsign_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_activesession_ezsign_t field_e_activesession_ezsign_t;


// Enum  for field_e_activesession_ezsign

typedef enum { ezmax_api_definition__full_field_e_activesession_ezsign__NULL = 0, ezmax_api_definition__full_field_e_activesession_ezsign__No, ezmax_api_definition__full_field_e_activesession_ezsign__Read, ezmax_api_definition__full_field_e_activesession_ezsign__Modify, ezmax_api_definition__full_field_e_activesession_ezsign__Full } ezmax_api_definition__full_field_e_activesession_ezsign__e;

char* field_e_activesession_ezsign_field_e_activesession_ezsign_ToString(ezmax_api_definition__full_field_e_activesession_ezsign__e field_e_activesession_ezsign);

ezmax_api_definition__full_field_e_activesession_ezsign__e field_e_activesession_ezsign_field_e_activesession_ezsign_FromString(char* field_e_activesession_ezsign);

//cJSON *field_e_activesession_ezsign_field_e_activesession_ezsign_convertToJSON(ezmax_api_definition__full_field_e_activesession_ezsign__e field_e_activesession_ezsign);

//ezmax_api_definition__full_field_e_activesession_ezsign__e field_e_activesession_ezsign_field_e_activesession_ezsign_parseFromJSON(cJSON *field_e_activesession_ezsignJSON);

#endif /* _field_e_activesession_ezsign_H_ */

