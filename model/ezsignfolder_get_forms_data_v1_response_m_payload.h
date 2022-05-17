/*
 * ezsignfolder_get_forms_data_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignfolder/{pkiEzsigndocument}/getFormsData
 */

#ifndef _ezsignfolder_get_forms_data_v1_response_m_payload_H_
#define _ezsignfolder_get_forms_data_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_get_forms_data_v1_response_m_payload_t ezsignfolder_get_forms_data_v1_response_m_payload_t;

#include "custom_forms_data_folder_response.h"



typedef struct ezsignfolder_get_forms_data_v1_response_m_payload_t {
    struct custom_forms_data_folder_response_t *obj_forms_data_folder; //model

} ezsignfolder_get_forms_data_v1_response_m_payload_t;

ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload_create(
    custom_forms_data_folder_response_t *obj_forms_data_folder
);

void ezsignfolder_get_forms_data_v1_response_m_payload_free(ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload);

ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_forms_data_v1_response_m_payloadJSON);

cJSON *ezsignfolder_get_forms_data_v1_response_m_payload_convertToJSON(ezsignfolder_get_forms_data_v1_response_m_payload_t *ezsignfolder_get_forms_data_v1_response_m_payload);

#endif /* _ezsignfolder_get_forms_data_v1_response_m_payload_H_ */

