/*
 * field_e_creditcardtransaction_cvdresult.h
 *
 * The result for the cvd validation
 */

#ifndef _field_e_creditcardtransaction_cvdresult_H_
#define _field_e_creditcardtransaction_cvdresult_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_e_creditcardtransaction_cvdresult_t field_e_creditcardtransaction_cvdresult_t;


// Enum  for field_e_creditcardtransaction_cvdresult

typedef enum { ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__NULL = 0, ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__Match, ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__NoMatch, ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__NotVerified } ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e;

char* field_e_creditcardtransaction_cvdresult_field_e_creditcardtransaction_cvdresult_ToString(ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e field_e_creditcardtransaction_cvdresult);

ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e field_e_creditcardtransaction_cvdresult_field_e_creditcardtransaction_cvdresult_FromString(char* field_e_creditcardtransaction_cvdresult);

cJSON *field_e_creditcardtransaction_cvdresult_convertToJSON(ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e field_e_creditcardtransaction_cvdresult);

ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e field_e_creditcardtransaction_cvdresult_parseFromJSON(cJSON *field_e_creditcardtransaction_cvdresultJSON);

#endif /* _field_e_creditcardtransaction_cvdresult_H_ */

