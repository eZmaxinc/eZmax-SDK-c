/*
 * ezsigndocument_get_form_data_v1_response_m_payload.h
 *
 * Payload for the /1/object/ezsigndocument/{pkiEzsigndocument}/getFormData API Request
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
#include "custom_form_data_signer_response.h"



typedef struct ezsigndocument_get_form_data_v1_response_m_payload_t {
    int pki_ezsigndocument_id; //numeric
    int fki_ezsignfolder_id; //numeric
    char *s_ezsigndocument_name; // string
    char *dt_modified_date; // string
    list_t *a_obj_form_data_signer; //nonprimitive container

} ezsigndocument_get_form_data_v1_response_m_payload_t;

ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload_create(
    int pki_ezsigndocument_id,
    int fki_ezsignfolder_id,
    char *s_ezsigndocument_name,
    char *dt_modified_date,
    list_t *a_obj_form_data_signer
);

void ezsigndocument_get_form_data_v1_response_m_payload_free(ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload);

ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_form_data_v1_response_m_payloadJSON);

cJSON *ezsigndocument_get_form_data_v1_response_m_payload_convertToJSON(ezsigndocument_get_form_data_v1_response_m_payload_t *ezsigndocument_get_form_data_v1_response_m_payload);

#endif /* _ezsigndocument_get_form_data_v1_response_m_payload_H_ */

