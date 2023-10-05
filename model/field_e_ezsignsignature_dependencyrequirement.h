/*
 * field_e_ezsignsignature_dependencyrequirement.h
 *
 * The Dependency requirement of the Ezsignsignature
 */

#ifndef _field_e_ezsignsignature_dependencyrequirement_H_
#define _field_e_ezsignsignature_dependencyrequirement_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignsignature_dependencyrequirement_t field_e_ezsignsignature_dependencyrequirement_t;


// Enum  for field_e_ezsignsignature_dependencyrequirement

typedef enum { ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__NULL = 0, ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__AllOf, ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__AnyOf } ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e;

char* field_e_ezsignsignature_dependencyrequirement_field_e_ezsignsignature_dependencyrequirement_ToString(ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e field_e_ezsignsignature_dependencyrequirement);

ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e field_e_ezsignsignature_dependencyrequirement_field_e_ezsignsignature_dependencyrequirement_FromString(char* field_e_ezsignsignature_dependencyrequirement);

//cJSON *field_e_ezsignsignature_dependencyrequirement_field_e_ezsignsignature_dependencyrequirement_convertToJSON(ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e field_e_ezsignsignature_dependencyrequirement);

//ezmax_api_definition__full_field_e_ezsignsignature_dependencyrequirement__e field_e_ezsignsignature_dependencyrequirement_field_e_ezsignsignature_dependencyrequirement_parseFromJSON(cJSON *field_e_ezsignsignature_dependencyrequirementJSON);

#endif /* _field_e_ezsignsignature_dependencyrequirement_H_ */
