/*
 * field_e_ezsigntemplate_type.h
 *
 * The Type of Ezsigntemplate  **Usergroup** is now deprecated and replace with **Ezsignfoldertype**
 */

#ifndef _field_e_ezsigntemplate_type_H_
#define _field_e_ezsigntemplate_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsigntemplate_type_t field_e_ezsigntemplate_type_t;


// Enum  for field_e_ezsigntemplate_type

typedef enum { ezmax_api_definition__full_field_e_ezsigntemplate_type__NULL = 0, ezmax_api_definition__full_field_e_ezsigntemplate_type__User, ezmax_api_definition__full_field_e_ezsigntemplate_type__Usergroup, ezmax_api_definition__full_field_e_ezsigntemplate_type__Company, ezmax_api_definition__full_field_e_ezsigntemplate_type__Ezsignfoldertype } ezmax_api_definition__full_field_e_ezsigntemplate_type__e;

char* field_e_ezsigntemplate_type_field_e_ezsigntemplate_type_ToString(ezmax_api_definition__full_field_e_ezsigntemplate_type__e field_e_ezsigntemplate_type);

ezmax_api_definition__full_field_e_ezsigntemplate_type__e field_e_ezsigntemplate_type_field_e_ezsigntemplate_type_FromString(char* field_e_ezsigntemplate_type);

cJSON *field_e_ezsigntemplate_type_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplate_type__e field_e_ezsigntemplate_type);

ezmax_api_definition__full_field_e_ezsigntemplate_type__e field_e_ezsigntemplate_type_parseFromJSON(cJSON *field_e_ezsigntemplate_typeJSON);

#endif /* _field_e_ezsigntemplate_type_H_ */

