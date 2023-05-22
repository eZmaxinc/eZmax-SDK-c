/*
 * field_e_activesession_origin.h
 *
 * The Origin of User for the Activesession
 */

#ifndef _field_e_activesession_origin_H_
#define _field_e_activesession_origin_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_activesession_origin_t field_e_activesession_origin_t;


// Enum  for field_e_activesession_origin

typedef enum { ezmax_api_definition__full_field_e_activesession_origin__NULL = 0, ezmax_api_definition__full_field_e_activesession_origin__BuiltIn, ezmax_api_definition__full_field_e_activesession_origin__External } ezmax_api_definition__full_field_e_activesession_origin__e;

char* field_e_activesession_origin_field_e_activesession_origin_ToString(ezmax_api_definition__full_field_e_activesession_origin__e field_e_activesession_origin);

ezmax_api_definition__full_field_e_activesession_origin__e field_e_activesession_origin_field_e_activesession_origin_FromString(char* field_e_activesession_origin);

//cJSON *field_e_activesession_origin_field_e_activesession_origin_convertToJSON(ezmax_api_definition__full_field_e_activesession_origin__e field_e_activesession_origin);

//ezmax_api_definition__full_field_e_activesession_origin__e field_e_activesession_origin_field_e_activesession_origin_parseFromJSON(cJSON *field_e_activesession_originJSON);

#endif /* _field_e_activesession_origin_H_ */

