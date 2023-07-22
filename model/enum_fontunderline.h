/*
 * enum_fontunderline.h
 *
 * The Font Underline style
 */

#ifndef _enum_fontunderline_H_
#define _enum_fontunderline_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct enum_fontunderline_t enum_fontunderline_t;


// Enum  for enum_fontunderline

typedef enum { ezmax_api_definition__full_enum_fontunderline__NULL = 0, ezmax_api_definition__full_enum_fontunderline__None, ezmax_api_definition__full_enum_fontunderline__Single, ezmax_api_definition__full_enum_fontunderline___Double } ezmax_api_definition__full_enum_fontunderline__e;

char* enum_fontunderline_enum_fontunderline_ToString(ezmax_api_definition__full_enum_fontunderline__e enum_fontunderline);

ezmax_api_definition__full_enum_fontunderline__e enum_fontunderline_enum_fontunderline_FromString(char* enum_fontunderline);

//cJSON *enum_fontunderline_enum_fontunderline_convertToJSON(ezmax_api_definition__full_enum_fontunderline__e enum_fontunderline);

//ezmax_api_definition__full_enum_fontunderline__e enum_fontunderline_enum_fontunderline_parseFromJSON(cJSON *enum_fontunderlineJSON);

#endif /* _enum_fontunderline_H_ */

