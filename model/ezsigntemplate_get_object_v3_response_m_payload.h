/*
 * ezsigntemplate_get_object_v3_response_m_payload.h
 *
 * Payload for GET /3/object/ezsigntemplate/{pkiEzsigntemplateID}
 */

#ifndef _ezsigntemplate_get_object_v3_response_m_payload_H_
#define _ezsigntemplate_get_object_v3_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_get_object_v3_response_m_payload_t ezsigntemplate_get_object_v3_response_m_payload_t;

#include "ezsigntemplate_response_compound_v3.h"



typedef struct ezsigntemplate_get_object_v3_response_m_payload_t {
    struct ezsigntemplate_response_compound_v3_t *obj_ezsigntemplate; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplate_get_object_v3_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplate_get_object_v3_response_m_payload_t *ezsigntemplate_get_object_v3_response_m_payload_create(
    ezsigntemplate_response_compound_v3_t *obj_ezsigntemplate
);

void ezsigntemplate_get_object_v3_response_m_payload_free(ezsigntemplate_get_object_v3_response_m_payload_t *ezsigntemplate_get_object_v3_response_m_payload);

ezsigntemplate_get_object_v3_response_m_payload_t *ezsigntemplate_get_object_v3_response_m_payload_parseFromJSON(cJSON *ezsigntemplate_get_object_v3_response_m_payloadJSON);

cJSON *ezsigntemplate_get_object_v3_response_m_payload_convertToJSON(ezsigntemplate_get_object_v3_response_m_payload_t *ezsigntemplate_get_object_v3_response_m_payload);

#endif /* _ezsigntemplate_get_object_v3_response_m_payload_H_ */

