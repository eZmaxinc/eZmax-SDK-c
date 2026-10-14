/*
 * electronicfundstransfertransaction_get_list_v1_response.h
 *
 * Response for GET /1/object/electronicfundstransfertransaction/getList
 */

#ifndef _electronicfundstransfertransaction_get_list_v1_response_H_
#define _electronicfundstransfertransaction_get_list_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct electronicfundstransfertransaction_get_list_v1_response_t electronicfundstransfertransaction_get_list_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload_get_list.h"
#include "electronicfundstransfertransaction_get_list_v1_response_m_payload.h"



typedef struct electronicfundstransfertransaction_get_list_v1_response_t {
    struct common_response_obj_debug_payload_get_list_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct electronicfundstransfertransaction_get_list_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} electronicfundstransfertransaction_get_list_v1_response_t;

__attribute__((deprecated)) electronicfundstransfertransaction_get_list_v1_response_t *electronicfundstransfertransaction_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    electronicfundstransfertransaction_get_list_v1_response_m_payload_t *m_payload
);

void electronicfundstransfertransaction_get_list_v1_response_free(electronicfundstransfertransaction_get_list_v1_response_t *electronicfundstransfertransaction_get_list_v1_response);

electronicfundstransfertransaction_get_list_v1_response_t *electronicfundstransfertransaction_get_list_v1_response_parseFromJSON(cJSON *electronicfundstransfertransaction_get_list_v1_responseJSON);

cJSON *electronicfundstransfertransaction_get_list_v1_response_convertToJSON(electronicfundstransfertransaction_get_list_v1_response_t *electronicfundstransfertransaction_get_list_v1_response);

#endif /* _electronicfundstransfertransaction_get_list_v1_response_H_ */

