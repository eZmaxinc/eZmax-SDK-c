/*
 * lead_batch_download_v1_request.h
 *
 * Request for POST /1/object/lead/{pkiLeadID}/batchDownload
 */

#ifndef _lead_batch_download_v1_request_H_
#define _lead_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct lead_batch_download_v1_request_t lead_batch_download_v1_request_t;




typedef struct lead_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} lead_batch_download_v1_request_t;

__attribute__((deprecated)) lead_batch_download_v1_request_t *lead_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void lead_batch_download_v1_request_free(lead_batch_download_v1_request_t *lead_batch_download_v1_request);

lead_batch_download_v1_request_t *lead_batch_download_v1_request_parseFromJSON(cJSON *lead_batch_download_v1_requestJSON);

cJSON *lead_batch_download_v1_request_convertToJSON(lead_batch_download_v1_request_t *lead_batch_download_v1_request);

#endif /* _lead_batch_download_v1_request_H_ */

