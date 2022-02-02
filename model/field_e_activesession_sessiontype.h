/*
 * field_e_activesession_sessiontype.h
 *
 * The Type of session for the Activesession
 */

#ifndef _field_e_activesession_sessiontype_H_
#define _field_e_activesession_sessiontype_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_activesession_sessiontype_t field_e_activesession_sessiontype_t;


// Enum  for field_e_activesession_sessiontype

typedef enum { ezmax_api_definition_field_e_activesession_sessiontype__NULL = 0, ezmax_api_definition_field_e_activesession_sessiontype__Normal } ezmax_api_definition_field_e_activesession_sessiontype__e;

char* field_e_activesession_sessiontype_field_e_activesession_sessiontype_ToString(ezmax_api_definition_field_e_activesession_sessiontype__e field_e_activesession_sessiontype);

ezmax_api_definition_field_e_activesession_sessiontype__e field_e_activesession_sessiontype_field_e_activesession_sessiontype_FromString(char* field_e_activesession_sessiontype);

//cJSON *field_e_activesession_sessiontype_field_e_activesession_sessiontype_convertToJSON(ezmax_api_definition_field_e_activesession_sessiontype__e field_e_activesession_sessiontype);

//ezmax_api_definition_field_e_activesession_sessiontype__e field_e_activesession_sessiontype_field_e_activesession_sessiontype_parseFromJSON(cJSON *field_e_activesession_sessiontypeJSON);

#endif /* _field_e_activesession_sessiontype_H_ */

