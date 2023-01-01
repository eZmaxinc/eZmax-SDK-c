/*
 * branding_get_object_v1_response_m_payload.h
 *
 * Payload for GET /1/object/branding/{pkiBrandingID}
 */

#ifndef _branding_get_object_v1_response_m_payload_H_
#define _branding_get_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_get_object_v1_response_m_payload_t branding_get_object_v1_response_m_payload_t;

#include "field_e_branding_logo.h"
#include "multilingual_branding_description.h"

// Enum  for branding_get_object_v1_response_m_payload

typedef enum  { ezmax_api_definition__full_branding_get_object_v1_response_m_payload__NULL = 0, ezmax_api_definition__full_branding_get_object_v1_response_m_payload___Default, ezmax_api_definition__full_branding_get_object_v1_response_m_payload__JPEG, ezmax_api_definition__full_branding_get_object_v1_response_m_payload__PNG } ezmax_api_definition__full_branding_get_object_v1_response_m_payload__e;

char* branding_get_object_v1_response_m_payload_e_branding_logo_ToString(ezmax_api_definition__full_branding_get_object_v1_response_m_payload__e e_branding_logo);

ezmax_api_definition__full_branding_get_object_v1_response_m_payload__e branding_get_object_v1_response_m_payload_e_branding_logo_FromString(char* e_branding_logo);



typedef struct branding_get_object_v1_response_m_payload_t {
    int pki_branding_id; //numeric
    struct multilingual_branding_description_t *obj_branding_description; //model
    char *s_branding_description_x; // string
    field_e_branding_logo_t *e_branding_logo; // custom
    int i_branding_colortext; //numeric
    int i_branding_colortextlinkbox; //numeric
    int i_branding_colortextbutton; //numeric
    int i_branding_colorbackground; //numeric
    int i_branding_colorbackgroundbutton; //numeric
    int i_branding_colorbackgroundsmallbox; //numeric
    int b_branding_isactive; //boolean
    char *s_branding_logourl; // string

} branding_get_object_v1_response_m_payload_t;

branding_get_object_v1_response_m_payload_t *branding_get_object_v1_response_m_payload_create(
    int pki_branding_id,
    multilingual_branding_description_t *obj_branding_description,
    char *s_branding_description_x,
    field_e_branding_logo_t *e_branding_logo,
    int i_branding_colortext,
    int i_branding_colortextlinkbox,
    int i_branding_colortextbutton,
    int i_branding_colorbackground,
    int i_branding_colorbackgroundbutton,
    int i_branding_colorbackgroundsmallbox,
    int b_branding_isactive,
    char *s_branding_logourl
);

void branding_get_object_v1_response_m_payload_free(branding_get_object_v1_response_m_payload_t *branding_get_object_v1_response_m_payload);

branding_get_object_v1_response_m_payload_t *branding_get_object_v1_response_m_payload_parseFromJSON(cJSON *branding_get_object_v1_response_m_payloadJSON);

cJSON *branding_get_object_v1_response_m_payload_convertToJSON(branding_get_object_v1_response_m_payload_t *branding_get_object_v1_response_m_payload);

#endif /* _branding_get_object_v1_response_m_payload_H_ */

