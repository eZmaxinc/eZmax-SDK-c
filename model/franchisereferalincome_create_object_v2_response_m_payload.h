/*
 * franchisereferalincome_create_object_v2_response_m_payload.h
 *
 * Payload for POST /2/object/franchisereferalincome
 */

#ifndef _franchisereferalincome_create_object_v2_response_m_payload_H_
#define _franchisereferalincome_create_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct franchisereferalincome_create_object_v2_response_m_payload_t franchisereferalincome_create_object_v2_response_m_payload_t;




typedef struct franchisereferalincome_create_object_v2_response_m_payload_t {
    list_t *a_pki_franchisereferalincome_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} franchisereferalincome_create_object_v2_response_m_payload_t;

__attribute__((deprecated)) franchisereferalincome_create_object_v2_response_m_payload_t *franchisereferalincome_create_object_v2_response_m_payload_create(
    list_t *a_pki_franchisereferalincome_id
);

void franchisereferalincome_create_object_v2_response_m_payload_free(franchisereferalincome_create_object_v2_response_m_payload_t *franchisereferalincome_create_object_v2_response_m_payload);

franchisereferalincome_create_object_v2_response_m_payload_t *franchisereferalincome_create_object_v2_response_m_payload_parseFromJSON(cJSON *franchisereferalincome_create_object_v2_response_m_payloadJSON);

cJSON *franchisereferalincome_create_object_v2_response_m_payload_convertToJSON(franchisereferalincome_create_object_v2_response_m_payload_t *franchisereferalincome_create_object_v2_response_m_payload);

#endif /* _franchisereferalincome_create_object_v2_response_m_payload_H_ */

