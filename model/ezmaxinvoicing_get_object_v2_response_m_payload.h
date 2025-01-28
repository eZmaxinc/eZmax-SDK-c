/*
 * ezmaxinvoicing_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezmaxinvoicing/{pkiEzmaxinvoicingID}
 */

#ifndef _ezmaxinvoicing_get_object_v2_response_m_payload_H_
#define _ezmaxinvoicing_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezmaxinvoicing_get_object_v2_response_m_payload_t ezmaxinvoicing_get_object_v2_response_m_payload_t;

#include "ezmaxinvoicing_response_compound.h"



typedef struct ezmaxinvoicing_get_object_v2_response_m_payload_t {
    struct ezmaxinvoicing_response_compound_t *obj_ezmaxinvoicing; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezmaxinvoicing_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezmaxinvoicing_get_object_v2_response_m_payload_t *ezmaxinvoicing_get_object_v2_response_m_payload_create(
    ezmaxinvoicing_response_compound_t *obj_ezmaxinvoicing
);

void ezmaxinvoicing_get_object_v2_response_m_payload_free(ezmaxinvoicing_get_object_v2_response_m_payload_t *ezmaxinvoicing_get_object_v2_response_m_payload);

ezmaxinvoicing_get_object_v2_response_m_payload_t *ezmaxinvoicing_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezmaxinvoicing_get_object_v2_response_m_payloadJSON);

cJSON *ezmaxinvoicing_get_object_v2_response_m_payload_convertToJSON(ezmaxinvoicing_get_object_v2_response_m_payload_t *ezmaxinvoicing_get_object_v2_response_m_payload);

#endif /* _ezmaxinvoicing_get_object_v2_response_m_payload_H_ */

