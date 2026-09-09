/*
 * inscriptionnotauthenticated_batch_download_v1_request.h
 *
 * Request for POST /1/object/inscriptionnotauthenticated/{pkiInscriptionnotauthenticatedID}/batchDownload
 */

#ifndef _inscriptionnotauthenticated_batch_download_v1_request_H_
#define _inscriptionnotauthenticated_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscriptionnotauthenticated_batch_download_v1_request_t inscriptionnotauthenticated_batch_download_v1_request_t;




typedef struct inscriptionnotauthenticated_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} inscriptionnotauthenticated_batch_download_v1_request_t;

__attribute__((deprecated)) inscriptionnotauthenticated_batch_download_v1_request_t *inscriptionnotauthenticated_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void inscriptionnotauthenticated_batch_download_v1_request_free(inscriptionnotauthenticated_batch_download_v1_request_t *inscriptionnotauthenticated_batch_download_v1_request);

inscriptionnotauthenticated_batch_download_v1_request_t *inscriptionnotauthenticated_batch_download_v1_request_parseFromJSON(cJSON *inscriptionnotauthenticated_batch_download_v1_requestJSON);

cJSON *inscriptionnotauthenticated_batch_download_v1_request_convertToJSON(inscriptionnotauthenticated_batch_download_v1_request_t *inscriptionnotauthenticated_batch_download_v1_request);

#endif /* _inscriptionnotauthenticated_batch_download_v1_request_H_ */

