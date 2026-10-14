/*
 * electronicfundstransfertransaction_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/electronicfundstransfertransaction/getList
 */

#ifndef _electronicfundstransfertransaction_get_list_v1_response_m_payload_H_
#define _electronicfundstransfertransaction_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct electronicfundstransfertransaction_get_list_v1_response_m_payload_t electronicfundstransfertransaction_get_list_v1_response_m_payload_t;

#include "electronicfundstransfertransaction_list_element.h"



typedef struct electronicfundstransfertransaction_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_electronicfundstransfertransaction; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} electronicfundstransfertransaction_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) electronicfundstransfertransaction_get_list_v1_response_m_payload_t *electronicfundstransfertransaction_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_electronicfundstransfertransaction
);

void electronicfundstransfertransaction_get_list_v1_response_m_payload_free(electronicfundstransfertransaction_get_list_v1_response_m_payload_t *electronicfundstransfertransaction_get_list_v1_response_m_payload);

electronicfundstransfertransaction_get_list_v1_response_m_payload_t *electronicfundstransfertransaction_get_list_v1_response_m_payload_parseFromJSON(cJSON *electronicfundstransfertransaction_get_list_v1_response_m_payloadJSON);

cJSON *electronicfundstransfertransaction_get_list_v1_response_m_payload_convertToJSON(electronicfundstransfertransaction_get_list_v1_response_m_payload_t *electronicfundstransfertransaction_get_list_v1_response_m_payload);

#endif /* _electronicfundstransfertransaction_get_list_v1_response_m_payload_H_ */

