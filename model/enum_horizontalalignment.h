/*
 * enum_horizontalalignment.h
 *
 * The Horizontal alignment
 */

#ifndef _enum_horizontalalignment_H_
#define _enum_horizontalalignment_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct enum_horizontalalignment_t enum_horizontalalignment_t;


// Enum  for enum_horizontalalignment

typedef enum { ezmax_api_definition__full_enum_horizontalalignment__NULL = 0, ezmax_api_definition__full_enum_horizontalalignment__Center, ezmax_api_definition__full_enum_horizontalalignment__Left, ezmax_api_definition__full_enum_horizontalalignment__Right } ezmax_api_definition__full_enum_horizontalalignment__e;

char* enum_horizontalalignment_enum_horizontalalignment_ToString(ezmax_api_definition__full_enum_horizontalalignment__e enum_horizontalalignment);

ezmax_api_definition__full_enum_horizontalalignment__e enum_horizontalalignment_enum_horizontalalignment_FromString(char* enum_horizontalalignment);

cJSON *enum_horizontalalignment_convertToJSON(ezmax_api_definition__full_enum_horizontalalignment__e enum_horizontalalignment);

ezmax_api_definition__full_enum_horizontalalignment__e enum_horizontalalignment_parseFromJSON(cJSON *enum_horizontalalignmentJSON);

#endif /* _enum_horizontalalignment_H_ */

