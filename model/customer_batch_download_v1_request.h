/*
 * customer_batch_download_v1_request.h
 *
 * Request for POST /1/object/customer/{pkiCustomerID}/batchDownload
 */

#ifndef _customer_batch_download_v1_request_H_
#define _customer_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct customer_batch_download_v1_request_t customer_batch_download_v1_request_t;




typedef struct customer_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} customer_batch_download_v1_request_t;

__attribute__((deprecated)) customer_batch_download_v1_request_t *customer_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void customer_batch_download_v1_request_free(customer_batch_download_v1_request_t *customer_batch_download_v1_request);

customer_batch_download_v1_request_t *customer_batch_download_v1_request_parseFromJSON(cJSON *customer_batch_download_v1_requestJSON);

cJSON *customer_batch_download_v1_request_convertToJSON(customer_batch_download_v1_request_t *customer_batch_download_v1_request);

#endif /* _customer_batch_download_v1_request_H_ */

