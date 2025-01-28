/*
 * invoice_get_communicationrecipients_v1_response.h
 *
 * Response for GET /1/object/invoice/{pkiInvoiceID}/getCommunicationrecipients
 */

#ifndef _invoice_get_communicationrecipients_v1_response_H_
#define _invoice_get_communicationrecipients_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_get_communicationrecipients_v1_response_t invoice_get_communicationrecipients_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "invoice_get_communicationrecipients_v1_response_m_payload.h"



typedef struct invoice_get_communicationrecipients_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct invoice_get_communicationrecipients_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} invoice_get_communicationrecipients_v1_response_t;

__attribute__((deprecated)) invoice_get_communicationrecipients_v1_response_t *invoice_get_communicationrecipients_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    invoice_get_communicationrecipients_v1_response_m_payload_t *m_payload
);

void invoice_get_communicationrecipients_v1_response_free(invoice_get_communicationrecipients_v1_response_t *invoice_get_communicationrecipients_v1_response);

invoice_get_communicationrecipients_v1_response_t *invoice_get_communicationrecipients_v1_response_parseFromJSON(cJSON *invoice_get_communicationrecipients_v1_responseJSON);

cJSON *invoice_get_communicationrecipients_v1_response_convertToJSON(invoice_get_communicationrecipients_v1_response_t *invoice_get_communicationrecipients_v1_response);

#endif /* _invoice_get_communicationrecipients_v1_response_H_ */

