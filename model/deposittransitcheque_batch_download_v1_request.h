/*
 * deposittransitcheque_batch_download_v1_request.h
 *
 * Request for POST /1/object/deposittransitcheque/{pkiDeposittransitchequeID}/batchDownload
 */

#ifndef _deposittransitcheque_batch_download_v1_request_H_
#define _deposittransitcheque_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deposittransitcheque_batch_download_v1_request_t deposittransitcheque_batch_download_v1_request_t;




typedef struct deposittransitcheque_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} deposittransitcheque_batch_download_v1_request_t;

__attribute__((deprecated)) deposittransitcheque_batch_download_v1_request_t *deposittransitcheque_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void deposittransitcheque_batch_download_v1_request_free(deposittransitcheque_batch_download_v1_request_t *deposittransitcheque_batch_download_v1_request);

deposittransitcheque_batch_download_v1_request_t *deposittransitcheque_batch_download_v1_request_parseFromJSON(cJSON *deposittransitcheque_batch_download_v1_requestJSON);

cJSON *deposittransitcheque_batch_download_v1_request_convertToJSON(deposittransitcheque_batch_download_v1_request_t *deposittransitcheque_batch_download_v1_request);

#endif /* _deposittransitcheque_batch_download_v1_request_H_ */

