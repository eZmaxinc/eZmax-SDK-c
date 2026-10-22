/*
 * documenttype_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/documenttype/getAutocomplete
 */

#ifndef _documenttype_get_autocomplete_v2_response_m_payload_H_
#define _documenttype_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct documenttype_get_autocomplete_v2_response_m_payload_t documenttype_get_autocomplete_v2_response_m_payload_t;

#include "documenttype_autocomplete_element_response.h"



typedef struct documenttype_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_documenttype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} documenttype_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) documenttype_get_autocomplete_v2_response_m_payload_t *documenttype_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_documenttype
);

void documenttype_get_autocomplete_v2_response_m_payload_free(documenttype_get_autocomplete_v2_response_m_payload_t *documenttype_get_autocomplete_v2_response_m_payload);

documenttype_get_autocomplete_v2_response_m_payload_t *documenttype_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *documenttype_get_autocomplete_v2_response_m_payloadJSON);

cJSON *documenttype_get_autocomplete_v2_response_m_payload_convertToJSON(documenttype_get_autocomplete_v2_response_m_payload_t *documenttype_get_autocomplete_v2_response_m_payload);

#endif /* _documenttype_get_autocomplete_v2_response_m_payload_H_ */

