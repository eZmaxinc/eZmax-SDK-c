/*
 * field_e_branding_logo.h
 *
 * The logo for the Branding. Select the value &#39;Default&#39; if you want to use the default logo and delete the custom one if you used one
 */

#ifndef _field_e_branding_logo_H_
#define _field_e_branding_logo_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_branding_logo_t field_e_branding_logo_t;


// Enum  for field_e_branding_logo

typedef enum { ezmax_api_definition__full_field_e_branding_logo__NULL = 0, ezmax_api_definition__full_field_e_branding_logo___Default, ezmax_api_definition__full_field_e_branding_logo__JPEG, ezmax_api_definition__full_field_e_branding_logo__PNG } ezmax_api_definition__full_field_e_branding_logo__e;

char* field_e_branding_logo_field_e_branding_logo_ToString(ezmax_api_definition__full_field_e_branding_logo__e field_e_branding_logo);

ezmax_api_definition__full_field_e_branding_logo__e field_e_branding_logo_field_e_branding_logo_FromString(char* field_e_branding_logo);

//cJSON *field_e_branding_logo_field_e_branding_logo_convertToJSON(ezmax_api_definition__full_field_e_branding_logo__e field_e_branding_logo);

//ezmax_api_definition__full_field_e_branding_logo__e field_e_branding_logo_field_e_branding_logo_parseFromJSON(cJSON *field_e_branding_logoJSON);

#endif /* _field_e_branding_logo_H_ */

