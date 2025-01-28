/*
 * ezsignbulksendtransmission_get_forms_data_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignbulksendtransmission/{pkiEzsignbulksendtransmissionID}/getFormsData
 */

#ifndef _ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_H_
#define _ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_t ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_t;

#include "custom_forms_data_folder_response.h"



typedef struct ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_t {
    list_t *a_obj_forms_data_folder; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_t;

__attribute__((deprecated)) ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_t *ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_create(
    list_t *a_obj_forms_data_folder
);

void ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_free(ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_t *ezsignbulksendtransmission_get_forms_data_v1_response_m_payload);

ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_t *ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksendtransmission_get_forms_data_v1_response_m_payloadJSON);

cJSON *ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_convertToJSON(ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_t *ezsignbulksendtransmission_get_forms_data_v1_response_m_payload);

#endif /* _ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_H_ */

