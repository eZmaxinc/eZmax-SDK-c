/*
 * field_e_user_origin.h
 *
 * The origin of the User
 */

#ifndef _field_e_user_origin_H_
#define _field_e_user_origin_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_user_origin_t field_e_user_origin_t;


// Enum  for field_e_user_origin

typedef enum { ezmax_api_definition__full_field_e_user_origin__NULL = 0, ezmax_api_definition__full_field_e_user_origin__BuiltIn, ezmax_api_definition__full_field_e_user_origin__External } ezmax_api_definition__full_field_e_user_origin__e;

char* field_e_user_origin_field_e_user_origin_ToString(ezmax_api_definition__full_field_e_user_origin__e field_e_user_origin);

ezmax_api_definition__full_field_e_user_origin__e field_e_user_origin_field_e_user_origin_FromString(char* field_e_user_origin);

//cJSON *field_e_user_origin_field_e_user_origin_convertToJSON(ezmax_api_definition__full_field_e_user_origin__e field_e_user_origin);

//ezmax_api_definition__full_field_e_user_origin__e field_e_user_origin_field_e_user_origin_parseFromJSON(cJSON *field_e_user_originJSON);

#endif /* _field_e_user_origin_H_ */

