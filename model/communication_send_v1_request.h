/*
 * communication_send_v1_request.h
 *
 * Request for POST /1/object/communication
 */

#ifndef _communication_send_v1_request_H_
#define _communication_send_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_send_v1_request_t communication_send_v1_request_t;

#include "communication_request_compound.h"



typedef struct communication_send_v1_request_t {
    list_t *a_obj_communication; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} communication_send_v1_request_t;

__attribute__((deprecated)) communication_send_v1_request_t *communication_send_v1_request_create(
    list_t *a_obj_communication
);

void communication_send_v1_request_free(communication_send_v1_request_t *communication_send_v1_request);

communication_send_v1_request_t *communication_send_v1_request_parseFromJSON(cJSON *communication_send_v1_requestJSON);

cJSON *communication_send_v1_request_convertToJSON(communication_send_v1_request_t *communication_send_v1_request);

#endif /* _communication_send_v1_request_H_ */

