/*
 * reconciliation_batch_download_v1_request.h
 *
 * Request for POST /1/object/reconciliation/{pkiReconciliationID}/batchDownload
 */

#ifndef _reconciliation_batch_download_v1_request_H_
#define _reconciliation_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct reconciliation_batch_download_v1_request_t reconciliation_batch_download_v1_request_t;




typedef struct reconciliation_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} reconciliation_batch_download_v1_request_t;

__attribute__((deprecated)) reconciliation_batch_download_v1_request_t *reconciliation_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void reconciliation_batch_download_v1_request_free(reconciliation_batch_download_v1_request_t *reconciliation_batch_download_v1_request);

reconciliation_batch_download_v1_request_t *reconciliation_batch_download_v1_request_parseFromJSON(cJSON *reconciliation_batch_download_v1_requestJSON);

cJSON *reconciliation_batch_download_v1_request_convertToJSON(reconciliation_batch_download_v1_request_t *reconciliation_batch_download_v1_request);

#endif /* _reconciliation_batch_download_v1_request_H_ */

