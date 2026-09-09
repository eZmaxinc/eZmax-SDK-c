/*
 * rejectedoffertopurchase_batch_download_v1_request.h
 *
 * Request for POST /1/object/rejectedoffertopurchase/{pkiRejectedoffertopurchaseID}/batchDownload
 */

#ifndef _rejectedoffertopurchase_batch_download_v1_request_H_
#define _rejectedoffertopurchase_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rejectedoffertopurchase_batch_download_v1_request_t rejectedoffertopurchase_batch_download_v1_request_t;




typedef struct rejectedoffertopurchase_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} rejectedoffertopurchase_batch_download_v1_request_t;

__attribute__((deprecated)) rejectedoffertopurchase_batch_download_v1_request_t *rejectedoffertopurchase_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void rejectedoffertopurchase_batch_download_v1_request_free(rejectedoffertopurchase_batch_download_v1_request_t *rejectedoffertopurchase_batch_download_v1_request);

rejectedoffertopurchase_batch_download_v1_request_t *rejectedoffertopurchase_batch_download_v1_request_parseFromJSON(cJSON *rejectedoffertopurchase_batch_download_v1_requestJSON);

cJSON *rejectedoffertopurchase_batch_download_v1_request_convertToJSON(rejectedoffertopurchase_batch_download_v1_request_t *rejectedoffertopurchase_batch_download_v1_request);

#endif /* _rejectedoffertopurchase_batch_download_v1_request_H_ */

