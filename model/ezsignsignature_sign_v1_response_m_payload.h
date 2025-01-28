/*
 * ezsignsignature_sign_v1_response_m_payload.h
 *
 * Response for POST /1/object/ezsignsignature/{pkiEzsignsignatureID}/sign
 */

#ifndef _ezsignsignature_sign_v1_response_m_payload_H_
#define _ezsignsignature_sign_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_sign_v1_response_m_payload_t ezsignsignature_sign_v1_response_m_payload_t;

#include "custom_timezone_with_code_response.h"



typedef struct ezsignsignature_sign_v1_response_m_payload_t {
    char *dt_ezsignsignature_date_in_folder_timezone; // string
    struct custom_timezone_with_code_response_t *obj_timezone; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignature_sign_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignsignature_sign_v1_response_m_payload_t *ezsignsignature_sign_v1_response_m_payload_create(
    char *dt_ezsignsignature_date_in_folder_timezone,
    custom_timezone_with_code_response_t *obj_timezone
);

void ezsignsignature_sign_v1_response_m_payload_free(ezsignsignature_sign_v1_response_m_payload_t *ezsignsignature_sign_v1_response_m_payload);

ezsignsignature_sign_v1_response_m_payload_t *ezsignsignature_sign_v1_response_m_payload_parseFromJSON(cJSON *ezsignsignature_sign_v1_response_m_payloadJSON);

cJSON *ezsignsignature_sign_v1_response_m_payload_convertToJSON(ezsignsignature_sign_v1_response_m_payload_t *ezsignsignature_sign_v1_response_m_payload);

#endif /* _ezsignsignature_sign_v1_response_m_payload_H_ */

