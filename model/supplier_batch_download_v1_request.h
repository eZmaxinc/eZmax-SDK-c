/*
 * supplier_batch_download_v1_request.h
 *
 * Request for POST /1/object/supplier/{pkiSupplierID}/batchDownload
 */

#ifndef _supplier_batch_download_v1_request_H_
#define _supplier_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supplier_batch_download_v1_request_t supplier_batch_download_v1_request_t;




typedef struct supplier_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} supplier_batch_download_v1_request_t;

__attribute__((deprecated)) supplier_batch_download_v1_request_t *supplier_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void supplier_batch_download_v1_request_free(supplier_batch_download_v1_request_t *supplier_batch_download_v1_request);

supplier_batch_download_v1_request_t *supplier_batch_download_v1_request_parseFromJSON(cJSON *supplier_batch_download_v1_requestJSON);

cJSON *supplier_batch_download_v1_request_convertToJSON(supplier_batch_download_v1_request_t *supplier_batch_download_v1_request);

#endif /* _supplier_batch_download_v1_request_H_ */

