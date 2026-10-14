/*
 * electronicfundstransfer_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/electronicfundstransfer/getList
 */

#ifndef _electronicfundstransfer_get_list_v1_response_m_payload_H_
#define _electronicfundstransfer_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct electronicfundstransfer_get_list_v1_response_m_payload_t electronicfundstransfer_get_list_v1_response_m_payload_t;

#include "electronicfundstransfer_list_element.h"



typedef struct electronicfundstransfer_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_electronicfundstransfer; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} electronicfundstransfer_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) electronicfundstransfer_get_list_v1_response_m_payload_t *electronicfundstransfer_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_electronicfundstransfer
);

void electronicfundstransfer_get_list_v1_response_m_payload_free(electronicfundstransfer_get_list_v1_response_m_payload_t *electronicfundstransfer_get_list_v1_response_m_payload);

electronicfundstransfer_get_list_v1_response_m_payload_t *electronicfundstransfer_get_list_v1_response_m_payload_parseFromJSON(cJSON *electronicfundstransfer_get_list_v1_response_m_payloadJSON);

cJSON *electronicfundstransfer_get_list_v1_response_m_payload_convertToJSON(electronicfundstransfer_get_list_v1_response_m_payload_t *electronicfundstransfer_get_list_v1_response_m_payload);

#endif /* _electronicfundstransfer_get_list_v1_response_m_payload_H_ */

