/*
 * ezsigndocument_extract_text_v1_response_m_payload.h
 *
 * Response for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/ExtractText
 */

#ifndef _ezsigndocument_extract_text_v1_response_m_payload_H_
#define _ezsigndocument_extract_text_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_extract_text_v1_response_m_payload_t ezsigndocument_extract_text_v1_response_m_payload_t;




typedef struct ezsigndocument_extract_text_v1_response_m_payload_t {
    char *s_text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_extract_text_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload_create(
    char *s_text
);

void ezsigndocument_extract_text_v1_response_m_payload_free(ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload);

ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_extract_text_v1_response_m_payloadJSON);

cJSON *ezsigndocument_extract_text_v1_response_m_payload_convertToJSON(ezsigndocument_extract_text_v1_response_m_payload_t *ezsigndocument_extract_text_v1_response_m_payload);

#endif /* _ezsigndocument_extract_text_v1_response_m_payload_H_ */

