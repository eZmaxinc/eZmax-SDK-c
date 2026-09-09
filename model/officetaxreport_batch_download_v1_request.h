/*
 * officetaxreport_batch_download_v1_request.h
 *
 * Request for POST /1/object/officetaxreport/{pkiOfficetaxreportID}/batchDownload
 */

#ifndef _officetaxreport_batch_download_v1_request_H_
#define _officetaxreport_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct officetaxreport_batch_download_v1_request_t officetaxreport_batch_download_v1_request_t;




typedef struct officetaxreport_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} officetaxreport_batch_download_v1_request_t;

__attribute__((deprecated)) officetaxreport_batch_download_v1_request_t *officetaxreport_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void officetaxreport_batch_download_v1_request_free(officetaxreport_batch_download_v1_request_t *officetaxreport_batch_download_v1_request);

officetaxreport_batch_download_v1_request_t *officetaxreport_batch_download_v1_request_parseFromJSON(cJSON *officetaxreport_batch_download_v1_requestJSON);

cJSON *officetaxreport_batch_download_v1_request_convertToJSON(officetaxreport_batch_download_v1_request_t *officetaxreport_batch_download_v1_request);

#endif /* _officetaxreport_batch_download_v1_request_H_ */

