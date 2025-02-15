/*
 * ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsigntemplatepublic/createEzsignfolder
 */

#ifndef _ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_H_
#define _ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t;




typedef struct ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t {
    char *s_ezsigntemplatepublic_signingurl; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_create(
    char *s_ezsigntemplatepublic_signingurl
);

void ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_free(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload);

ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payloadJSON);

cJSON *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload);

#endif /* _ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_H_ */

