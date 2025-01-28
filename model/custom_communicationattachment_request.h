/*
 * custom_communicationattachment_request.h
 *
 * A Custom Communicationattachment Object
 */

#ifndef _custom_communicationattachment_request_H_
#define _custom_communicationattachment_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_communicationattachment_request_t custom_communicationattachment_request_t;

#include "common_file.h"
#include "communicationattachment_request_compound.h"



typedef struct custom_communicationattachment_request_t {
    struct communicationattachment_request_compound_t *obj_communicationattachment; //model
    struct common_file_t *obj_communicationexternalattachment; //model

    int _library_owned; // Is the library responsible for freeing this object?
} custom_communicationattachment_request_t;

__attribute__((deprecated)) custom_communicationattachment_request_t *custom_communicationattachment_request_create(
    communicationattachment_request_compound_t *obj_communicationattachment,
    common_file_t *obj_communicationexternalattachment
);

void custom_communicationattachment_request_free(custom_communicationattachment_request_t *custom_communicationattachment_request);

custom_communicationattachment_request_t *custom_communicationattachment_request_parseFromJSON(cJSON *custom_communicationattachment_requestJSON);

cJSON *custom_communicationattachment_request_convertToJSON(custom_communicationattachment_request_t *custom_communicationattachment_request);

#endif /* _custom_communicationattachment_request_H_ */

