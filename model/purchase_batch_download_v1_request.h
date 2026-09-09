/*
 * purchase_batch_download_v1_request.h
 *
 * Request for POST /1/object/purchase/{pkiPurchaseID}/batchDownload
 */

#ifndef _purchase_batch_download_v1_request_H_
#define _purchase_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct purchase_batch_download_v1_request_t purchase_batch_download_v1_request_t;




typedef struct purchase_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} purchase_batch_download_v1_request_t;

__attribute__((deprecated)) purchase_batch_download_v1_request_t *purchase_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void purchase_batch_download_v1_request_free(purchase_batch_download_v1_request_t *purchase_batch_download_v1_request);

purchase_batch_download_v1_request_t *purchase_batch_download_v1_request_parseFromJSON(cJSON *purchase_batch_download_v1_requestJSON);

cJSON *purchase_batch_download_v1_request_convertToJSON(purchase_batch_download_v1_request_t *purchase_batch_download_v1_request);

#endif /* _purchase_batch_download_v1_request_H_ */

