/*
 * ezsigntemplateannotation_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsigntemplateannotation/{pkiEzsigntemplateannotationID}
 */

#ifndef _ezsigntemplateannotation_get_object_v2_response_m_payload_H_
#define _ezsigntemplateannotation_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateannotation_get_object_v2_response_m_payload_t ezsigntemplateannotation_get_object_v2_response_m_payload_t;

#include "ezsigntemplateannotation_response_compound.h"



typedef struct ezsigntemplateannotation_get_object_v2_response_m_payload_t {
    struct ezsigntemplateannotation_response_compound_t *obj_ezsigntemplateannotation; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateannotation_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplateannotation_get_object_v2_response_m_payload_t *ezsigntemplateannotation_get_object_v2_response_m_payload_create(
    ezsigntemplateannotation_response_compound_t *obj_ezsigntemplateannotation
);

void ezsigntemplateannotation_get_object_v2_response_m_payload_free(ezsigntemplateannotation_get_object_v2_response_m_payload_t *ezsigntemplateannotation_get_object_v2_response_m_payload);

ezsigntemplateannotation_get_object_v2_response_m_payload_t *ezsigntemplateannotation_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplateannotation_get_object_v2_response_m_payloadJSON);

cJSON *ezsigntemplateannotation_get_object_v2_response_m_payload_convertToJSON(ezsigntemplateannotation_get_object_v2_response_m_payload_t *ezsigntemplateannotation_get_object_v2_response_m_payload);

#endif /* _ezsigntemplateannotation_get_object_v2_response_m_payload_H_ */

