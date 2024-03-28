/*
 * branding_request_compound.h
 *
 * A Branding Object and children
 */

#ifndef _branding_request_compound_H_
#define _branding_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_request_compound_t branding_request_compound_t;

#include "field_e_branding_logo.h"
#include "field_e_branding_logointerface.h"
#include "multilingual_branding_description.h"

// Enum  for branding_request_compound

typedef enum  { ezmax_api_definition__full_branding_request_compound__NULL = 0, ezmax_api_definition__full_branding_request_compound___Default, ezmax_api_definition__full_branding_request_compound__JPEG, ezmax_api_definition__full_branding_request_compound__PNG } ezmax_api_definition__full_branding_request_compound__e;

char* branding_request_compound_e_branding_logo_ToString(ezmax_api_definition__full_branding_request_compound__e e_branding_logo);

ezmax_api_definition__full_branding_request_compound__e branding_request_compound_e_branding_logo_FromString(char* e_branding_logo);

// Enum  for branding_request_compound

typedef enum  { ezmax_api_definition__full_branding_request_compound__NULL = 0, ezmax_api_definition__full_branding_request_compound___Default, ezmax_api_definition__full_branding_request_compound__JPEG, ezmax_api_definition__full_branding_request_compound__PNG } ezmax_api_definition__full_branding_request_compound__e;

char* branding_request_compound_e_branding_logointerface_ToString(ezmax_api_definition__full_branding_request_compound__e e_branding_logointerface);

ezmax_api_definition__full_branding_request_compound__e branding_request_compound_e_branding_logointerface_FromString(char* e_branding_logointerface);



typedef struct branding_request_compound_t {
    int pki_branding_id; //numeric
    struct multilingual_branding_description_t *obj_branding_description; //model
    field_e_branding_logo_t *e_branding_logo; // custom
    char *s_branding_base64; //ByteArray
    field_e_branding_logointerface_t *e_branding_logointerface; // custom
    char *s_branding_logointerface_base64; //ByteArray
    int i_branding_colortext; //numeric
    int i_branding_colortextlinkbox; //numeric
    int i_branding_colortextbutton; //numeric
    int i_branding_colorbackground; //numeric
    int i_branding_colorbackgroundbutton; //numeric
    int i_branding_colorbackgroundsmallbox; //numeric
    int i_branding_interfacecolor; //numeric
    char *s_branding_name; // string
    char *s_email_address; // string
    int b_branding_isactive; //boolean

} branding_request_compound_t;

branding_request_compound_t *branding_request_compound_create(
    int pki_branding_id,
    multilingual_branding_description_t *obj_branding_description,
    field_e_branding_logo_t *e_branding_logo,
    char *s_branding_base64,
    field_e_branding_logointerface_t *e_branding_logointerface,
    char *s_branding_logointerface_base64,
    int i_branding_colortext,
    int i_branding_colortextlinkbox,
    int i_branding_colortextbutton,
    int i_branding_colorbackground,
    int i_branding_colorbackgroundbutton,
    int i_branding_colorbackgroundsmallbox,
    int i_branding_interfacecolor,
    char *s_branding_name,
    char *s_email_address,
    int b_branding_isactive
);

void branding_request_compound_free(branding_request_compound_t *branding_request_compound);

branding_request_compound_t *branding_request_compound_parseFromJSON(cJSON *branding_request_compoundJSON);

cJSON *branding_request_compound_convertToJSON(branding_request_compound_t *branding_request_compound);

#endif /* _branding_request_compound_H_ */

