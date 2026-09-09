/*
 * externalbroker_batch_download_v1_request.h
 *
 * Request for POST /1/object/externalbroker/{pkiExternalbrokerID}/batchDownload
 */

#ifndef _externalbroker_batch_download_v1_request_H_
#define _externalbroker_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct externalbroker_batch_download_v1_request_t externalbroker_batch_download_v1_request_t;




typedef struct externalbroker_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} externalbroker_batch_download_v1_request_t;

__attribute__((deprecated)) externalbroker_batch_download_v1_request_t *externalbroker_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void externalbroker_batch_download_v1_request_free(externalbroker_batch_download_v1_request_t *externalbroker_batch_download_v1_request);

externalbroker_batch_download_v1_request_t *externalbroker_batch_download_v1_request_parseFromJSON(cJSON *externalbroker_batch_download_v1_requestJSON);

cJSON *externalbroker_batch_download_v1_request_convertToJSON(externalbroker_batch_download_v1_request_t *externalbroker_batch_download_v1_request);

#endif /* _externalbroker_batch_download_v1_request_H_ */

