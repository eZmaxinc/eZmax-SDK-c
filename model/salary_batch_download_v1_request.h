/*
 * salary_batch_download_v1_request.h
 *
 * Request for POST /1/object/salary/{pkiSalaryID}/batchDownload
 */

#ifndef _salary_batch_download_v1_request_H_
#define _salary_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct salary_batch_download_v1_request_t salary_batch_download_v1_request_t;




typedef struct salary_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} salary_batch_download_v1_request_t;

__attribute__((deprecated)) salary_batch_download_v1_request_t *salary_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void salary_batch_download_v1_request_free(salary_batch_download_v1_request_t *salary_batch_download_v1_request);

salary_batch_download_v1_request_t *salary_batch_download_v1_request_parseFromJSON(cJSON *salary_batch_download_v1_requestJSON);

cJSON *salary_batch_download_v1_request_convertToJSON(salary_batch_download_v1_request_t *salary_batch_download_v1_request);

#endif /* _salary_batch_download_v1_request_H_ */

