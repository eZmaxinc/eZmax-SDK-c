/*
 * buyercontract_batch_download_v1_request.h
 *
 * Request for POST /1/object/buyercontract/{pkiBuyercontractID}/batchDownload
 */

#ifndef _buyercontract_batch_download_v1_request_H_
#define _buyercontract_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct buyercontract_batch_download_v1_request_t buyercontract_batch_download_v1_request_t;




typedef struct buyercontract_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} buyercontract_batch_download_v1_request_t;

__attribute__((deprecated)) buyercontract_batch_download_v1_request_t *buyercontract_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void buyercontract_batch_download_v1_request_free(buyercontract_batch_download_v1_request_t *buyercontract_batch_download_v1_request);

buyercontract_batch_download_v1_request_t *buyercontract_batch_download_v1_request_parseFromJSON(cJSON *buyercontract_batch_download_v1_requestJSON);

cJSON *buyercontract_batch_download_v1_request_convertToJSON(buyercontract_batch_download_v1_request_t *buyercontract_batch_download_v1_request);

#endif /* _buyercontract_batch_download_v1_request_H_ */

