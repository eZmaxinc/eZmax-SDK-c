/*
 * branding_response.h
 *
 * A Branding Object
 */

#ifndef _branding_response_H_
#define _branding_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_response_t branding_response_t;

#include "field_e_branding_logo.h"
#include "multilingual_branding_description.h"

// Enum  for branding_response

typedef enum  { ezmax_api_definition__full_branding_response__NULL = 0, ezmax_api_definition__full_branding_response___Default, ezmax_api_definition__full_branding_response__JPEG, ezmax_api_definition__full_branding_response__PNG } ezmax_api_definition__full_branding_response__e;

char* branding_response_e_branding_logo_ToString(ezmax_api_definition__full_branding_response__e e_branding_logo);

ezmax_api_definition__full_branding_response__e branding_response_e_branding_logo_FromString(char* e_branding_logo);



typedef struct branding_response_t {
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

} branding_response_t;

branding_response_t *branding_response_create(
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
    int b_branding_isactive
);

void branding_response_free(branding_response_t *branding_response);

branding_response_t *branding_response_parseFromJSON(cJSON *branding_responseJSON);

cJSON *branding_response_convertToJSON(branding_response_t *branding_response);

#endif /* _branding_response_H_ */

