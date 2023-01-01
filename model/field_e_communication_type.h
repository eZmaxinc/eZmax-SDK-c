/*
 * field_e_communication_type.h
 *
 * The Type for the Communication
 */

#ifndef _field_e_communication_type_H_
#define _field_e_communication_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_communication_type_t field_e_communication_type_t;


// Enum  for field_e_communication_type

typedef enum { ezmax_api_definition__full_field_e_communication_type__NULL = 0, ezmax_api_definition__full_field_e_communication_type__Email, ezmax_api_definition__full_field_e_communication_type__Fax, ezmax_api_definition__full_field_e_communication_type__Sms } ezmax_api_definition__full_field_e_communication_type__e;

char* field_e_communication_type_field_e_communication_type_ToString(ezmax_api_definition__full_field_e_communication_type__e field_e_communication_type);

ezmax_api_definition__full_field_e_communication_type__e field_e_communication_type_field_e_communication_type_FromString(char* field_e_communication_type);

//cJSON *field_e_communication_type_field_e_communication_type_convertToJSON(ezmax_api_definition__full_field_e_communication_type__e field_e_communication_type);

//ezmax_api_definition__full_field_e_communication_type__e field_e_communication_type_field_e_communication_type_parseFromJSON(cJSON *field_e_communication_typeJSON);

#endif /* _field_e_communication_type_H_ */

