/*
 * ezsigndocument_get_form_data_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigndocument/{pkiEzsigndocument}/getFormData
 */

#ifndef _ezsigndocument_get_form_data_v1_response_m_payload_H_
#define _ezsigndocument_get_form_data_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_form_data_v1_response_m_payload_t ezsigndocument_get_form_data_v1_response_m_payload_t;

#include "custom_form_data_document_response.h"



typedef struct ezsigndocument_get_form_data_v1_response_m_payload_t {
    struct custom_form_data_document_response_t *obj_form_data_document; //model

} ezsigndocument_get_form_data_v1_response_m_payload_t;

ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload_create(
    custom_form_data_document_response_t *obj_form_data_document
);

void ezsigndocument_get_form_data_v1_response_m_payload_free(ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload);

ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_form_data_v1_response_m_payloadJSON);

cJSON *ezsigndocument_get_form_data_v1_response_m_payload_convertToJSON(ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload);

#endif /* _ezsigndocument_get_form_data_v1_response_m_payload_H_ */

