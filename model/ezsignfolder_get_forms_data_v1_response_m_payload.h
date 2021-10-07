/*
 * ezsignfolder_get_forms_data_v1_response_m_payload.h
 *
 * Payload for the /1/object/ezsignfolder/{pkiEzsigndocument}/getFormsData API Request
 */

#ifndef _ezsignfolder_get_forms_data_v1_response_m_payload_H_
#define _ezsignfolder_get_forms_data_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_get_forms_data_v1_response_m_payload_t ezsignfolder_get_forms_data_v1_response_m_payload_t;

#include "custom_form_data_document_response.h"
#include "custom_forms_data_folder_response.h"



typedef struct ezsignfolder_get_forms_data_v1_response_m_payload_t {
    int pki_ezsignfolder_id; //numeric
    char *s_ezsignfolder_description; // string
    list_t *a_obj_form_data_document; //nonprimitive container

} ezsignfolder_get_forms_data_v1_response_m_payload_t;

ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload_create(
    int pki_ezsignfolder_id,
    char *s_ezsignfolder_description,
    list_t *a_obj_form_data_document
);

void ezsignfolder_get_forms_data_v1_response_m_payload_free(ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload);

ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_forms_data_v1_response_m_payloadJSON);

cJSON *ezsignfolder_get_forms_data_v1_response_m_payload_convertToJSON(ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload);

#endif /* _ezsignfolder_get_forms_data_v1_response_m_payload_H_ */

