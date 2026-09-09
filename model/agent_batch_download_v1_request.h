/*
 * agent_batch_download_v1_request.h
 *
 * Request for POST /1/object/agent/{pkiAgentID}/batchDownload
 */

#ifndef _agent_batch_download_v1_request_H_
#define _agent_batch_download_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_batch_download_v1_request_t agent_batch_download_v1_request_t;




typedef struct agent_batch_download_v1_request_t {
    list_t *a_pki_attachment_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} agent_batch_download_v1_request_t;

__attribute__((deprecated)) agent_batch_download_v1_request_t *agent_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
);

void agent_batch_download_v1_request_free(agent_batch_download_v1_request_t *agent_batch_download_v1_request);

agent_batch_download_v1_request_t *agent_batch_download_v1_request_parseFromJSON(cJSON *agent_batch_download_v1_requestJSON);

cJSON *agent_batch_download_v1_request_convertToJSON(agent_batch_download_v1_request_t *agent_batch_download_v1_request);

#endif /* _agent_batch_download_v1_request_H_ */

