/*
 * ezsigntemplatepublic_get_forms_data_v1_response_m_payload.h
 *
 * Payload for GET/1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}/getFormsData
 */

#ifndef _ezsigntemplatepublic_get_forms_data_v1_response_m_payload_H_
#define _ezsigntemplatepublic_get_forms_data_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t;

#include "custom_forms_data_folder_response.h"



typedef struct ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t {
    list_t *a_obj_forms_data_folder; //nonprimitive container

} ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t;

ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t *ezsigntemplatepublic_get_forms_data_v1_response_m_payload_create(
    list_t *a_obj_forms_data_folder
);

void ezsigntemplatepublic_get_forms_data_v1_response_m_payload_free(ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t *ezsigntemplatepublic_get_forms_data_v1_response_m_payload);

ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t *ezsigntemplatepublic_get_forms_data_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_get_forms_data_v1_response_m_payloadJSON);

cJSON *ezsigntemplatepublic_get_forms_data_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_get_forms_data_v1_response_m_payload_t *ezsigntemplatepublic_get_forms_data_v1_response_m_payload);

#endif /* _ezsigntemplatepublic_get_forms_data_v1_response_m_payload_H_ */

