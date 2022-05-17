/*
 * ezsigntemplatepackage_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID}
 */

#ifndef _ezsigntemplatepackage_get_object_v1_response_m_payload_H_
#define _ezsigntemplatepackage_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_get_object_v1_response_m_payload_t ezsigntemplatepackage_get_object_v1_response_m_payload_t;

#include "ezsigntemplatepackage_response_compound.h"
#include "ezsigntemplatepackagemembership_response_compound.h"
#include "ezsigntemplatepackagesigner_response_compound.h"



typedef struct ezsigntemplatepackage_get_object_v1_response_m_payload_t {
    int pki_ezsigntemplatepackage_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_language_name_x; // string
    char *s_ezsigntemplatepackage_description; // string
    int b_ezsigntemplatepackage_adminonly; //boolean
    int b_ezsigntemplatepackage_needvalidation; //boolean
    int b_ezsigntemplatepackage_isactive; //boolean
    char *s_ezsignfoldertype_name_x; // string
    list_t *a_obj_ezsigntemplatepackagesigner; //nonprimitive container
    list_t *a_obj_ezsigntemplatepackagemembership; //nonprimitive container

} ezsigntemplatepackage_get_object_v1_response_m_payload_t;

ezsigntemplatepackage_get_object_v1_response_m_payload_t *ezsigntemplatepackage_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_language_name_x,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_adminonly,
    int b_ezsigntemplatepackage_needvalidation,
    int b_ezsigntemplatepackage_isactive,
    char *s_ezsignfoldertype_name_x,
    list_t *a_obj_ezsigntemplatepackagesigner,
    list_t *a_obj_ezsigntemplatepackagemembership
);

void ezsigntemplatepackage_get_object_v1_response_m_payload_free(ezsigntemplatepackage_get_object_v1_response_m_payload_t *ezsigntemplatepackage_get_object_v1_response_m_payload);

ezsigntemplatepackage_get_object_v1_response_m_payload_t *ezsigntemplatepackage_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackage_get_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplatepackage_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackage_get_object_v1_response_m_payload_t *ezsigntemplatepackage_get_object_v1_response_m_payload);

#endif /* _ezsigntemplatepackage_get_object_v1_response_m_payload_H_ */

