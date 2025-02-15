/*
 * field_e_ezsignsignature_consultationtrigger.h
 *
 * Indicates when the “consultation” type signature must be signed.  1. **Automatic** When the document is displayed . 2. **Manual** The user must indicate that he has viewed the document.
 */

#ifndef _field_e_ezsignsignature_consultationtrigger_H_
#define _field_e_ezsignsignature_consultationtrigger_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignsignature_consultationtrigger_t field_e_ezsignsignature_consultationtrigger_t;


// Enum  for field_e_ezsignsignature_consultationtrigger

typedef enum { ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__NULL = 0, ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__Automatic, ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__Manual } ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e;

char* field_e_ezsignsignature_consultationtrigger_field_e_ezsignsignature_consultationtrigger_ToString(ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e field_e_ezsignsignature_consultationtrigger);

ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e field_e_ezsignsignature_consultationtrigger_field_e_ezsignsignature_consultationtrigger_FromString(char* field_e_ezsignsignature_consultationtrigger);

cJSON *field_e_ezsignsignature_consultationtrigger_convertToJSON(ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e field_e_ezsignsignature_consultationtrigger);

ezmax_api_definition__full_field_e_ezsignsignature_consultationtrigger__e field_e_ezsignsignature_consultationtrigger_parseFromJSON(cJSON *field_e_ezsignsignature_consultationtriggerJSON);

#endif /* _field_e_ezsignsignature_consultationtrigger_H_ */

