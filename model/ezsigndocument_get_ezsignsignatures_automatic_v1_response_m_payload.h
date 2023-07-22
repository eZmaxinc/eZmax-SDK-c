/*
 * ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigndocument/{pkiEzsigndocumentID}/getEzsignsignaturesAutomatic
 */

#ifndef _ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_H_
#define _ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_t ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_t;

#include "custom_ezsignfolder_ezsignsignatures_automatic_response.h"
#include "field_e_ezsignsignature_type.h"
#include "set.h"

// Enum  for ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload__Acknowledgement, ezmax_api_definition__full_ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload__City, ezmax_api_definition__full_ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload__Handwritten, ezmax_api_definition__full_ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload__Initials, ezmax_api_definition__full_ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload__Name, ezmax_api_definition__full_ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload__Attachments, ezmax_api_definition__full_ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload__AttachmentsConfirmation, ezmax_api_definition__full_ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload__FieldText, ezmax_api_definition__full_ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload__FieldTextarea } ezmax_api_definition__full_ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload__e;

char* ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_a_e_ezsignsignature_type_ToString(ezmax_api_definition__full_ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload__e a_e_ezsignsignature_type);

ezmax_api_definition__full_ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload__e ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_a_e_ezsignsignature_type_FromString(char* a_e_ezsignsignature_type);



typedef struct ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_t {
    set_t *a_e_ezsignsignature_type; //nonprimitive container
    list_t *a_obj_ezsignfolder; //nonprimitive container

} ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_t;

ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_create(
    set_t *a_e_ezsignsignature_type,
    list_t *a_obj_ezsignfolder
);

void ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_free(ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload);

ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payloadJSON);

cJSON *ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_convertToJSON(ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload);

#endif /* _ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_H_ */

