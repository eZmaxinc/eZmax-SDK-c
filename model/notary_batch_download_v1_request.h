/*
 * notary_batch_download_v1_request.h
 *
 * Request for POST /1/object/notary/{pkiNotaryID}/batchDownload
 */

#ifndef _notary_batch_download_v1_request_H_
#define _notary_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notary_batch_download_v1_request_t notary_batch_download_v1_request_t;




typedef struct notary_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} notary_batch_download_v1_request_t;

__attribute__((deprecated)) notary_batch_download_v1_request_t *notary_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void notary_batch_download_v1_request_free(notary_batch_download_v1_request_t *notary_batch_download_v1_request);

notary_batch_download_v1_request_t *notary_batch_download_v1_request_parseFromJSON(cJSON *notary_batch_download_v1_requestJSON);

cJSON *notary_batch_download_v1_request_convertToJSON(notary_batch_download_v1_request_t *notary_batch_download_v1_request);

#endif /* _notary_batch_download_v1_request_H_ */

