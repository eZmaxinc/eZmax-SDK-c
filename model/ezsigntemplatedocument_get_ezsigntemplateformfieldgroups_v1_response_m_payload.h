/*
 * ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocument}/getEzsigntemplateformfieldgroups
 */

#ifndef _ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_H_
#define _ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t;

#include "ezsigntemplateformfieldgroup_response_compound.h"



typedef struct ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t {
    list_t *a_obj_ezsigntemplateformfieldgroup; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_create(
    list_t *a_obj_ezsigntemplateformfieldgroup
);

void ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_free(ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload);

ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payloadJSON);

cJSON *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_t *ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload);

#endif /* _ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_m_payload_H_ */

