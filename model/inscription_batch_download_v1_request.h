/*
 * inscription_batch_download_v1_request.h
 *
 * Request for POST /1/object/inscription/{pkiInscriptionID}/batchDownload
 */

#ifndef _inscription_batch_download_v1_request_H_
#define _inscription_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscription_batch_download_v1_request_t inscription_batch_download_v1_request_t;




typedef struct inscription_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscription_batch_download_v1_request_t;

__attribute__((deprecated)) inscription_batch_download_v1_request_t *inscription_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void inscription_batch_download_v1_request_free(inscription_batch_download_v1_request_t *inscription_batch_download_v1_request);

inscription_batch_download_v1_request_t *inscription_batch_download_v1_request_parseFromJSON(cJSON *inscription_batch_download_v1_requestJSON);

cJSON *inscription_batch_download_v1_request_convertToJSON(inscription_batch_download_v1_request_t *inscription_batch_download_v1_request);

#endif /* _inscription_batch_download_v1_request_H_ */

