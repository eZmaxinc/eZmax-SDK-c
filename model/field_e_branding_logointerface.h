/*
 * field_e_branding_logointerface.h
 *
 * The logo for the Branding. Select the value &#39;Default&#39; if you want to use the default logo and delete the custom one if you used one
 */

#ifndef _field_e_branding_logointerface_H_
#define _field_e_branding_logointerface_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_branding_logointerface_t field_e_branding_logointerface_t;


// Enum  for field_e_branding_logointerface

typedef enum { ezmax_api_definition__full_field_e_branding_logointerface__NULL = 0, ezmax_api_definition__full_field_e_branding_logointerface___Default, ezmax_api_definition__full_field_e_branding_logointerface__JPEG, ezmax_api_definition__full_field_e_branding_logointerface__PNG } ezmax_api_definition__full_field_e_branding_logointerface__e;

char* field_e_branding_logointerface_field_e_branding_logointerface_ToString(ezmax_api_definition__full_field_e_branding_logointerface__e field_e_branding_logointerface);

ezmax_api_definition__full_field_e_branding_logointerface__e field_e_branding_logointerface_field_e_branding_logointerface_FromString(char* field_e_branding_logointerface);

//cJSON *field_e_branding_logointerface_field_e_branding_logointerface_convertToJSON(ezmax_api_definition__full_field_e_branding_logointerface__e field_e_branding_logointerface);

//ezmax_api_definition__full_field_e_branding_logointerface__e field_e_branding_logointerface_field_e_branding_logointerface_parseFromJSON(cJSON *field_e_branding_logointerfaceJSON);

#endif /* _field_e_branding_logointerface_H_ */

