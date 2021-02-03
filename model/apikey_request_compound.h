/*
 * apikey_request_compound.h
 *
 * An Apikey Object and children to create a complete structure
 */

#ifndef _apikey_request_compound_H_
#define _apikey_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_request_compound_t apikey_request_compound_t;

#include "apikey_request.h"
#include "multilingual_apikey_description.h"



typedef struct apikey_request_compound_t {
    int fki_user_id; //numeric
    struct multilingual_apikey_description_t *obj_apikey_description; //model

} apikey_request_compound_t;

apikey_request_compound_t *apikey_request_compound_create(
    int fki_user_id,
    multilingual_apikey_description_t *obj_apikey_description
);

void apikey_request_compound_free(apikey_request_compound_t *apikey_request_compound);

apikey_request_compound_t *apikey_request_compound_parseFromJSON(cJSON *apikey_request_compoundJSON);

cJSON *apikey_request_compound_convertToJSON(apikey_request_compound_t *apikey_request_compound);

#endif /* _apikey_request_compound_H_ */

