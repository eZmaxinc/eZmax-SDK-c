/*
 * apikey_edit_object_v1_request.h
 *
 * Request for PUT /1/object/apikey/{pkiApikeyID}
 */

#ifndef _apikey_edit_object_v1_request_H_
#define _apikey_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apikey_edit_object_v1_request_t apikey_edit_object_v1_request_t;

#include "apikey_request.h"



typedef struct apikey_edit_object_v1_request_t {
    struct apikey_request_t *obj_apikey; //model

} apikey_edit_object_v1_request_t;

apikey_edit_object_v1_request_t *apikey_edit_object_v1_request_create(
    apikey_request_t *obj_apikey
);

void apikey_edit_object_v1_request_free(apikey_edit_object_v1_request_t *apikey_edit_object_v1_request);

apikey_edit_object_v1_request_t *apikey_edit_object_v1_request_parseFromJSON(cJSON *apikey_edit_object_v1_requestJSON);

cJSON *apikey_edit_object_v1_request_convertToJSON(apikey_edit_object_v1_request_t *apikey_edit_object_v1_request);

#endif /* _apikey_edit_object_v1_request_H_ */

