/*
 * field_e_signature_preference.h
 *
 * The Preference of the Signature
 */

#ifndef _field_e_signature_preference_H_
#define _field_e_signature_preference_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_signature_preference_t field_e_signature_preference_t;


// Enum  for field_e_signature_preference

typedef enum { ezmax_api_definition__full_field_e_signature_preference__NULL = 0, ezmax_api_definition__full_field_e_signature_preference__Text, ezmax_api_definition__full_field_e_signature_preference__Handwritten } ezmax_api_definition__full_field_e_signature_preference__e;

char* field_e_signature_preference_field_e_signature_preference_ToString(ezmax_api_definition__full_field_e_signature_preference__e field_e_signature_preference);

ezmax_api_definition__full_field_e_signature_preference__e field_e_signature_preference_field_e_signature_preference_FromString(char* field_e_signature_preference);

cJSON *field_e_signature_preference_convertToJSON(ezmax_api_definition__full_field_e_signature_preference__e field_e_signature_preference);

ezmax_api_definition__full_field_e_signature_preference__e field_e_signature_preference_parseFromJSON(cJSON *field_e_signature_preferenceJSON);

#endif /* _field_e_signature_preference_H_ */

