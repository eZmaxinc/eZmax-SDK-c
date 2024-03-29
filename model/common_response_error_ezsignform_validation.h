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

// Enum  for common_response_error_ezsignform_validation

typedef enum  { ezmax_api_definition__full_common_response_error_ezsignform_validation__NULL = 0, ezmax_api_definition__full_common_response_error_ezsignform_validation__BADREQUEST, ezmax_api_definition__full_common_response_error_ezsignform_validation__BADREQUEST_CLOCKSKEW, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNAUTHORIZED_BADAUTH, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNAUTHORIZED_BADMFA, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNAUTHORIZED_EXPIRED, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNAUTHORIZED_REQUEST, ezmax_api_definition__full_common_response_error_ezsignform_validation__FORBIDDEN, ezmax_api_definition__full_common_response_error_ezsignform_validation__FORBIDDEN_CONFIGURATION, ezmax_api_definition__full_common_response_error_ezsignform_validation__FORBIDDEN_MODULE, ezmax_api_definition__full_common_response_error_ezsignform_validation__FORBIDDEN_NOACCESS, ezmax_api_definition__full_common_response_error_ezsignform_validation__FORBIDDEN_PERMISSION, ezmax_api_definition__full_common_response_error_ezsignform_validation__FORBIDDEN_SUBSCRIPTION, ezmax_api_definition__full_common_response_error_ezsignform_validation__FORBIDDEN_USERTYPE, ezmax_api_definition__full_common_response_error_ezsignform_validation__FORBIDDEN_USER_ORIGIN_EXTERNAL, ezmax_api_definition__full_common_response_error_ezsignform_validation__NOTFOUND, ezmax_api_definition__full_common_response_error_ezsignform_validation__NOTFOUND_OBJECT, ezmax_api_definition__full_common_response_error_ezsignform_validation__NOTFOUND_ROUTE, ezmax_api_definition__full_common_response_error_ezsignform_validation__METHODNOTALLOWED, ezmax_api_definition__full_common_response_error_ezsignform_validation__NOTACCEPTABLE_CONTENT, ezmax_api_definition__full_common_response_error_ezsignform_validation__NOTACCEPTABLE_LANGUAGE, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_ACTIVESESSION_ALREADY_CLONING, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_CANNOTDELETE, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_CANNOTMODIFY, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_CHANGEPASSWORD_INVALID_CURRENT, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_CHANGEPASSWORD_SAME, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_DATA_MISSING, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_DATA_UNIQUE, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_DATA_VALIDATION, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_DATA_OUTOFBOUND, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_DOWNLOAD_ERROR, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_EZSIGNFORM_VALIDATION, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_EZSIGNSIGNERCONNECTED, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_NOTHINGTODO, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_NOTREADY, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_PDF_FORM, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_PDF_SIGNATURE, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_PDF_FORM_AND_SIGNATURE, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_PDF_INCOMPATIBLE, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_PDF_PASSWORD, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_PDF_WRONG_PASSWORD, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_PDF_REPAIRABLE, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_PDF_XFA, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_TEMPLATE_MISMATCH, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_UNMODIFIABLE_FIELD, ezmax_api_definition__full_common_response_error_ezsignform_validation__UNPROCESSABLEENTITY_USER_STAGED, ezmax_api_definition__full_common_response_error_ezsignform_validation__TOOMANYREQUESTS, ezmax_api_definition__full_common_response_error_ezsignform_validation__TOOMANYREQUESTS_THIRDPARTY, ezmax_api_definition__full_common_response_error_ezsignform_validation__ERROR_INTERNAL, ezmax_api_definition__full_common_response_error_ezsignform_validation__ERROR_CONFIGURATION, ezmax_api_definition__full_common_response_error_ezsignform_validation__ERROR_NOTIMPLEMENTED } ezmax_api_definition__full_common_response_error_ezsignform_validation__e;

char* common_response_error_ezsignform_validation_e_error_code_ToString(ezmax_api_definition__full_common_response_error_ezsignform_validation__e e_error_code);

ezmax_api_definition__full_common_response_error_ezsignform_validation__e common_response_error_ezsignform_validation_e_error_code_FromString(char* e_error_code);



typedef struct common_response_error_ezsignform_validation_t {
    list_t *a_obj_ezsignformfielderror; //nonprimitive container
    char *s_error_message; // string
    field_e_error_code_t *e_error_code; // custom

} common_response_error_ezsignform_validation_t;

common_response_error_ezsignform_validation_t *common_response_error_ezsignform_validation_create(
    list_t *a_obj_ezsignformfielderror,
    char *s_error_message,
    field_e_error_code_t *e_error_code
);

void common_response_error_ezsignform_validation_free(common_response_error_ezsignform_validation_t *common_response_error_ezsignform_validation);

common_response_error_ezsignform_validation_t *common_response_error_ezsignform_validation_parseFromJSON(cJSON *common_response_error_ezsignform_validationJSON);

cJSON *common_response_error_ezsignform_validation_convertToJSON(common_response_error_ezsignform_validation_t *common_response_error_ezsignform_validation);

#endif /* _common_response_error_ezsignform_validation_H_ */

