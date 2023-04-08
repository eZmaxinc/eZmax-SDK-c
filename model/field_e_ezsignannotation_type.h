/*
 * field_e_ezsignannotation_type.h
 *
 * The type of the Ezsignannotation.  1. **StrikethroughBlock** is a box with hatching. 2. **StrikethroughLine** is a red line to cross words. 3. **Text** is a simple Text.
 */

#ifndef _field_e_ezsignannotation_type_H_
#define _field_e_ezsignannotation_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignannotation_type_t field_e_ezsignannotation_type_t;


// Enum  for field_e_ezsignannotation_type

typedef enum { ezmax_api_definition__full_field_e_ezsignannotation_type__NULL = 0, ezmax_api_definition__full_field_e_ezsignannotation_type__StrikethroughBlock, ezmax_api_definition__full_field_e_ezsignannotation_type__StrikethroughLine, ezmax_api_definition__full_field_e_ezsignannotation_type__Text } ezmax_api_definition__full_field_e_ezsignannotation_type__e;

char* field_e_ezsignannotation_type_field_e_ezsignannotation_type_ToString(ezmax_api_definition__full_field_e_ezsignannotation_type__e field_e_ezsignannotation_type);

ezmax_api_definition__full_field_e_ezsignannotation_type__e field_e_ezsignannotation_type_field_e_ezsignannotation_type_FromString(char* field_e_ezsignannotation_type);

//cJSON *field_e_ezsignannotation_type_field_e_ezsignannotation_type_convertToJSON(ezmax_api_definition__full_field_e_ezsignannotation_type__e field_e_ezsignannotation_type);

//ezmax_api_definition__full_field_e_ezsignannotation_type__e field_e_ezsignannotation_type_field_e_ezsignannotation_type_parseFromJSON(cJSON *field_e_ezsignannotation_typeJSON);

#endif /* _field_e_ezsignannotation_type_H_ */

