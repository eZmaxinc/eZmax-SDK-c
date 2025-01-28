/*
 * field_e_phone_type.h
 *
 * The type of phone number.  **Local** refers to a north American phone number. You would then need to specify sPhoneRegion, sPhoneExchange, sPhoneNumber. **International** would be used for numbers outside of north america. You would then need to specify sPhoneInternational
 */

#ifndef _field_e_phone_type_H_
#define _field_e_phone_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_phone_type_t field_e_phone_type_t;


// Enum  for field_e_phone_type

typedef enum { ezmax_api_definition__full_field_e_phone_type__NULL = 0, ezmax_api_definition__full_field_e_phone_type__Local, ezmax_api_definition__full_field_e_phone_type__International } ezmax_api_definition__full_field_e_phone_type__e;

char* field_e_phone_type_field_e_phone_type_ToString(ezmax_api_definition__full_field_e_phone_type__e field_e_phone_type);

ezmax_api_definition__full_field_e_phone_type__e field_e_phone_type_field_e_phone_type_FromString(char* field_e_phone_type);

cJSON *field_e_phone_type_convertToJSON(ezmax_api_definition__full_field_e_phone_type__e field_e_phone_type);

ezmax_api_definition__full_field_e_phone_type__e field_e_phone_type_parseFromJSON(cJSON *field_e_phone_typeJSON);

#endif /* _field_e_phone_type_H_ */

