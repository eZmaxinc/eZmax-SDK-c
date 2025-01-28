/*
 * ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsigntemplatepublic/{pkiEzsigntemplatepublicID}/resetLimitExceededCounter
 */

#ifndef _ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_H_
#define _ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t;




typedef struct ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t {
    char *dt_ezsigntemplatepublic_limitexceededsince; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_create(
    char *dt_ezsigntemplatepublic_limitexceededsince
);

void ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_free(ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload);

ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payloadJSON);

cJSON *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload);

#endif /* _ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_H_ */

