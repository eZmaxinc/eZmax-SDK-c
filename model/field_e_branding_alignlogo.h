/*
 * field_e_branding_alignlogo.h
 *
 * Alignment of logo for the Branding.
 */

#ifndef _field_e_branding_alignlogo_H_
#define _field_e_branding_alignlogo_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_branding_alignlogo_t field_e_branding_alignlogo_t;


// Enum  for field_e_branding_alignlogo

typedef enum { ezmax_api_definition__full_field_e_branding_alignlogo__NULL = 0, ezmax_api_definition__full_field_e_branding_alignlogo__Center, ezmax_api_definition__full_field_e_branding_alignlogo__Left, ezmax_api_definition__full_field_e_branding_alignlogo__Right } ezmax_api_definition__full_field_e_branding_alignlogo__e;

char* field_e_branding_alignlogo_field_e_branding_alignlogo_ToString(ezmax_api_definition__full_field_e_branding_alignlogo__e field_e_branding_alignlogo);

ezmax_api_definition__full_field_e_branding_alignlogo__e field_e_branding_alignlogo_field_e_branding_alignlogo_FromString(char* field_e_branding_alignlogo);

cJSON *field_e_branding_alignlogo_convertToJSON(ezmax_api_definition__full_field_e_branding_alignlogo__e field_e_branding_alignlogo);

ezmax_api_definition__full_field_e_branding_alignlogo__e field_e_branding_alignlogo_parseFromJSON(cJSON *field_e_branding_alignlogoJSON);

#endif /* _field_e_branding_alignlogo_H_ */

