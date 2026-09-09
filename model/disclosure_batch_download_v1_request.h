/*
 * disclosure_batch_download_v1_request.h
 *
 * Request for POST /1/object/disclosure/{pkiDisclosureID}/batchDownload
 */

#ifndef _disclosure_batch_download_v1_request_H_
#define _disclosure_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct disclosure_batch_download_v1_request_t disclosure_batch_download_v1_request_t;




typedef struct disclosure_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} disclosure_batch_download_v1_request_t;

__attribute__((deprecated)) disclosure_batch_download_v1_request_t *disclosure_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void disclosure_batch_download_v1_request_free(disclosure_batch_download_v1_request_t *disclosure_batch_download_v1_request);

disclosure_batch_download_v1_request_t *disclosure_batch_download_v1_request_parseFromJSON(cJSON *disclosure_batch_download_v1_requestJSON);

cJSON *disclosure_batch_download_v1_request_convertToJSON(disclosure_batch_download_v1_request_t *disclosure_batch_download_v1_request);

#endif /* _disclosure_batch_download_v1_request_H_ */

