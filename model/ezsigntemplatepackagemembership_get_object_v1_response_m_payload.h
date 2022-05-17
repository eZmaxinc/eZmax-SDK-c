/*
 * ezsigntemplatepackagemembership_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigntemplatepackagemembership/{pkiEzsigntemplatepackagemembershipID}
 */

#ifndef _ezsigntemplatepackagemembership_get_object_v1_response_m_payload_H_
#define _ezsigntemplatepackagemembership_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t;

#include "ezsigntemplate_response_compound.h"
#include "ezsigntemplatepackagemembership_response_compound.h"
#include "ezsigntemplatepackagesignermembership_response_compound.h"



typedef struct ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t {
    int pki_ezsigntemplatepackagemembership_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int i_ezsigntemplatepackagemembership_order; //numeric
    struct ezsigntemplate_response_compound_t *obj_ezsigntemplate; //model
    list_t *a_obj_ezsigntemplatepackagesignermembership; //nonprimitive container

} ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t;

ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id,
    int i_ezsigntemplatepackagemembership_order,
    ezsigntemplate_response_compound_t *obj_ezsigntemplate,
    list_t *a_obj_ezsigntemplatepackagesignermembership
);

void ezsigntemplatepackagemembership_get_object_v1_response_m_payload_free(ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v1_response_m_payload);

ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagemembership_get_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplatepackagemembership_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *ezsigntemplatepackagemembership_get_object_v1_response_m_payload);

#endif /* _ezsigntemplatepackagemembership_get_object_v1_response_m_payload_H_ */

