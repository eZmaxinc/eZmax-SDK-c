/*
 * agent_import_into_edm_v1_request.h
 *
 * Request for POST /1/object/agent/{pkiAgentID}/importIntoEDM
 */

#ifndef _agent_import_into_edm_v1_request_H_
#define _agent_import_into_edm_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_import_into_edm_v1_request_t agent_import_into_edm_v1_request_t;

#include "custom_attachment_import_into_edm_request.h"



typedef struct agent_import_into_edm_v1_request_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} agent_import_into_edm_v1_request_t;

__attribute__((deprecated)) agent_import_into_edm_v1_request_t *agent_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
);

void agent_import_into_edm_v1_request_free(agent_import_into_edm_v1_request_t *agent_import_into_edm_v1_request);

agent_import_into_edm_v1_request_t *agent_import_into_edm_v1_request_parseFromJSON(cJSON *agent_import_into_edm_v1_requestJSON);

cJSON *agent_import_into_edm_v1_request_convertToJSON(agent_import_into_edm_v1_request_t *agent_import_into_edm_v1_request);

#endif /* _agent_import_into_edm_v1_request_H_ */

