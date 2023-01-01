/*
 * ezsigntemplate_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigntemplate/{pkiEzsigntemplateID}
 */

#ifndef _ezsigntemplate_get_object_v1_response_m_payload_H_
#define _ezsigntemplate_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_get_object_v1_response_m_payload_t ezsigntemplate_get_object_v1_response_m_payload_t;

#include "ezsigntemplatedocument_response.h"
#include "ezsigntemplatesigner_response_compound.h"



typedef struct ezsigntemplate_get_object_v1_response_m_payload_t {
    int pki_ezsigntemplate_id; //numeric
    int fki_ezsigntemplatedocument_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_language_name_x; // string
    char *s_ezsigntemplate_description; // string
    int b_ezsigntemplate_adminonly; //boolean
    char *s_ezsignfoldertype_name_x; // string
    struct ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument; //model
    list_t *a_obj_ezsigntemplatesigner; //nonprimitive container

} ezsigntemplate_get_object_v1_response_m_payload_t;

ezsigntemplate_get_object_v1_response_m_payload_t *ezsigntemplate_get_object_v1_response_m_payload_create(
    int pki_ezsigntemplate_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_language_name_x,
    char *s_ezsigntemplate_description,
    int b_ezsigntemplate_adminonly,
    char *s_ezsignfoldertype_name_x,
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument,
    list_t *a_obj_ezsigntemplatesigner
);

void ezsigntemplate_get_object_v1_response_m_payload_free(ezsigntemplate_get_object_v1_response_m_payload_t *ezsigntemplate_get_object_v1_response_m_payload);

ezsigntemplate_get_object_v1_response_m_payload_t *ezsigntemplate_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplate_get_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplate_get_object_v1_response_m_payload_convertToJSON(ezsigntemplate_get_object_v1_response_m_payload_t *ezsigntemplate_get_object_v1_response_m_payload);

#endif /* _ezsigntemplate_get_object_v1_response_m_payload_H_ */

