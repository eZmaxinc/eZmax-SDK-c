/*
 * ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsigntemplatepublic/getEzsigntemplatepublicDetails
 */

#ifndef _ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_H_
#define _ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t;

#include "custom_branding_response.h"



typedef struct ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t {
    struct custom_branding_response_t *obj_branding; //model
    int fki_userlogintype_id; //numeric
    list_t *a_s_ezsigntemplatesigner_description; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_create(
    custom_branding_response_t *obj_branding,
    int fki_userlogintype_id,
    list_t *a_s_ezsigntemplatesigner_description
);

void ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_free(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload);

ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payloadJSON);

cJSON *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_t *ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload);

#endif /* _ezsigntemplatepublic_get_ezsigntemplatepublic_details_v1_response_m_payload_H_ */

