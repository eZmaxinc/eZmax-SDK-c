/*
 * ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignfolder/{pkiEzsignfolderID}/getEzsignsignaturesAutomatic
 */

#ifndef _ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_H_
#define _ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t;

#include "custom_ezsignfolder_ezsignsignatures_automatic_response.h"
#include "field_e_ezsignsignature_type.h"

// Enum  for ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__Acknowledgement, ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__City, ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__Handwritten, ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__Initials, ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__Name, ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__NameReason, ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__Attachments, ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__AttachmentsConfirmation, ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__FieldText, ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__FieldTextarea, ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__Consultation } ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__e;

char* ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_a_e_ezsignsignature_type_ToString(ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__e a_e_ezsignsignature_type);

ezmax_api_definition__full_ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload__e ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_a_e_ezsignsignature_type_FromString(char* a_e_ezsignsignature_type);



typedef struct ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t {
    list_t *a_e_ezsignsignature_type; //nonprimitive container
    list_t *a_obj_ezsignfolder; //nonprimitive container

} ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t;

ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_create(
    list_t *a_e_ezsignsignature_type,
    list_t *a_obj_ezsignfolder
);

void ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_free(ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload);

ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payloadJSON);

cJSON *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_convertToJSON(ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload);

#endif /* _ezsignfolder_get_ezsignsignatures_automatic_v1_response_m_payload_H_ */

