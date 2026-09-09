/*
 * paymentpreparation_batch_download_v1_request.h
 *
 * Request for POST /1/object/paymentpreparation/{pkiPaymentpreparationID}/batchDownload
 */

#ifndef _paymentpreparation_batch_download_v1_request_H_
#define _paymentpreparation_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct paymentpreparation_batch_download_v1_request_t paymentpreparation_batch_download_v1_request_t;




typedef struct paymentpreparation_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} paymentpreparation_batch_download_v1_request_t;

__attribute__((deprecated)) paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void paymentpreparation_batch_download_v1_request_free(paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request);

paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request_parseFromJSON(cJSON *paymentpreparation_batch_download_v1_requestJSON);

cJSON *paymentpreparation_batch_download_v1_request_convertToJSON(paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request);

#endif /* _paymentpreparation_batch_download_v1_request_H_ */

