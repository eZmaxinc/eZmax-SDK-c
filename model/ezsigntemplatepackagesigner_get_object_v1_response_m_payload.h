/*
 * ezsigntemplatepackagesigner_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}
 */

#ifndef _ezsigntemplatepackagesigner_get_object_v1_response_m_payload_H_
#define _ezsigntemplatepackagesigner_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t;

#include "ezsigntemplatepackagesigner_response_compound.h"



typedef struct ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t {
    int pki_ezsigntemplatepackagesigner_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    char *s_ezsigntemplatepackagesigner_description; // string

} ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t;

ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepackagesigner_description
);

void ezsigntemplatepackagesigner_get_object_v1_response_m_payload_free(ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v1_response_m_payload);

ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagesigner_get_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplatepackagesigner_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesigner_get_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_get_object_v1_response_m_payload);

#endif /* _ezsigntemplatepackagesigner_get_object_v1_response_m_payload_H_ */

