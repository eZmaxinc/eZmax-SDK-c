/*
 * branding_request_v2.h
 *
 * A Branding Object
 */

#ifndef _branding_request_v2_H_
#define _branding_request_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_request_v2_t branding_request_v2_t;

#include "field_e_branding_alignlogo.h"
#include "field_e_branding_logo.h"
#include "multilingual_branding_description.h"

// Enum  for branding_request_v2

typedef enum  { ezmax_api_definition__full_branding_request_v2__NULL = 0, ezmax_api_definition__full_branding_request_v2___Default, ezmax_api_definition__full_branding_request_v2__JPEG, ezmax_api_definition__full_branding_request_v2__PNG } ezmax_api_definition__full_branding_request_v2__e;

char* branding_request_v2_e_branding_logo_ToString(ezmax_api_definition__full_branding_request_v2__e e_branding_logo);

ezmax_api_definition__full_branding_request_v2__e branding_request_v2_e_branding_logo_FromString(char* e_branding_logo);

// Enum  for branding_request_v2

typedef enum  { ezmax_api_definition__full_branding_request_v2__NULL = 0, ezmax_api_definition__full_branding_request_v2__Center, ezmax_api_definition__full_branding_request_v2__Left, ezmax_api_definition__full_branding_request_v2__Right } ezmax_api_definition__full_branding_request_v2__e;

char* branding_request_v2_e_branding_alignlogo_ToString(ezmax_api_definition__full_branding_request_v2__e e_branding_alignlogo);

ezmax_api_definition__full_branding_request_v2__e branding_request_v2_e_branding_alignlogo_FromString(char* e_branding_alignlogo);



typedef struct branding_request_v2_t {
    int pki_branding_id; //numeric
    struct multilingual_branding_description_t *obj_branding_description; //model
    field_e_branding_logo_t *e_branding_logo; // custom
    field_e_branding_alignlogo_t *e_branding_alignlogo; // custom
    char *s_branding_base64; //ByteArray
    int i_branding_color; //numeric
    char *s_branding_name; // string
    char *s_email_address; // string
    int b_branding_isactive; //boolean

} branding_request_v2_t;

branding_request_v2_t *branding_request_v2_create(
    int pki_branding_id,
    multilingual_branding_description_t *obj_branding_description,
    field_e_branding_logo_t *e_branding_logo,
    field_e_branding_alignlogo_t *e_branding_alignlogo,
    char *s_branding_base64,
    int i_branding_color,
    char *s_branding_name,
    char *s_email_address,
    int b_branding_isactive
);

void branding_request_v2_free(branding_request_v2_t *branding_request_v2);

branding_request_v2_t *branding_request_v2_parseFromJSON(cJSON *branding_request_v2JSON);

cJSON *branding_request_v2_convertToJSON(branding_request_v2_t *branding_request_v2);

#endif /* _branding_request_v2_H_ */

