/*
 * common_response_error_ezsignform_validation.h
 *
 * Generic Error Message
 */

#ifndef _common_response_error_ezsignform_validation_H_
#define _common_response_error_ezsignform_validation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_error_ezsignform_validation_t common_response_error_ezsignform_validation_t;

#include "custom_ezsignformfielderror_response.h"
#include "field_e_error_code.h"



typedef struct common_response_error_ezsignform_validation_t {
    char *s_error_message; // string
    ezmax_api_definition__full_field_e_error_code__e e_error_code; //referenced enum
    list_t *a_s_error_messagedetail; //primitive container
    list_t *a_obj_ezsignformfielderror; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} common_response_error_ezsignform_validation_t;

__attribute__((deprecated)) common_response_error_ezsignform_validation_t *common_response_error_ezsignform_validation_create(
    char *s_error_message,
    ezmax_api_definition__full_field_e_error_code__e e_error_code,
    list_t *a_s_error_messagedetail,
    list_t *a_obj_ezsignformfielderror
);

void common_response_error_ezsignform_validation_free(common_response_error_ezsignform_validation_t *common_response_error_ezsignform_validation);

common_response_error_ezsignform_validation_t *common_response_error_ezsignform_validation_parseFromJSON(cJSON *common_response_error_ezsignform_validationJSON);

cJSON *common_response_error_ezsignform_validation_convertToJSON(common_response_error_ezsignform_validation_t *common_response_error_ezsignform_validation);

#endif /* _common_response_error_ezsignform_validation_H_ */

