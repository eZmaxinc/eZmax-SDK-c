/*
 * field_e_creditcardtype_codename.h
 *
 * The codename of the Creditcardtype
 */

#ifndef _field_e_creditcardtype_codename_H_
#define _field_e_creditcardtype_codename_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_creditcardtype_codename_t field_e_creditcardtype_codename_t;


// Enum  for field_e_creditcardtype_codename

typedef enum { ezmax_api_definition__full_field_e_creditcardtype_codename__NULL = 0, ezmax_api_definition__full_field_e_creditcardtype_codename__Amex, ezmax_api_definition__full_field_e_creditcardtype_codename__Mastercard, ezmax_api_definition__full_field_e_creditcardtype_codename__Visa } ezmax_api_definition__full_field_e_creditcardtype_codename__e;

char* field_e_creditcardtype_codename_field_e_creditcardtype_codename_ToString(ezmax_api_definition__full_field_e_creditcardtype_codename__e field_e_creditcardtype_codename);

ezmax_api_definition__full_field_e_creditcardtype_codename__e field_e_creditcardtype_codename_field_e_creditcardtype_codename_FromString(char* field_e_creditcardtype_codename);

cJSON *field_e_creditcardtype_codename_convertToJSON(ezmax_api_definition__full_field_e_creditcardtype_codename__e field_e_creditcardtype_codename);

ezmax_api_definition__full_field_e_creditcardtype_codename__e field_e_creditcardtype_codename_parseFromJSON(cJSON *field_e_creditcardtype_codenameJSON);

#endif /* _field_e_creditcardtype_codename_H_ */

