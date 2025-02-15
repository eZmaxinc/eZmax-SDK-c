/*
 * field_e_attachment_type.h
 *
 * The type of the Attachment
 */

#ifndef _field_e_attachment_type_H_
#define _field_e_attachment_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_attachment_type_t field_e_attachment_type_t;


// Enum  for field_e_attachment_type

typedef enum { ezmax_api_definition__full_field_e_attachment_type__NULL = 0, ezmax_api_definition__full_field_e_attachment_type__Other, ezmax_api_definition__full_field_e_attachment_type__Pdf, ezmax_api_definition__full_field_e_attachment_type__PdfGenerated, ezmax_api_definition__full_field_e_attachment_type__PdfScanned, ezmax_api_definition__full_field_e_attachment_type__Ezsign } ezmax_api_definition__full_field_e_attachment_type__e;

char* field_e_attachment_type_field_e_attachment_type_ToString(ezmax_api_definition__full_field_e_attachment_type__e field_e_attachment_type);

ezmax_api_definition__full_field_e_attachment_type__e field_e_attachment_type_field_e_attachment_type_FromString(char* field_e_attachment_type);

cJSON *field_e_attachment_type_convertToJSON(ezmax_api_definition__full_field_e_attachment_type__e field_e_attachment_type);

ezmax_api_definition__full_field_e_attachment_type__e field_e_attachment_type_parseFromJSON(cJSON *field_e_attachment_typeJSON);

#endif /* _field_e_attachment_type_H_ */

