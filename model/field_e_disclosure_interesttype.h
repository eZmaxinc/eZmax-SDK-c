/*
 * field_e_disclosure_interesttype.h
 *
 * The interesttype of the Disclosure
 */

#ifndef _field_e_disclosure_interesttype_H_
#define _field_e_disclosure_interesttype_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_disclosure_interesttype_t field_e_disclosure_interesttype_t;


// Enum  for field_e_disclosure_interesttype

typedef enum { ezmax_api_definition__full_field_e_disclosure_interesttype__NULL = 0, ezmax_api_definition__full_field_e_disclosure_interesttype__Direct, ezmax_api_definition__full_field_e_disclosure_interesttype__Indirect } ezmax_api_definition__full_field_e_disclosure_interesttype__e;

char* field_e_disclosure_interesttype_field_e_disclosure_interesttype_ToString(ezmax_api_definition__full_field_e_disclosure_interesttype__e field_e_disclosure_interesttype);

ezmax_api_definition__full_field_e_disclosure_interesttype__e field_e_disclosure_interesttype_field_e_disclosure_interesttype_FromString(char* field_e_disclosure_interesttype);

cJSON *field_e_disclosure_interesttype_convertToJSON(ezmax_api_definition__full_field_e_disclosure_interesttype__e field_e_disclosure_interesttype);

ezmax_api_definition__full_field_e_disclosure_interesttype__e field_e_disclosure_interesttype_parseFromJSON(cJSON *field_e_disclosure_interesttypeJSON);

#endif /* _field_e_disclosure_interesttype_H_ */

