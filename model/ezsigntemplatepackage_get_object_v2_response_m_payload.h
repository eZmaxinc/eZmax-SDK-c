/*
 * ezsigntemplatepackage_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID}
 */

#ifndef _ezsigntemplatepackage_get_object_v2_response_m_payload_H_
#define _ezsigntemplatepackage_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_get_object_v2_response_m_payload_t ezsigntemplatepackage_get_object_v2_response_m_payload_t;

#include "ezsigntemplatepackage_response_compound.h"



typedef struct ezsigntemplatepackage_get_object_v2_response_m_payload_t {
    struct ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackage_get_object_v2_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatepackage_get_object_v2_response_m_payload_t *ezsigntemplatepackage_get_object_v2_response_m_payload_create(
    ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage
);

void ezsigntemplatepackage_get_object_v2_response_m_payload_free(ezsigntemplatepackage_get_object_v2_response_m_payload_t *ezsigntemplatepackage_get_object_v2_response_m_payload);

ezsigntemplatepackage_get_object_v2_response_m_payload_t *ezsigntemplatepackage_get_object_v2_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackage_get_object_v2_response_m_payloadJSON);

cJSON *ezsigntemplatepackage_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatepackage_get_object_v2_response_m_payload_t *ezsigntemplatepackage_get_object_v2_response_m_payload);

#endif /* _ezsigntemplatepackage_get_object_v2_response_m_payload_H_ */

