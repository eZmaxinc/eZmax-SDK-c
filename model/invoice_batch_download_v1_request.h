/*
 * invoice_batch_download_v1_request.h
 *
 * Request for POST /1/object/invoice/{pkiInvoiceID}/batchDownload
 */

#ifndef _invoice_batch_download_v1_request_H_
#define _invoice_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_batch_download_v1_request_t invoice_batch_download_v1_request_t;




typedef struct invoice_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} invoice_batch_download_v1_request_t;

__attribute__((deprecated)) invoice_batch_download_v1_request_t *invoice_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void invoice_batch_download_v1_request_free(invoice_batch_download_v1_request_t *invoice_batch_download_v1_request);

invoice_batch_download_v1_request_t *invoice_batch_download_v1_request_parseFromJSON(cJSON *invoice_batch_download_v1_requestJSON);

cJSON *invoice_batch_download_v1_request_convertToJSON(invoice_batch_download_v1_request_t *invoice_batch_download_v1_request);

#endif /* _invoice_batch_download_v1_request_H_ */

