/*
 * adjustment_batch_download_v1_request.h
 *
 * Request for POST /1/object/adjustment/{pkiAdjustmentID}/batchDownload
 */

#ifndef _adjustment_batch_download_v1_request_H_
#define _adjustment_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct adjustment_batch_download_v1_request_t adjustment_batch_download_v1_request_t;




typedef struct adjustment_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} adjustment_batch_download_v1_request_t;

__attribute__((deprecated)) adjustment_batch_download_v1_request_t *adjustment_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void adjustment_batch_download_v1_request_free(adjustment_batch_download_v1_request_t *adjustment_batch_download_v1_request);

adjustment_batch_download_v1_request_t *adjustment_batch_download_v1_request_parseFromJSON(cJSON *adjustment_batch_download_v1_requestJSON);

cJSON *adjustment_batch_download_v1_request_convertToJSON(adjustment_batch_download_v1_request_t *adjustment_batch_download_v1_request);

#endif /* _adjustment_batch_download_v1_request_H_ */

