/*
 * variableexpense_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/variableexpense/{pkiVariableexpenseID}
 */

#ifndef _variableexpense_get_object_v2_response_m_payload_H_
#define _variableexpense_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_get_object_v2_response_m_payload_t variableexpense_get_object_v2_response_m_payload_t;

#include "variableexpense_response_compound.h"



typedef struct variableexpense_get_object_v2_response_m_payload_t {
    struct variableexpense_response_compound_t *obj_variableexpense; //model

    int _library_owned; // Is the library responsible for freeing this object?
} variableexpense_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) variableexpense_get_object_v2_response_m_payload_t *variableexpense_get_object_v2_response_m_payload_create(
    variableexpense_response_compound_t *obj_variableexpense
);

void variableexpense_get_object_v2_response_m_payload_free(variableexpense_get_object_v2_response_m_payload_t *variableexpense_get_object_v2_response_m_payload);

variableexpense_get_object_v2_response_m_payload_t *variableexpense_get_object_v2_response_m_payload_parseFromJSON(cJSON *variableexpense_get_object_v2_response_m_payloadJSON);

cJSON *variableexpense_get_object_v2_response_m_payload_convertToJSON(variableexpense_get_object_v2_response_m_payload_t *variableexpense_get_object_v2_response_m_payload);

#endif /* _variableexpense_get_object_v2_response_m_payload_H_ */

