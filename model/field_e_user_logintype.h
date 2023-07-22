/*
 * field_e_user_logintype.h
 *
 * The type of authentication for the User
 */

#ifndef _field_e_user_logintype_H_
#define _field_e_user_logintype_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_user_logintype_t field_e_user_logintype_t;


// Enum  for field_e_user_logintype

typedef enum { ezmax_api_definition__full_field_e_user_logintype__NULL = 0, ezmax_api_definition__full_field_e_user_logintype__Password, ezmax_api_definition__full_field_e_user_logintype__PasswordPhone, ezmax_api_definition__full_field_e_user_logintype__PasswordQuestion } ezmax_api_definition__full_field_e_user_logintype__e;

char* field_e_user_logintype_field_e_user_logintype_ToString(ezmax_api_definition__full_field_e_user_logintype__e field_e_user_logintype);

ezmax_api_definition__full_field_e_user_logintype__e field_e_user_logintype_field_e_user_logintype_FromString(char* field_e_user_logintype);

//cJSON *field_e_user_logintype_field_e_user_logintype_convertToJSON(ezmax_api_definition__full_field_e_user_logintype__e field_e_user_logintype);

//ezmax_api_definition__full_field_e_user_logintype__e field_e_user_logintype_field_e_user_logintype_parseFromJSON(cJSON *field_e_user_logintypeJSON);

#endif /* _field_e_user_logintype_H_ */

