/*
 * apikey_regenerate_v1_request.h
 *
 * Request for POST /1/object/apikey/{pkiApikeyID}/regenerate
 */

#ifndef _apikey_regenerate_v1_request_H_
#define _apikey_regenerate_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_regenerate_v1_request_t apikey_regenerate_v1_request_t;




typedef struct apikey_regenerate_v1_request_t {
    int b_apikey_issigned; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} apikey_regenerate_v1_request_t;

__attribute__((deprecated)) apikey_regenerate_v1_request_t *apikey_regenerate_v1_request_create(
    int b_apikey_issigned
);

void apikey_regenerate_v1_request_free(apikey_regenerate_v1_request_t *apikey_regenerate_v1_request);

apikey_regenerate_v1_request_t *apikey_regenerate_v1_request_parseFromJSON(cJSON *apikey_regenerate_v1_requestJSON);

cJSON *apikey_regenerate_v1_request_convertToJSON(apikey_regenerate_v1_request_t *apikey_regenerate_v1_request);

#endif /* _apikey_regenerate_v1_request_H_ */

