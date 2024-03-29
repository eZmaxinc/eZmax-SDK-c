/*
 * websocket_response_error_v1_m_payload.h
 *
 * Payload for Websocket Error V1
 */

#ifndef _websocket_response_error_v1_m_payload_H_
#define _websocket_response_error_v1_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websocket_response_error_v1_m_payload_t websocket_response_error_v1_m_payload_t;

#include "field_e_error_code.h"

// Enum  for websocket_response_error_v1_m_payload

typedef enum  { ezmax_api_definition__full_websocket_response_error_v1_m_payload__NULL = 0, ezmax_api_definition__full_websocket_response_error_v1_m_payload__BADREQUEST, ezmax_api_definition__full_websocket_response_error_v1_m_payload__BADREQUEST_CLOCKSKEW, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNAUTHORIZED_BADAUTH, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNAUTHORIZED_BADMFA, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNAUTHORIZED_EXPIRED, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNAUTHORIZED_REQUEST, ezmax_api_definition__full_websocket_response_error_v1_m_payload__FORBIDDEN, ezmax_api_definition__full_websocket_response_error_v1_m_payload__FORBIDDEN_CONFIGURATION, ezmax_api_definition__full_websocket_response_error_v1_m_payload__FORBIDDEN_MODULE, ezmax_api_definition__full_websocket_response_error_v1_m_payload__FORBIDDEN_NOACCESS, ezmax_api_definition__full_websocket_response_error_v1_m_payload__FORBIDDEN_PERMISSION, ezmax_api_definition__full_websocket_response_error_v1_m_payload__FORBIDDEN_SUBSCRIPTION, ezmax_api_definition__full_websocket_response_error_v1_m_payload__FORBIDDEN_USERTYPE, ezmax_api_definition__full_websocket_response_error_v1_m_payload__FORBIDDEN_USER_ORIGIN_EXTERNAL, ezmax_api_definition__full_websocket_response_error_v1_m_payload__NOTFOUND, ezmax_api_definition__full_websocket_response_error_v1_m_payload__NOTFOUND_OBJECT, ezmax_api_definition__full_websocket_response_error_v1_m_payload__NOTFOUND_ROUTE, ezmax_api_definition__full_websocket_response_error_v1_m_payload__METHODNOTALLOWED, ezmax_api_definition__full_websocket_response_error_v1_m_payload__NOTACCEPTABLE_CONTENT, ezmax_api_definition__full_websocket_response_error_v1_m_payload__NOTACCEPTABLE_LANGUAGE, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_ACTIVESESSION_ALREADY_CLONING, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_CANNOTDELETE, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_CANNOTMODIFY, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_CHANGEPASSWORD_INVALID_CURRENT, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_CHANGEPASSWORD_SAME, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_DATA_MISSING, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_DATA_UNIQUE, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_DATA_VALIDATION, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_DATA_OUTOFBOUND, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_DOWNLOAD_ERROR, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_EZSIGNFORM_VALIDATION, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_EZSIGNSIGNERCONNECTED, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_NOTHINGTODO, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_NOTREADY, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_PDF_FORM, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_PDF_SIGNATURE, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_PDF_FORM_AND_SIGNATURE, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_PDF_INCOMPATIBLE, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_PDF_PASSWORD, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_PDF_WRONG_PASSWORD, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_PDF_REPAIRABLE, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_PDF_XFA, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_TEMPLATE_MISMATCH, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_UNMODIFIABLE_FIELD, ezmax_api_definition__full_websocket_response_error_v1_m_payload__UNPROCESSABLEENTITY_USER_STAGED, ezmax_api_definition__full_websocket_response_error_v1_m_payload__TOOMANYREQUESTS, ezmax_api_definition__full_websocket_response_error_v1_m_payload__TOOMANYREQUESTS_THIRDPARTY, ezmax_api_definition__full_websocket_response_error_v1_m_payload__ERROR_INTERNAL, ezmax_api_definition__full_websocket_response_error_v1_m_payload__ERROR_CONFIGURATION, ezmax_api_definition__full_websocket_response_error_v1_m_payload__ERROR_NOTIMPLEMENTED } ezmax_api_definition__full_websocket_response_error_v1_m_payload__e;

char* websocket_response_error_v1_m_payload_e_error_code_ToString(ezmax_api_definition__full_websocket_response_error_v1_m_payload__e e_error_code);

ezmax_api_definition__full_websocket_response_error_v1_m_payload__e websocket_response_error_v1_m_payload_e_error_code_FromString(char* e_error_code);



typedef struct websocket_response_error_v1_m_payload_t {
    char *s_error_message; // string
    field_e_error_code_t *e_error_code; // custom

} websocket_response_error_v1_m_payload_t;

websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload_create(
    char *s_error_message,
    field_e_error_code_t *e_error_code
);

void websocket_response_error_v1_m_payload_free(websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload);

websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload_parseFromJSON(cJSON *websocket_response_error_v1_m_payloadJSON);

cJSON *websocket_response_error_v1_m_payload_convertToJSON(websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload);

#endif /* _websocket_response_error_v1_m_payload_H_ */

