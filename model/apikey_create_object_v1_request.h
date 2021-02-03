/*
 * apikey_create_object_v1_request.h
 *
 * Request for the /1/object/apikey/createObject API Request
 */

#ifndef _apikey_create_object_v1_request_H_
#define _apikey_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_create_object_v1_request_t apikey_create_object_v1_request_t;

#include "apikey_request.h"
#include "apikey_request_compound.h"



typedef struct apikey_create_object_v1_request_t {
    struct apikey_request_t *obj_apikey; //model
    struct apikey_request_compound_t *obj_apikey_compound; //model

} apikey_create_object_v1_request_t;

apikey_create_object_v1_request_t *apikey_create_object_v1_request_create(
    apikey_request_t *obj_apikey,
    apikey_request_compound_t *obj_apikey_compound
);

void apikey_create_object_v1_request_free(apikey_create_object_v1_request_t *apikey_create_object_v1_request);

apikey_create_object_v1_request_t *apikey_create_object_v1_request_parseFromJSON(cJSON *apikey_create_object_v1_requestJSON);

cJSON *apikey_create_object_v1_request_convertToJSON(apikey_create_object_v1_request_t *apikey_create_object_v1_request);

#endif /* _apikey_create_object_v1_request_H_ */

