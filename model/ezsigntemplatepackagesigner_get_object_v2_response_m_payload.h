/*
 * ezsigntemplatepackagesigner_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}
 */

#ifndef _ezsigntemplatepackagesigner_get_object_v2_response_m_payload_H_
#define _ezsigntemplatepackagesigner_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t;

#include "ezsigntemplatepackagesigner_response_compound.h"



typedef struct ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t {
    struct ezsigntemplatepackagesigner_response_compound_t *obj_ezsigntemplatepackagesigner; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v2_response_m_payload_create(
    ezsigntemplatepackagesigner_response_compound_t *obj_ezsigntemplatepackagesigner
);

void ezsigntemplatepackagesigner_get_object_v2_response_m_payload_free(ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v2_response_m_payload);

ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagesigner_get_object_v2_response_m_payloadJSON);

cJSON *ezsigntemplatepackagesigner_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatepackagesigner_get_object_v2_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v2_response_m_payload);

#endif /* _ezsigntemplatepackagesigner_get_object_v2_response_m_payload_H_ */

