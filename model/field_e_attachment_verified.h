/*
 * field_e_attachment_verified.h
 *
 * The verified of the Attachment
 */

#ifndef _field_e_attachment_verified_H_
#define _field_e_attachment_verified_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_attachment_verified_t field_e_attachment_verified_t;


// Enum  for field_e_attachment_verified

typedef enum { ezmax_api_definition__full_field_e_attachment_verified__NULL = 0, ezmax_api_definition__full_field_e_attachment_verified__No, ezmax_api_definition__full_field_e_attachment_verified__Yes, ezmax_api_definition__full_field_e_attachment_verified__Rejected } ezmax_api_definition__full_field_e_attachment_verified__e;

char* field_e_attachment_verified_field_e_attachment_verified_ToString(ezmax_api_definition__full_field_e_attachment_verified__e field_e_attachment_verified);

ezmax_api_definition__full_field_e_attachment_verified__e field_e_attachment_verified_field_e_attachment_verified_FromString(char* field_e_attachment_verified);

//cJSON *field_e_attachment_verified_field_e_attachment_verified_convertToJSON(ezmax_api_definition__full_field_e_attachment_verified__e field_e_attachment_verified);

//ezmax_api_definition__full_field_e_attachment_verified__e field_e_attachment_verified_field_e_attachment_verified_parseFromJSON(cJSON *field_e_attachment_verifiedJSON);

#endif /* _field_e_attachment_verified_H_ */

