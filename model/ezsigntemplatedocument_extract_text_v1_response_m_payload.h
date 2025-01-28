/*
 * ezsigntemplatedocument_extract_text_v1_response_m_payload.h
 *
 * Response for POST /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/ExtractText
 */

#ifndef _ezsigntemplatedocument_extract_text_v1_response_m_payload_H_
#define _ezsigntemplatedocument_extract_text_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_extract_text_v1_response_m_payload_t ezsigntemplatedocument_extract_text_v1_response_m_payload_t;




typedef struct ezsigntemplatedocument_extract_text_v1_response_m_payload_t {
    char *s_text; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatedocument_extract_text_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatedocument_extract_text_v1_response_m_payload_t *ezsigntemplatedocument_extract_text_v1_response_m_payload_create(
    char *s_text
);

void ezsigntemplatedocument_extract_text_v1_response_m_payload_free(ezsigntemplatedocument_extract_text_v1_response_m_payload_t *ezsigntemplatedocument_extract_text_v1_response_m_payload);

ezsigntemplatedocument_extract_text_v1_response_m_payload_t *ezsigntemplatedocument_extract_text_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_extract_text_v1_response_m_payloadJSON);

cJSON *ezsigntemplatedocument_extract_text_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_extract_text_v1_response_m_payload_t *ezsigntemplatedocument_extract_text_v1_response_m_payload);

#endif /* _ezsigntemplatedocument_extract_text_v1_response_m_payload_H_ */

