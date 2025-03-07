/*
 * enum_reportdata_type.h
 *
 * Type of data in column
 */

#ifndef _enum_reportdata_type_H_
#define _enum_reportdata_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct enum_reportdata_type_t enum_reportdata_type_t;


// Enum  for enum_reportdata_type

typedef enum { ezmax_api_definition__full_enum_reportdata_type__NULL = 0, ezmax_api_definition__full_enum_reportdata_type__Date, ezmax_api_definition__full_enum_reportdata_type__Money, ezmax_api_definition__full_enum_reportdata_type__Number, ezmax_api_definition__full_enum_reportdata_type__Percentage, ezmax_api_definition__full_enum_reportdata_type__Period, ezmax_api_definition__full_enum_reportdata_type__String } ezmax_api_definition__full_enum_reportdata_type__e;

char* enum_reportdata_type_enum_reportdata_type_ToString(ezmax_api_definition__full_enum_reportdata_type__e enum_reportdata_type);

ezmax_api_definition__full_enum_reportdata_type__e enum_reportdata_type_enum_reportdata_type_FromString(char* enum_reportdata_type);

cJSON *enum_reportdata_type_convertToJSON(ezmax_api_definition__full_enum_reportdata_type__e enum_reportdata_type);

ezmax_api_definition__full_enum_reportdata_type__e enum_reportdata_type_parseFromJSON(cJSON *enum_reportdata_typeJSON);

#endif /* _enum_reportdata_type_H_ */

