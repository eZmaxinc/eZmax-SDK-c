/*
 * otherincome_batch_download_v1_request.h
 *
 * Request for POST /1/object/otherincome/{pkiOtherincomeID}/batchDownload
 */

#ifndef _otherincome_batch_download_v1_request_H_
#define _otherincome_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct otherincome_batch_download_v1_request_t otherincome_batch_download_v1_request_t;




typedef struct otherincome_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} otherincome_batch_download_v1_request_t;

__attribute__((deprecated)) otherincome_batch_download_v1_request_t *otherincome_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void otherincome_batch_download_v1_request_free(otherincome_batch_download_v1_request_t *otherincome_batch_download_v1_request);

otherincome_batch_download_v1_request_t *otherincome_batch_download_v1_request_parseFromJSON(cJSON *otherincome_batch_download_v1_requestJSON);

cJSON *otherincome_batch_download_v1_request_convertToJSON(otherincome_batch_download_v1_request_t *otherincome_batch_download_v1_request);

#endif /* _otherincome_batch_download_v1_request_H_ */

