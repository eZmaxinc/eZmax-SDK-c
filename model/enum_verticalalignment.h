/*
 * enum_verticalalignment.h
 *
 * The Vertical alignment
 */

#ifndef _enum_verticalalignment_H_
#define _enum_verticalalignment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct enum_verticalalignment_t enum_verticalalignment_t;


// Enum  for enum_verticalalignment

typedef enum { ezmax_api_definition__full_enum_verticalalignment__NULL = 0, ezmax_api_definition__full_enum_verticalalignment__Bottom, ezmax_api_definition__full_enum_verticalalignment__Middle, ezmax_api_definition__full_enum_verticalalignment__Top } ezmax_api_definition__full_enum_verticalalignment__e;

char* enum_verticalalignment_enum_verticalalignment_ToString(ezmax_api_definition__full_enum_verticalalignment__e enum_verticalalignment);

ezmax_api_definition__full_enum_verticalalignment__e enum_verticalalignment_enum_verticalalignment_FromString(char* enum_verticalalignment);

cJSON *enum_verticalalignment_convertToJSON(ezmax_api_definition__full_enum_verticalalignment__e enum_verticalalignment);

ezmax_api_definition__full_enum_verticalalignment__e enum_verticalalignment_parseFromJSON(cJSON *enum_verticalalignmentJSON);

#endif /* _enum_verticalalignment_H_ */

