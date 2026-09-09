/*
 * deposit_batch_download_v1_request.h
 *
 * Request for POST /1/object/deposit/{pkiDepositID}/batchDownload
 */

#ifndef _deposit_batch_download_v1_request_H_
#define _deposit_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposit_batch_download_v1_request_t deposit_batch_download_v1_request_t;




typedef struct deposit_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} deposit_batch_download_v1_request_t;

__attribute__((deprecated)) deposit_batch_download_v1_request_t *deposit_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void deposit_batch_download_v1_request_free(deposit_batch_download_v1_request_t *deposit_batch_download_v1_request);

deposit_batch_download_v1_request_t *deposit_batch_download_v1_request_parseFromJSON(cJSON *deposit_batch_download_v1_requestJSON);

cJSON *deposit_batch_download_v1_request_convertToJSON(deposit_batch_download_v1_request_t *deposit_batch_download_v1_request);

#endif /* _deposit_batch_download_v1_request_H_ */

