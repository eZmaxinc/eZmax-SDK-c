/*
 * field_e_ezsigntemplatesignature_font.h
 *
 * The font of the signature. This can only be set if eEzsigntemplatesignatureType is **Name** or **Initials**
 */

#ifndef _field_e_ezsigntemplatesignature_font_H_
#define _field_e_ezsigntemplatesignature_font_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsigntemplatesignature_font_t field_e_ezsigntemplatesignature_font_t;


// Enum  for field_e_ezsigntemplatesignature_font

typedef enum { ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__NULL = 0, ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__Normal, ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__Cursive } ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__e;

char* field_e_ezsigntemplatesignature_font_field_e_ezsigntemplatesignature_font_ToString(ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__e field_e_ezsigntemplatesignature_font);

ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__e field_e_ezsigntemplatesignature_font_field_e_ezsigntemplatesignature_font_FromString(char* field_e_ezsigntemplatesignature_font);

//cJSON *field_e_ezsigntemplatesignature_font_field_e_ezsigntemplatesignature_font_convertToJSON(ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__e field_e_ezsigntemplatesignature_font);

//ezmax_api_definition__full_field_e_ezsigntemplatesignature_font__e field_e_ezsigntemplatesignature_font_field_e_ezsigntemplatesignature_font_parseFromJSON(cJSON *field_e_ezsigntemplatesignature_fontJSON);

#endif /* _field_e_ezsigntemplatesignature_font_H_ */

