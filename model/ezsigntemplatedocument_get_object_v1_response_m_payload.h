/*
 * ezsigntemplatedocument_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}
 */

#ifndef _ezsigntemplatedocument_get_object_v1_response_m_payload_H_
#define _ezsigntemplatedocument_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatedocument_get_object_v1_response_m_payload_t ezsigntemplatedocument_get_object_v1_response_m_payload_t;

#include "ezsigntemplatedocument_response_compound.h"



typedef struct ezsigntemplatedocument_get_object_v1_response_m_payload_t {
    int pki_ezsigntemplatedocument_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    char *s_ezsigntemplatedocument_name; // string
    int i_ezsigntemplatedocument_pagetotal; //numeric
    int i_ezsigntemplatedocument_signaturetotal; //numeric

} ezsigntemplatedocument_get_object_v1_response_m_payload_t;

ezsigntemplatedocument_get_object_v1_response_m_payload_t *ezsigntemplatedocument_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplatedocument_id,
    int fki_ezsigntemplate_id,
    char *s_ezsigntemplatedocument_name,
    int i_ezsigntemplatedocument_pagetotal,
    int i_ezsigntemplatedocument_signaturetotal
);

void ezsigntemplatedocument_get_object_v1_response_m_payload_free(ezsigntemplatedocument_get_object_v1_response_m_payload_t *ezsigntemplatedocument_get_object_v1_response_m_payload);

ezsigntemplatedocument_get_object_v1_response_m_payload_t *ezsigntemplatedocument_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatedocument_get_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplatedocument_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_get_object_v1_response_m_payload_t *ezsigntemplatedocument_get_object_v1_response_m_payload);

#endif /* _ezsigntemplatedocument_get_object_v1_response_m_payload_H_ */

