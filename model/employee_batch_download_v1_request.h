/*
 * employee_batch_download_v1_request.h
 *
 * Request for POST /1/object/employee/{pkiEmployeeID}/batchDownload
 */

#ifndef _employee_batch_download_v1_request_H_
#define _employee_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct employee_batch_download_v1_request_t employee_batch_download_v1_request_t;




typedef struct employee_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} employee_batch_download_v1_request_t;

__attribute__((deprecated)) employee_batch_download_v1_request_t *employee_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void employee_batch_download_v1_request_free(employee_batch_download_v1_request_t *employee_batch_download_v1_request);

employee_batch_download_v1_request_t *employee_batch_download_v1_request_parseFromJSON(cJSON *employee_batch_download_v1_requestJSON);

cJSON *employee_batch_download_v1_request_convertToJSON(employee_batch_download_v1_request_t *employee_batch_download_v1_request);

#endif /* _employee_batch_download_v1_request_H_ */

