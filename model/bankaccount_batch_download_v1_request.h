/*
 * bankaccount_batch_download_v1_request.h
 *
 * Request for POST /1/object/bankaccount/{pkiBankaccountID}/batchDownload
 */

#ifndef _bankaccount_batch_download_v1_request_H_
#define _bankaccount_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct bankaccount_batch_download_v1_request_t bankaccount_batch_download_v1_request_t;




typedef struct bankaccount_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} bankaccount_batch_download_v1_request_t;

__attribute__((deprecated)) bankaccount_batch_download_v1_request_t *bankaccount_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void bankaccount_batch_download_v1_request_free(bankaccount_batch_download_v1_request_t *bankaccount_batch_download_v1_request);

bankaccount_batch_download_v1_request_t *bankaccount_batch_download_v1_request_parseFromJSON(cJSON *bankaccount_batch_download_v1_requestJSON);

cJSON *bankaccount_batch_download_v1_request_convertToJSON(bankaccount_batch_download_v1_request_t *bankaccount_batch_download_v1_request);

#endif /* _bankaccount_batch_download_v1_request_H_ */

