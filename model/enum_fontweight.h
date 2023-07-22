/*
 * enum_fontweight.h
 *
 * The Font Weight
 */

#ifndef _enum_fontweight_H_
#define _enum_fontweight_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct enum_fontweight_t enum_fontweight_t;


// Enum  for enum_fontweight

typedef enum { ezmax_api_definition__full_enum_fontweight__NULL = 0, ezmax_api_definition__full_enum_fontweight__Normal, ezmax_api_definition__full_enum_fontweight__Bold } ezmax_api_definition__full_enum_fontweight__e;

char* enum_fontweight_enum_fontweight_ToString(ezmax_api_definition__full_enum_fontweight__e enum_fontweight);

ezmax_api_definition__full_enum_fontweight__e enum_fontweight_enum_fontweight_FromString(char* enum_fontweight);

//cJSON *enum_fontweight_enum_fontweight_convertToJSON(ezmax_api_definition__full_enum_fontweight__e enum_fontweight);

//ezmax_api_definition__full_enum_fontweight__e enum_fontweight_enum_fontweight_parseFromJSON(cJSON *enum_fontweightJSON);

#endif /* _enum_fontweight_H_ */

