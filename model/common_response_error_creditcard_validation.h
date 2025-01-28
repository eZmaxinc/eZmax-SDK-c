/*
 * common_response_error_creditcard_validation.h
 *
 * Generic Error Message
 */

#ifndef _common_response_error_creditcard_validation_H_
#define _common_response_error_creditcard_validation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_error_creditcard_validation_t common_response_error_creditcard_validation_t;

#include "custom_creditcardtransactionresponse_response.h"
#include "field_e_error_code.h"



typedef struct common_response_error_creditcard_validation_t {
    char *s_error_message; // string
    ezmax_api_definition__full_field_e_error_code__e e_error_code; //referenced enum
    list_t *a_s_error_messagedetail; //primitive container
    struct custom_creditcardtransactionresponse_response_t *obj_creditcardtransactionresponse; //model

    int _library_owned; // Is the library responsible for freeing this object?
} common_response_error_creditcard_validation_t;

__attribute__((deprecated)) common_response_error_creditcard_validation_t *common_response_error_creditcard_validation_create(
    char *s_error_message,
    ezmax_api_definition__full_field_e_error_code__e e_error_code,
    list_t *a_s_error_messagedetail,
    custom_creditcardtransactionresponse_response_t *obj_creditcardtransactionresponse
);

void common_response_error_creditcard_validation_free(common_response_error_creditcard_validation_t *common_response_error_creditcard_validation);

common_response_error_creditcard_validation_t *common_response_error_creditcard_validation_parseFromJSON(cJSON *common_response_error_creditcard_validationJSON);

cJSON *common_response_error_creditcard_validation_convertToJSON(common_response_error_creditcard_validation_t *common_response_error_creditcard_validation);

#endif /* _common_response_error_creditcard_validation_H_ */

