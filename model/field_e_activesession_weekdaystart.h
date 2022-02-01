/*
 * field_e_activesession_weekdaystart.h
 *
 * The weekday start of the User.
 */

#ifndef _field_e_activesession_weekdaystart_H_
#define _field_e_activesession_weekdaystart_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_activesession_weekdaystart_t field_e_activesession_weekdaystart_t;


// Enum  for field_e_activesession_weekdaystart

typedef enum { ezmax_api_definition_field_e_activesession_weekdaystart__NULL = 0, ezmax_api_definition_field_e_activesession_weekdaystart__Sunday, ezmax_api_definition_field_e_activesession_weekdaystart__Monday, ezmax_api_definition_field_e_activesession_weekdaystart__Tuesday, ezmax_api_definition_field_e_activesession_weekdaystart__Wednesday, ezmax_api_definition_field_e_activesession_weekdaystart__Thursday, ezmax_api_definition_field_e_activesession_weekdaystart__Friday, ezmax_api_definition_field_e_activesession_weekdaystart__Saturday } ezmax_api_definition_field_e_activesession_weekdaystart__e;

char* field_e_activesession_weekdaystart_field_e_activesession_weekdaystart_ToString(ezmax_api_definition_field_e_activesession_weekdaystart__e field_e_activesession_weekdaystart);

ezmax_api_definition_field_e_activesession_weekdaystart__e field_e_activesession_weekdaystart_field_e_activesession_weekdaystart_FromString(char* field_e_activesession_weekdaystart);

//cJSON *field_e_activesession_weekdaystart_field_e_activesession_weekdaystart_convertToJSON(ezmax_api_definition_field_e_activesession_weekdaystart__e field_e_activesession_weekdaystart);

//ezmax_api_definition_field_e_activesession_weekdaystart__e field_e_activesession_weekdaystart_field_e_activesession_weekdaystart_parseFromJSON(cJSON *field_e_activesession_weekdaystartJSON);

#endif /* _field_e_activesession_weekdaystart_H_ */

