/*
 * ezsigntemplatepackagesigner_delete_object_v1_response_m_payload.h
 *
 * Payload for DELETE /1/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}
 */

#ifndef _ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_H_
#define _ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t;




typedef struct ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t {
    int b_ezsigntemplatepackage_needvalidation; //boolean
    int b_ezsignbulksend_needvalidation; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_create(
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsignbulksend_needvalidation
);

void ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_free(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload);

ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagesigner_delete_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_t *ezsigntemplatepackagesigner_delete_object_v1_response_m_payload);

#endif /* _ezsigntemplatepackagesigner_delete_object_v1_response_m_payload_H_ */

