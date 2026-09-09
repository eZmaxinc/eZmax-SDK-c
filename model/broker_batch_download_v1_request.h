/*
 * broker_batch_download_v1_request.h
 *
 * Request for POST /1/object/broker/{pkiBrokerID}/batchDownload
 */

#ifndef _broker_batch_download_v1_request_H_
#define _broker_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct broker_batch_download_v1_request_t broker_batch_download_v1_request_t;




typedef struct broker_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} broker_batch_download_v1_request_t;

__attribute__((deprecated)) broker_batch_download_v1_request_t *broker_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void broker_batch_download_v1_request_free(broker_batch_download_v1_request_t *broker_batch_download_v1_request);

broker_batch_download_v1_request_t *broker_batch_download_v1_request_parseFromJSON(cJSON *broker_batch_download_v1_requestJSON);

cJSON *broker_batch_download_v1_request_convertToJSON(broker_batch_download_v1_request_t *broker_batch_download_v1_request);

#endif /* _broker_batch_download_v1_request_H_ */

