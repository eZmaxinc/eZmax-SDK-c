/*
 * apikey_response.h
 *
 * An Apikey Object
 */

#ifndef _apikey_response_H_
#define _apikey_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_response_t apikey_response_t;

#include "common_audit.h"
#include "multilingual_apikey_description.h"



typedef struct apikey_response_t {
    int pki_apikey_id; //numeric
    int fki_user_id; //numeric
    struct multilingual_apikey_description_t *obj_apikey_description; //model
    char *s_computed_token; // string
    int b_apikey_isactive; //boolean
    struct common_audit_t *obj_audit; //model

} apikey_response_t;

apikey_response_t *apikey_response_create(
    int pki_apikey_id,
    int fki_user_id,
    multilingual_apikey_description_t *obj_apikey_description,
    char *s_computed_token,
    int b_apikey_isactive,
    common_audit_t *obj_audit
);

void apikey_response_free(apikey_response_t *apikey_response);

apikey_response_t *apikey_response_parseFromJSON(cJSON *apikey_responseJSON);

cJSON *apikey_response_convertToJSON(apikey_response_t *apikey_response);

#endif /* _apikey_response_H_ */

