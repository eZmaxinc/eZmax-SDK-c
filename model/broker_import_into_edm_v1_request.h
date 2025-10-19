/*
 * broker_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/broker/{pkiBrokerID}/importIntoEDM
 */

#ifndef _broker_import_into_edm_v1_request_H_
#define _broker_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct broker_import_into_edm_v1_request_t broker_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct broker_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} broker_import_into_edm_v1_request_t;

__attribute__((deprecated)) broker_import_into_edm_v1_request_t *broker_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void broker_import_into_edm_v1_request_free(broker_import_into_edm_v1_request_t *broker_import_into_edm_v1_request);

broker_import_into_edm_v1_request_t *broker_import_into_edm_v1_request_parseFromJSON(cJSON *broker_import_into_edm_v1_requestJSON);

cJSON *broker_import_into_edm_v1_request_convertToJSON(broker_import_into_edm_v1_request_t *broker_import_into_edm_v1_request);

#endif /* _broker_import_into_edm_v1_request_H_ */

