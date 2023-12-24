/*
 * ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigsignature/getEzsignsignaturesAutomatic
 */

#ifndef _ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_H_
#define _ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t;

#include "custom_ezsignfolder_ezsignsignatures_automatic_response.h"
#include "field_e_ezsignsignature_type.h"

// Enum  for ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__Acknowledgement, ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__City, ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__Handwritten, ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__Initials, ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__Name, ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__NameReason, ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__Attachments, ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__AttachmentsConfirmation, ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__FieldText, ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__FieldTextarea } ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__e;

char* ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_a_e_ezsignsignature_type_ToString(ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__e a_e_ezsignsignature_type);

ezmax_api_definition__full_ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload__e ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_a_e_ezsignsignature_type_FromString(char* a_e_ezsignsignature_type);



typedef struct ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t {
    list_t *a_e_ezsignsignature_type; //nonprimitive container
    list_t *a_obj_ezsignfolder; //nonprimitive container

} ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t;

ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_create(
    list_t *a_e_ezsignsignature_type,
    list_t *a_obj_ezsignfolder
);

void ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_free(ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload);

ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_parseFromJSON(cJSON *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payloadJSON);

cJSON *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_convertToJSON(ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload);

#endif /* _ezsignsignature_get_ezsignsignatures_automatic_v1_response_m_payload_H_ */

