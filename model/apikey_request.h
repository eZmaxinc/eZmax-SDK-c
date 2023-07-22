/*
 * apikey_request.h
 *
 * An Apikey Object
 */

#ifndef _apikey_request_H_
#define _apikey_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_request_t apikey_request_t;

#include "multilingual_apikey_description.h"



typedef struct apikey_request_t {
    int pki_apikey_id; //numeric
    int fki_user_id; //numeric
    struct multilingual_apikey_description_t *obj_apikey_description; //model
    int b_apikey_isactive; //boolean

} apikey_request_t;

apikey_request_t *apikey_request_create(
    int pki_apikey_id,
    int fki_user_id,
    multilingual_apikey_description_t *obj_apikey_description,
    int b_apikey_isactive
);

void apikey_request_free(apikey_request_t *apikey_request);

apikey_request_t *apikey_request_parseFromJSON(cJSON *apikey_requestJSON);

cJSON *apikey_request_convertToJSON(apikey_request_t *apikey_request);

#endif /* _apikey_request_H_ */

