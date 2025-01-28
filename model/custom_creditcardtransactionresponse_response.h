/*
 * custom_creditcardtransactionresponse_response.h
 *
 * A custom Creditcardtransactionresponse Object
 */

#ifndef _custom_creditcardtransactionresponse_response_H_
#define _custom_creditcardtransactionresponse_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_creditcardtransactionresponse_response_t custom_creditcardtransactionresponse_response_t;

#include "field_e_creditcardtransaction_avsresult.h"
#include "field_e_creditcardtransaction_cvdresult.h"



typedef struct custom_creditcardtransactionresponse_response_t {
    char *s_creditcardtransaction_is_ocode; // string
    char *s_creditcardtransaction_responsecode; // string
    char *s_creditcardtransaction_responseterminalmessage; // string
    ezmax_api_definition__full_field_e_creditcardtransaction_avsresult__e e_creditcardtransaction_avsresult; //referenced enum
    ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e e_creditcardtransaction_cvdresult; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} custom_creditcardtransactionresponse_response_t;

__attribute__((deprecated)) custom_creditcardtransactionresponse_response_t *custom_creditcardtransactionresponse_response_create(
    char *s_creditcardtransaction_is_ocode,
    char *s_creditcardtransaction_responsecode,
    char *s_creditcardtransaction_responseterminalmessage,
    ezmax_api_definition__full_field_e_creditcardtransaction_avsresult__e e_creditcardtransaction_avsresult,
    ezmax_api_definition__full_field_e_creditcardtransaction_cvdresult__e e_creditcardtransaction_cvdresult
);

void custom_creditcardtransactionresponse_response_free(custom_creditcardtransactionresponse_response_t *custom_creditcardtransactionresponse_response);

custom_creditcardtransactionresponse_response_t *custom_creditcardtransactionresponse_response_parseFromJSON(cJSON *custom_creditcardtransactionresponse_responseJSON);

cJSON *custom_creditcardtransactionresponse_response_convertToJSON(custom_creditcardtransactionresponse_response_t *custom_creditcardtransactionresponse_response);

#endif /* _custom_creditcardtransactionresponse_response_H_ */

