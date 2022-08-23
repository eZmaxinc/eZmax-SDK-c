/*
 * branding_request.h
 *
 * A Branding Object
 */

#ifndef _branding_request_H_
#define _branding_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_request_t branding_request_t;

#include "field_e_branding_logo.h"
#include "multilingual_branding_description.h"

// Enum  for branding_request

typedef enum  { ezmax_api_definition__full_branding_request__NULL = 0, ezmax_api_definition__full_branding_request___Default, ezmax_api_definition__full_branding_request__JPEG, ezmax_api_definition__full_branding_request__PNG } ezmax_api_definition__full_branding_request__e;

char* branding_request_e_branding_logo_ToString(ezmax_api_definition__full_branding_request__e e_branding_logo);

ezmax_api_definition__full_branding_request__e branding_request_e_branding_logo_FromString(char* e_branding_logo);



typedef struct branding_request_t {
    int pki_branding_id; //numeric
    struct multilingual_branding_description_t *obj_branding_description; //model
    field_e_branding_logo_t *e_branding_logo; // custom
    char *s_branding_base64; //ByteArray
    int i_branding_colortext; //numeric
    int i_branding_colortextlinkbox; //numeric
    int i_branding_colortextbutton; //numeric
    int i_branding_colorbackground; //numeric
    int i_branding_colorbackgroundbutton; //numeric
    int i_branding_colorbackgroundsmallbox; //numeric
    int b_branding_isactive; //boolean

} branding_request_t;

branding_request_t *branding_request_create(
    int pki_branding_id,
    multilingual_branding_description_t *obj_branding_description,
    field_e_branding_logo_t *e_branding_logo,
    char *s_branding_base64,
    int i_branding_colortext,
    int i_branding_colortextlinkbox,
    int i_branding_colortextbutton,
    int i_branding_colorbackground,
    int i_branding_colorbackgroundbutton,
    int i_branding_colorbackgroundsmallbox,
    int b_branding_isactive
);

void branding_request_free(branding_request_t *branding_request);

branding_request_t *branding_request_parseFromJSON(cJSON *branding_requestJSON);

cJSON *branding_request_convertToJSON(branding_request_t *branding_request);

#endif /* _branding_request_H_ */

