/*
 * apikey_response_compound.h
 *
 * An Apikey Object and children to create a complete structure
 */

#ifndef _apikey_response_compound_H_
#define _apikey_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_response_compound_t apikey_response_compound_t;

#include "common_audit.h"
#include "custom_contact_name_response.h"
#include "multilingual_apikey_description.h"



typedef struct apikey_response_compound_t {
    int pki_apikey_id; //numeric
    int fki_user_id; //numeric
    struct multilingual_apikey_description_t *obj_apikey_description; //model
    struct custom_contact_name_response_t *obj_contact_name; //model
    char *s_apikey_apikey; // string
    char *s_apikey_secret; // string
    int b_apikey_isactive; //boolean
    int b_apikey_issigned; //boolean
    struct common_audit_t *obj_audit; //model

} apikey_response_compound_t;

apikey_response_compound_t *apikey_response_compound_create(
    int pki_apikey_id,
    int fki_user_id,
    multilingual_apikey_description_t *obj_apikey_description,
    custom_contact_name_response_t *obj_contact_name,
    char *s_apikey_apikey,
    char *s_apikey_secret,
    int b_apikey_isactive,
    int b_apikey_issigned,
    common_audit_t *obj_audit
);

void apikey_response_compound_free(apikey_response_compound_t *apikey_response_compound);

apikey_response_compound_t *apikey_response_compound_parseFromJSON(cJSON *apikey_response_compoundJSON);

cJSON *apikey_response_compound_convertToJSON(apikey_response_compound_t *apikey_response_compound);

#endif /* _apikey_response_compound_H_ */

