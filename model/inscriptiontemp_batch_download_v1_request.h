/*
 * inscriptiontemp_batch_download_v1_request.h
 *
 * Request for POST /1/object/inscriptiontemp/{pkiInscriptiontempID}/batchDownload
 */

#ifndef _inscriptiontemp_batch_download_v1_request_H_
#define _inscriptiontemp_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptiontemp_batch_download_v1_request_t inscriptiontemp_batch_download_v1_request_t;




typedef struct inscriptiontemp_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptiontemp_batch_download_v1_request_t;

__attribute__((deprecated)) inscriptiontemp_batch_download_v1_request_t *inscriptiontemp_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void inscriptiontemp_batch_download_v1_request_free(inscriptiontemp_batch_download_v1_request_t *inscriptiontemp_batch_download_v1_request);

inscriptiontemp_batch_download_v1_request_t *inscriptiontemp_batch_download_v1_request_parseFromJSON(cJSON *inscriptiontemp_batch_download_v1_requestJSON);

cJSON *inscriptiontemp_batch_download_v1_request_convertToJSON(inscriptiontemp_batch_download_v1_request_t *inscriptiontemp_batch_download_v1_request);

#endif /* _inscriptiontemp_batch_download_v1_request_H_ */

