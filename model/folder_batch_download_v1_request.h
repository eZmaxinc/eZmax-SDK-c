/*
 * folder_batch_download_v1_request.h
 *
 * Request for POST /1/object/folder/{pkiFolderID}/batchDownload
 */

#ifndef _folder_batch_download_v1_request_H_
#define _folder_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct folder_batch_download_v1_request_t folder_batch_download_v1_request_t;




typedef struct folder_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} folder_batch_download_v1_request_t;

__attribute__((deprecated)) folder_batch_download_v1_request_t *folder_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void folder_batch_download_v1_request_free(folder_batch_download_v1_request_t *folder_batch_download_v1_request);

folder_batch_download_v1_request_t *folder_batch_download_v1_request_parseFromJSON(cJSON *folder_batch_download_v1_requestJSON);

cJSON *folder_batch_download_v1_request_convertToJSON(folder_batch_download_v1_request_t *folder_batch_download_v1_request);

#endif /* _folder_batch_download_v1_request_H_ */

