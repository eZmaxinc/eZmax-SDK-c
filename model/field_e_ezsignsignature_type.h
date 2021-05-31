/*
 * field_e_ezsignsignature_type.h
 *
 * The type of signature.  1. **Acknowledgement** is for an acknowledgment of receipt. 2. **City** is to request the city where the document is signed. 2. **Handwritten** is for a handwritten kind of signature where users needs to \&quot;draw\&quot; their signature on screen. 3. **Initials** is a simple \&quot;click to add initials\&quot; block. 4. **Name** is a simple \&quot;Click to sign\&quot; block. This is the most common block of signature.
 */

#ifndef _field_e_ezsignsignature_type_H_
#define _field_e_ezsignsignature_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_ezsignsignature_type_t field_e_ezsignsignature_type_t;


// Enum  for field_e_ezsignsignature_type

typedef enum { ezmax_api_definition_field_e_ezsignsignature_type__NULL = 0, ezmax_api_definition_field_e_ezsignsignature_type__Acknowledgement, ezmax_api_definition_field_e_ezsignsignature_type__City, ezmax_api_definition_field_e_ezsignsignature_type__Handwritten, ezmax_api_definition_field_e_ezsignsignature_type__Initials, ezmax_api_definition_field_e_ezsignsignature_type__Name } ezmax_api_definition_field_e_ezsignsignature_type__e;

char* field_e_ezsignsignature_type_field_e_ezsignsignature_type_ToString(ezmax_api_definition_field_e_ezsignsignature_type__e field_e_ezsignsignature_type);

ezmax_api_definition_field_e_ezsignsignature_type__e field_e_ezsignsignature_type_field_e_ezsignsignature_type_FromString(char* field_e_ezsignsignature_type);

//cJSON *field_e_ezsignsignature_type_field_e_ezsignsignature_type_convertToJSON(ezmax_api_definition_field_e_ezsignsignature_type__e field_e_ezsignsignature_type);

//ezmax_api_definition_field_e_ezsignsignature_type__e field_e_ezsignsignature_type_field_e_ezsignsignature_type_parseFromJSON(cJSON *field_e_ezsignsignature_typeJSON);

#endif /* _field_e_ezsignsignature_type_H_ */

