/*
 * ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignbulksend/{pkiEzsignbulksendID}/getEzsignsignaturesAutomatic
 */

#ifndef _ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_H_
#define _ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t;

#include "custom_ezsignfolder_ezsignsignatures_automatic_response.h"
#include "field_e_ezsignsignature_type.h"

// Enum  for ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__Acknowledgement, ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__City, ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__Handwritten, ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__Initials, ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__Name, ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__NameReason, ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__Attachments, ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__AttachmentsConfirmation, ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__FieldText, ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__FieldTextarea } ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__e;

char* ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_a_e_ezsignsignature_type_ToString(ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__e a_e_ezsignsignature_type);

ezmax_api_definition__full_ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload__e ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_a_e_ezsignsignature_type_FromString(char* a_e_ezsignsignature_type);



typedef struct ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t {
    list_t *a_e_ezsignsignature_type; //nonprimitive container
    list_t *a_obj_ezsignfolder; //nonprimitive container

} ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t;

ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_create(
    list_t *a_e_ezsignsignature_type,
    list_t *a_obj_ezsignfolder
);

void ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_free(ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload);

ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payloadJSON);

cJSON *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_convertToJSON(ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload);

#endif /* _ezsignbulksend_get_ezsignsignatures_automatic_v1_response_m_payload_H_ */

