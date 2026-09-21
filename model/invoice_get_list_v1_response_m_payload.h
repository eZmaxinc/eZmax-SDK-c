/*
 * invoice_get_list_v1_response_m_payload.h
 *
 * Payload for GET /1/object/invoice/getList
 */

#ifndef _invoice_get_list_v1_response_m_payload_H_
#define _invoice_get_list_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_get_list_v1_response_m_payload_t invoice_get_list_v1_response_m_payload_t;

#include "invoice_list_element.h"



typedef struct invoice_get_list_v1_response_m_payload_t {
    int *i_row_returned; //numeric
    int *i_row_filtered; //numeric
    list_t *a_obj_invoice; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} invoice_get_list_v1_response_m_payload_t;

__attribute__((deprecated)) invoice_get_list_v1_response_m_payload_t *invoice_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_invoice
);

void invoice_get_list_v1_response_m_payload_free(invoice_get_list_v1_response_m_payload_t *invoice_get_list_v1_response_m_payload);

invoice_get_list_v1_response_m_payload_t *invoice_get_list_v1_response_m_payload_parseFromJSON(cJSON *invoice_get_list_v1_response_m_payloadJSON);

cJSON *invoice_get_list_v1_response_m_payload_convertToJSON(invoice_get_list_v1_response_m_payload_t *invoice_get_list_v1_response_m_payload);

#endif /* _invoice_get_list_v1_response_m_payload_H_ */

