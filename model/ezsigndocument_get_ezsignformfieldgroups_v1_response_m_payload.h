/*
 * ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigndocument/{pkiEzsigndocument}/getEzsignformfieldgroups
 */

#ifndef _ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_H_
#define _ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t;

#include "ezsignformfieldgroup_response_compound.h"



typedef struct ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t {
    list_t *a_obj_ezsignformfieldgroup; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_create(
    list_t *a_obj_ezsignformfieldgroup
);

void ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_free(ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload);

ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payloadJSON);

cJSON *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_convertToJSON(ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_t *ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload);

#endif /* _ezsigndocument_get_ezsignformfieldgroups_v1_response_m_payload_H_ */

