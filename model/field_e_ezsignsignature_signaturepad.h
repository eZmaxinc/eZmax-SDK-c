/*
 * field_e_ezsignsignature_signaturepad.h
 *
 * The type of signature pad required.
 */

#ifndef _field_e_ezsignsignature_signaturepad_H_
#define _field_e_ezsignsignature_signaturepad_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignsignature_signaturepad_t field_e_ezsignsignature_signaturepad_t;


// Enum  for field_e_ezsignsignature_signaturepad

typedef enum { ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__NULL = 0, ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__Topaz } ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__e;

char* field_e_ezsignsignature_signaturepad_field_e_ezsignsignature_signaturepad_ToString(ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__e field_e_ezsignsignature_signaturepad);

ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__e field_e_ezsignsignature_signaturepad_field_e_ezsignsignature_signaturepad_FromString(char* field_e_ezsignsignature_signaturepad);

cJSON *field_e_ezsignsignature_signaturepad_convertToJSON(ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__e field_e_ezsignsignature_signaturepad);

ezmax_api_definition__full_field_e_ezsignsignature_signaturepad__e field_e_ezsignsignature_signaturepad_parseFromJSON(cJSON *field_e_ezsignsignature_signaturepadJSON);

#endif /* _field_e_ezsignsignature_signaturepad_H_ */

