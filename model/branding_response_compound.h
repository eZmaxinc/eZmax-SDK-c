/*
 * branding_response_compound.h
 *
 * A Branding Object
 */

#ifndef _branding_response_compound_H_
#define _branding_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_response_compound_t branding_response_compound_t;

#include "field_e_branding_logo.h"
#include "multilingual_branding_description.h"

// Enum  for branding_response_compound

typedef enum  { ezmax_api_definition__full_branding_response_compound__NULL = 0, ezmax_api_definition__full_branding_response_compound___Default, ezmax_api_definition__full_branding_response_compound__JPEG, ezmax_api_definition__full_branding_response_compound__PNG } ezmax_api_definition__full_branding_response_compound__e;

char* branding_response_compound_e_branding_logo_ToString(ezmax_api_definition__full_branding_response_compound__e e_branding_logo);

ezmax_api_definition__full_branding_response_compound__e branding_response_compound_e_branding_logo_FromString(char* e_branding_logo);



typedef struct branding_response_compound_t {
    int pki_branding_id; //numeric
    int fki_email_id; //numeric
    struct multilingual_branding_description_t *obj_branding_description; //model
    char *s_branding_description_x; // string
    char *s_branding_name; // string
    char *s_email_address; // string
    field_e_branding_logo_t *e_branding_logo; // custom
    int i_branding_colortext; //numeric
    int i_branding_colortextlinkbox; //numeric
    int i_branding_colortextbutton; //numeric
    int i_branding_colorbackground; //numeric
    int i_branding_colorbackgroundbutton; //numeric
    int i_branding_colorbackgroundsmallbox; //numeric
    int b_branding_isactive; //boolean
    char *s_branding_logourl; // string

} branding_response_compound_t;

branding_response_compound_t *branding_response_compound_create(
    int pki_branding_id,
    int fki_email_id,
    multilingual_branding_description_t *obj_branding_description,
    char *s_branding_description_x,
    char *s_branding_name,
    char *s_email_address,
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

void branding_response_compound_free(branding_response_compound_t *branding_response_compound);

branding_response_compound_t *branding_response_compound_parseFromJSON(cJSON *branding_response_compoundJSON);

cJSON *branding_response_compound_convertToJSON(branding_response_compound_t *branding_response_compound);

#endif /* _branding_response_compound_H_ */

