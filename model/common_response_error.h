/*
 * common_response_error.h
 *
 * Generic Error Message
 */

#ifndef _common_response_error_H_
#define _common_response_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct common_response_error_t common_response_error_t;

#include "field_e_error_code.h"

// Enum  for common_response_error

typedef enum  { ezmax_api_definition__full_common_response_error__NULL = 0, ezmax_api_definition__full_common_response_error__BADREQUEST, ezmax_api_definition__full_common_response_error__BADREQUEST_CLOCKSKEW, ezmax_api_definition__full_common_response_error__UNAUTHORIZED_BADAUTH, ezmax_api_definition__full_common_response_error__UNAUTHORIZED_BADMFA, ezmax_api_definition__full_common_response_error__UNAUTHORIZED_EXPIRED, ezmax_api_definition__full_common_response_error__UNAUTHORIZED_REQUEST, ezmax_api_definition__full_common_response_error__FORBIDDEN, ezmax_api_definition__full_common_response_error__FORBIDDEN_CONFIGURATION, ezmax_api_definition__full_common_response_error__FORBIDDEN_MODULE, ezmax_api_definition__full_common_response_error__FORBIDDEN_NOACCESS, ezmax_api_definition__full_common_response_error__FORBIDDEN_PERMISSION, ezmax_api_definition__full_common_response_error__FORBIDDEN_SUBSCRIPTION, ezmax_api_definition__full_common_response_error__FORBIDDEN_USERTYPE, ezmax_api_definition__full_common_response_error__FORBIDDEN_USER_ORIGIN_EXTERNAL, ezmax_api_definition__full_common_response_error__NOTFOUND, ezmax_api_definition__full_common_response_error__NOTFOUND_OBJECT, ezmax_api_definition__full_common_response_error__NOTFOUND_ROUTE, ezmax_api_definition__full_common_response_error__METHODNOTALLOWED, ezmax_api_definition__full_common_response_error__NOTACCEPTABLE_CONTENT, ezmax_api_definition__full_common_response_error__NOTACCEPTABLE_LANGUAGE, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_ACTIVESESSION_ALREADY_CLONING, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_CANNOTDELETE, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_CANNOTMODIFY, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_CHANGEPASSWORD_INVALID_CURRENT, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_CHANGEPASSWORD_SAME, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_DATA_MISSING, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_DATA_UNIQUE, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_DATA_VALIDATION, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_DATA_OUTOFBOUND, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_DOWNLOAD_ERROR, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_EZSIGNFORM_VALIDATION, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_EZSIGNSIGNERCONNECTED, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_NOTHINGTODO, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_NOTREADY, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_PDF_FORM, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_PDF_SIGNATURE, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_PDF_FORM_AND_SIGNATURE, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_PDF_INCOMPATIBLE, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_PDF_PASSWORD, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_PDF_WRONG_PASSWORD, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_PDF_REPAIRABLE, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_PDF_XFA, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_TEMPLATE_MISMATCH, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_UNMODIFIABLE_FIELD, ezmax_api_definition__full_common_response_error__UNPROCESSABLEENTITY_USER_STAGED, ezmax_api_definition__full_common_response_error__TOOMANYREQUESTS, ezmax_api_definition__full_common_response_error__TOOMANYREQUESTS_THIRDPARTY, ezmax_api_definition__full_common_response_error__ERROR_INTERNAL, ezmax_api_definition__full_common_response_error__ERROR_CONFIGURATION, ezmax_api_definition__full_common_response_error__ERROR_NOTIMPLEMENTED } ezmax_api_definition__full_common_response_error__e;

char* common_response_error_e_error_code_ToString(ezmax_api_definition__full_common_response_error__e e_error_code);

ezmax_api_definition__full_common_response_error__e common_response_error_e_error_code_FromString(char* e_error_code);



typedef struct common_response_error_t {
    char *s_error_message; // string
    field_e_error_code_t *e_error_code; // custom

} common_response_error_t;

common_response_error_t *common_response_error_create(
    char *s_error_message,
    field_e_error_code_t *e_error_code
);

void common_response_error_free(common_response_error_t *common_response_error);

common_response_error_t *common_response_error_parseFromJSON(cJSON *common_response_errorJSON);

cJSON *common_response_error_convertToJSON(common_response_error_t *common_response_error);

#endif /* _common_response_error_H_ */

