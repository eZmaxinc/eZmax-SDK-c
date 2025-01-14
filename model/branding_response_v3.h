/*
 * branding_response_v3.h
 *
 * A Branding Object
 */

#ifndef _branding_response_v3_H_
#define _branding_response_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_response_v3_t branding_response_v3_t;

#include "field_e_branding_alignlogo.h"
#include "field_e_branding_logo.h"
#include "multilingual_branding_description.h"

// Enum  for branding_response_v3

typedef enum  { ezmax_api_definition__full_branding_response_v3__NULL = 0, ezmax_api_definition__full_branding_response_v3___Default, ezmax_api_definition__full_branding_response_v3__JPEG, ezmax_api_definition__full_branding_response_v3__PNG } ezmax_api_definition__full_branding_response_v3__e;

char* branding_response_v3_e_branding_logo_ToString(ezmax_api_definition__full_branding_response_v3__e e_branding_logo);

ezmax_api_definition__full_branding_response_v3__e branding_response_v3_e_branding_logo_FromString(char* e_branding_logo);

// Enum  for branding_response_v3

typedef enum  { ezmax_api_definition__full_branding_response_v3__NULL = 0, ezmax_api_definition__full_branding_response_v3__Center, ezmax_api_definition__full_branding_response_v3__Left, ezmax_api_definition__full_branding_response_v3__Right } ezmax_api_definition__full_branding_response_v3__e;

char* branding_response_v3_e_branding_alignlogo_ToString(ezmax_api_definition__full_branding_response_v3__e e_branding_alignlogo);

ezmax_api_definition__full_branding_response_v3__e branding_response_v3_e_branding_alignlogo_FromString(char* e_branding_alignlogo);



typedef struct branding_response_v3_t {
    int pki_branding_id; //numeric
    int fki_email_id; //numeric
    struct multilingual_branding_description_t *obj_branding_description; //model
    char *s_branding_description_x; // string
    char *s_branding_name; // string
    char *s_email_address; // string
    field_e_branding_logo_t *e_branding_logo; // custom
    field_e_branding_alignlogo_t *e_branding_alignlogo; // custom
    int i_branding_color; //numeric
    int b_branding_isactive; //boolean

} branding_response_v3_t;

branding_response_v3_t *branding_response_v3_create(
    int pki_branding_id,
    int fki_email_id,
    multilingual_branding_description_t *obj_branding_description,
    char *s_branding_description_x,
    char *s_branding_name,
    char *s_email_address,
    field_e_branding_logo_t *e_branding_logo,
    field_e_branding_alignlogo_t *e_branding_alignlogo,
    int i_branding_color,
    int b_branding_isactive
);

void branding_response_v3_free(branding_response_v3_t *branding_response_v3);

branding_response_v3_t *branding_response_v3_parseFromJSON(cJSON *branding_response_v3JSON);

cJSON *branding_response_v3_convertToJSON(branding_response_v3_t *branding_response_v3);

#endif /* _branding_response_v3_H_ */

