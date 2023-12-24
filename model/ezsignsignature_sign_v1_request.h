/*
 * ezsignsignature_sign_v1_request.h
 *
 * Request for POST /1/object/ezsignsignature/{pkiEzsignsignatureID}/sign
 */

#ifndef _ezsignsignature_sign_v1_request_H_
#define _ezsignsignature_sign_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_sign_v1_request_t ezsignsignature_sign_v1_request_t;

#include "common_file.h"

// Enum EATTACHMENTSCONFIRMATIONDECISION for ezsignsignature_sign_v1_request

typedef enum  { ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_NULL = 0, ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_Accepted, ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_Refused } ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_e;

char* ezsignsignature_sign_v1_request_e_attachments_confirmation_decision_ToString(ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_e e_attachments_confirmation_decision);

ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_e ezsignsignature_sign_v1_request_e_attachments_confirmation_decision_FromString(char* e_attachments_confirmation_decision);



typedef struct ezsignsignature_sign_v1_request_t {
    int fki_ezsignsigningreason_id; //numeric
    char *s_value; // string
    ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_e e_attachments_confirmation_decision; //enum
    char *s_attachments_refusal_reason; // string
    char *s_svg; // string
    list_t *a_obj_file; //nonprimitive container
    int b_is_automatic; //boolean

} ezsignsignature_sign_v1_request_t;

ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request_create(
    int fki_ezsignsigningreason_id,
    char *s_value,
    ezmax_api_definition__full_ezsignsignature_sign_v1_request_EATTACHMENTSCONFIRMATIONDECISION_e e_attachments_confirmation_decision,
    char *s_attachments_refusal_reason,
    char *s_svg,
    list_t *a_obj_file,
    int b_is_automatic
);

void ezsignsignature_sign_v1_request_free(ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request);

ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request_parseFromJSON(cJSON *ezsignsignature_sign_v1_requestJSON);

cJSON *ezsignsignature_sign_v1_request_convertToJSON(ezsignsignature_sign_v1_request_t *ezsignsignature_sign_v1_request);

#endif /* _ezsignsignature_sign_v1_request_H_ */

