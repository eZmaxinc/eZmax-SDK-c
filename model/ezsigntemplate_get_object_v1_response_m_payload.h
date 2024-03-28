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

#include "common_audit.h"
#include "ezsigntemplatedocument_response.h"
#include "ezsigntemplatesigner_response_compound.h"
#include "field_e_ezsigntemplate_type.h"

// Enum  for ezsigntemplate_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_ezsigntemplate_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_ezsigntemplate_get_object_v1_response_m_payload__User, ezmax_api_definition__full_ezsigntemplate_get_object_v1_response_m_payload__Usergroup, ezmax_api_definition__full_ezsigntemplate_get_object_v1_response_m_payload__Company } ezmax_api_definition__full_ezsigntemplate_get_object_v1_response_m_payload__e;

char* ezsigntemplate_get_object_v1_response_m_payload_e_ezsigntemplate_type_ToString(ezmax_api_definition__full_ezsigntemplate_get_object_v1_response_m_payload__e e_ezsigntemplate_type);

ezmax_api_definition__full_ezsigntemplate_get_object_v1_response_m_payload__e ezsigntemplate_get_object_v1_response_m_payload_e_ezsigntemplate_type_FromString(char* e_ezsigntemplate_type);



typedef struct ezsigntemplate_get_object_v1_response_m_payload_t {
    int pki_ezsigntemplate_id; //numeric
    int fki_ezsigntemplatedocument_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_language_name_x; // string
    char *s_ezsigntemplate_description; // string
    char *s_ezsigntemplate_filenamepattern; // string
    int b_ezsigntemplate_adminonly; //boolean
    char *s_ezsignfoldertype_name_x; // string
    struct common_audit_t *obj_audit; //model
    int b_ezsigntemplate_editallowed; //boolean
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type; // custom
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
    char *s_ezsigntemplate_filenamepattern,
    int b_ezsigntemplate_adminonly,
    char *s_ezsignfoldertype_name_x,
    common_audit_t *obj_audit,
    int b_ezsigntemplate_editallowed,
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type,
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument,
    list_t *a_obj_ezsigntemplatesigner
);

void ezsigntemplate_get_object_v1_response_m_payload_free(ezsigntemplate_get_object_v1_response_m_payload_t *ezsigntemplate_get_object_v1_response_m_payload);

ezsigntemplate_get_object_v1_response_m_payload_t *ezsigntemplate_get_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplate_get_object_v1_response_m_payloadJSON);

cJSON *ezsigntemplate_get_object_v1_response_m_payload_convertToJSON(ezsigntemplate_get_object_v1_response_m_payload_t *ezsigntemplate_get_object_v1_response_m_payload);

#endif /* _ezsigntemplate_get_object_v1_response_m_payload_H_ */

