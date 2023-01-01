/*
 * ezsignbulksenddocumentmapping_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsignbulksenddocumentmapping/{pkiEzsignbulksenddocumentmappingID}
 */

#ifndef _ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_H_
#define _ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t;

#include "ezsigntemplate_response_compound.h"
#include "ezsigntemplatepackage_response_compound.h"



typedef struct ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t {
    int pki_ezsignbulksenddocumentmapping_id; //numeric
    int fki_ezsignbulksend_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int i_ezsignbulksenddocumentmapping_order; //numeric
    struct ezsigntemplate_response_compound_t *obj_ezsigntemplate; //model
    struct ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage; //model

} ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t;

ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_create(
    int pki_ezsignbulksenddocumentmapping_id,
    int fki_ezsignbulksend_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id,
    int i_ezsignbulksenddocumentmapping_order,
    ezsigntemplate_response_compound_t *obj_ezsigntemplate,
    ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage
);

void ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_free(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v1_response_m_payload);

ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_get_object_v1_response_m_payloadJSON);

cJSON *ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_convertToJSON(ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_get_object_v1_response_m_payload);

#endif /* _ezsignbulksenddocumentmapping_get_object_v1_response_m_payload_H_ */

