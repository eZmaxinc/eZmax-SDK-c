/*
 * ezsigntemplateannotation_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/ezsigntemplateannotation
 */

#ifndef _ezsigntemplateannotation_create_object_v1_response_m_payload_H_
#define _ezsigntemplateannotation_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateannotation_create_object_v1_response_m_payload_t ezsigntemplateannotation_create_object_v1_response_m_payload_t;




typedef struct ezsigntemplateannotation_create_object_v1_response_m_payload_t {
    list_t *a_pki_ezsigntemplateannotation_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateannotation_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplateannotation_create_object_v1_response_m_payload_t *ezsigntemplateannotation_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplateannotation_id
);

void ezsigntemplateannotation_create_object_v1_response_m_payload_free(ezsigntemplateannotation_create_object_v1_response_m_payload_t *ezsigntemplateannotation_create_object_v1_response_m_payload);

ezsigntemplateannotation_create_object_v1_response_m_payload_t *ezsigntemplateannotation_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplateannotation_create_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplateannotation_create_object_v1_response_m_payload_convertToJSON(ezsigntemplateannotation_create_object_v1_response_m_payload_t *ezsigntemplateannotation_create_object_v1_response_m_payload);

#endif /* _ezsigntemplateannotation_create_object_v1_response_m_payload_H_ */

