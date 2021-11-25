/*
 * field_e_ezsigntemplatepackage_type.h
 *
 * The type of the Ezsigntemplatepackage.
 */

#ifndef _field_e_ezsigntemplatepackage_type_H_
#define _field_e_ezsigntemplatepackage_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsigntemplatepackage_type_t field_e_ezsigntemplatepackage_type_t;


// Enum  for field_e_ezsigntemplatepackage_type

typedef enum { ezmax_api_definition_field_e_ezsigntemplatepackage_type__NULL = 0, ezmax_api_definition_field_e_ezsigntemplatepackage_type__Company, ezmax_api_definition_field_e_ezsigntemplatepackage_type__Department, ezmax_api_definition_field_e_ezsigntemplatepackage_type__Team, ezmax_api_definition_field_e_ezsigntemplatepackage_type__User, ezmax_api_definition_field_e_ezsigntemplatepackage_type__Usergroup } ezmax_api_definition_field_e_ezsigntemplatepackage_type__e;

char* field_e_ezsigntemplatepackage_type_field_e_ezsigntemplatepackage_type_ToString(ezmax_api_definition_field_e_ezsigntemplatepackage_type__e field_e_ezsigntemplatepackage_type);

ezmax_api_definition_field_e_ezsigntemplatepackage_type__e field_e_ezsigntemplatepackage_type_field_e_ezsigntemplatepackage_type_FromString(char* field_e_ezsigntemplatepackage_type);

//cJSON *field_e_ezsigntemplatepackage_type_field_e_ezsigntemplatepackage_type_convertToJSON(ezmax_api_definition_field_e_ezsigntemplatepackage_type__e field_e_ezsigntemplatepackage_type);

//ezmax_api_definition_field_e_ezsigntemplatepackage_type__e field_e_ezsigntemplatepackage_type_field_e_ezsigntemplatepackage_type_parseFromJSON(cJSON *field_e_ezsigntemplatepackage_typeJSON);

#endif /* _field_e_ezsigntemplatepackage_type_H_ */

