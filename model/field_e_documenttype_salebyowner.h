/*
 * field_e_documenttype_salebyowner.h
 *
 * The salebyowner of the Documenttype
 */

#ifndef _field_e_documenttype_salebyowner_H_
#define _field_e_documenttype_salebyowner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_documenttype_salebyowner_t field_e_documenttype_salebyowner_t;


// Enum  for field_e_documenttype_salebyowner

typedef enum { ezmax_api_definition__full_field_e_documenttype_salebyowner__NULL = 0, ezmax_api_definition__full_field_e_documenttype_salebyowner__All, ezmax_api_definition__full_field_e_documenttype_salebyowner__Yes, ezmax_api_definition__full_field_e_documenttype_salebyowner__No } ezmax_api_definition__full_field_e_documenttype_salebyowner__e;

char* field_e_documenttype_salebyowner_field_e_documenttype_salebyowner_ToString(ezmax_api_definition__full_field_e_documenttype_salebyowner__e field_e_documenttype_salebyowner);

ezmax_api_definition__full_field_e_documenttype_salebyowner__e field_e_documenttype_salebyowner_field_e_documenttype_salebyowner_FromString(char* field_e_documenttype_salebyowner);

cJSON *field_e_documenttype_salebyowner_convertToJSON(ezmax_api_definition__full_field_e_documenttype_salebyowner__e field_e_documenttype_salebyowner);

ezmax_api_definition__full_field_e_documenttype_salebyowner__e field_e_documenttype_salebyowner_parseFromJSON(cJSON *field_e_documenttype_salebyownerJSON);

#endif /* _field_e_documenttype_salebyowner_H_ */

