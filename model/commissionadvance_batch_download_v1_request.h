/*
 * commissionadvance_batch_download_v1_request.h
 *
 * Request for POST /1/object/commissionadvance/{pkiCommissionadvanceID}/batchDownload
 */

#ifndef _commissionadvance_batch_download_v1_request_H_
#define _commissionadvance_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct commissionadvance_batch_download_v1_request_t commissionadvance_batch_download_v1_request_t;




typedef struct commissionadvance_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} commissionadvance_batch_download_v1_request_t;

__attribute__((deprecated)) commissionadvance_batch_download_v1_request_t *commissionadvance_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void commissionadvance_batch_download_v1_request_free(commissionadvance_batch_download_v1_request_t *commissionadvance_batch_download_v1_request);

commissionadvance_batch_download_v1_request_t *commissionadvance_batch_download_v1_request_parseFromJSON(cJSON *commissionadvance_batch_download_v1_requestJSON);

cJSON *commissionadvance_batch_download_v1_request_convertToJSON(commissionadvance_batch_download_v1_request_t *commissionadvance_batch_download_v1_request);

#endif /* _commissionadvance_batch_download_v1_request_H_ */

