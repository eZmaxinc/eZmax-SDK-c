/*
 * ezsignbulksend_get_forms_data_v1_response_m_payload.h
 *
 * Payload for GET/1/object/ezsignbulksend/{pkiEzsignbulksendID}/getFormsData
 */

#ifndef _ezsignbulksend_get_forms_data_v1_response_m_payload_H_
#define _ezsignbulksend_get_forms_data_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_get_forms_data_v1_response_m_payload_t ezsignbulksend_get_forms_data_v1_response_m_payload_t;

#include "custom_forms_data_folder_response.h"



typedef struct ezsignbulksend_get_forms_data_v1_response_m_payload_t {
    list_t *a_obj_forms_data_folder; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksend_get_forms_data_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignbulksend_get_forms_data_v1_response_m_payload_t *ezsignbulksend_get_forms_data_v1_response_m_payload_create(
    list_t *a_obj_forms_data_folder
);

void ezsignbulksend_get_forms_data_v1_response_m_payload_free(ezsignbulksend_get_forms_data_v1_response_m_payload_t *ezsignbulksend_get_forms_data_v1_response_m_payload);

ezsignbulksend_get_forms_data_v1_response_m_payload_t *ezsignbulksend_get_forms_data_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_get_forms_data_v1_response_m_payloadJSON);

cJSON *ezsignbulksend_get_forms_data_v1_response_m_payload_convertToJSON(ezsignbulksend_get_forms_data_v1_response_m_payload_t *ezsignbulksend_get_forms_data_v1_response_m_payload);

#endif /* _ezsignbulksend_get_forms_data_v1_response_m_payload_H_ */

