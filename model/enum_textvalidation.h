/*
 * enum_textvalidation.h
 *
 * The text validation
 */

#ifndef _enum_textvalidation_H_
#define _enum_textvalidation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct enum_textvalidation_t enum_textvalidation_t;


// Enum  for enum_textvalidation

typedef enum { ezmax_api_definition__full_enum_textvalidation__NULL = 0, ezmax_api_definition__full_enum_textvalidation__None, ezmax_api_definition__full_enum_textvalidation__Date (YYYY_MM_DD), ezmax_api_definition__full_enum_textvalidation__Date (MM/DD/YYYY), ezmax_api_definition__full_enum_textvalidation__Date (MM/DD/YY), ezmax_api_definition__full_enum_textvalidation__Date (DD/MM/YYYY), ezmax_api_definition__full_enum_textvalidation__Date (DD/MM/YY), ezmax_api_definition__full_enum_textvalidation__Email, ezmax_api_definition__full_enum_textvalidation__Letters, ezmax_api_definition__full_enum_textvalidation__Numbers, ezmax_api_definition__full_enum_textvalidation__Zip, ezmax_api_definition__full_enum_textvalidation__Zip+4, ezmax_api_definition__full_enum_textvalidation__PostalCode, ezmax_api_definition__full_enum_textvalidation__Custom } ezmax_api_definition__full_enum_textvalidation__e;

char* enum_textvalidation_enum_textvalidation_ToString(ezmax_api_definition__full_enum_textvalidation__e enum_textvalidation);

ezmax_api_definition__full_enum_textvalidation__e enum_textvalidation_enum_textvalidation_FromString(char* enum_textvalidation);

cJSON *enum_textvalidation_convertToJSON(ezmax_api_definition__full_enum_textvalidation__e enum_textvalidation);

ezmax_api_definition__full_enum_textvalidation__e enum_textvalidation_parseFromJSON(cJSON *enum_textvalidationJSON);

#endif /* _enum_textvalidation_H_ */

