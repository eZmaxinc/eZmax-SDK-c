/*
 * communicationrecipient_request.h
 *
 * A Communicationrecipient Object
 */

#ifndef _communicationrecipient_request_H_
#define _communicationrecipient_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationrecipient_request_t communicationrecipient_request_t;

#include "field_e_communicationrecipient_type.h"



typedef struct communicationrecipient_request_t {
    int pki_communicationrecipient_id; //numeric
    int fki_agent_id; //numeric
    int fki_broker_id; //numeric
    int fki_contact_id; //numeric
    int fki_customer_id; //numeric
    int fki_employee_id; //numeric
    int fki_assistant_id; //numeric
    int fki_externalbroker_id; //numeric
    int fki_ezsignsigner_id; //numeric
    int fki_notary_id; //numeric
    int fki_supplier_id; //numeric
    int fki_user_id; //numeric
    int fki_mailboxshared_id; //numeric
    int fki_phonelineshared_id; //numeric
    ezmax_api_definition__full_field_e_communicationrecipient_type__e e_communicationrecipient_type; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} communicationrecipient_request_t;

__attribute__((deprecated)) communicationrecipient_request_t *communicationrecipient_request_create(
    int pki_communicationrecipient_id,
    int fki_agent_id,
    int fki_broker_id,
    int fki_contact_id,
    int fki_customer_id,
    int fki_employee_id,
    int fki_assistant_id,
    int fki_externalbroker_id,
    int fki_ezsignsigner_id,
    int fki_notary_id,
    int fki_supplier_id,
    int fki_user_id,
    int fki_mailboxshared_id,
    int fki_phonelineshared_id,
    ezmax_api_definition__full_field_e_communicationrecipient_type__e e_communicationrecipient_type
);

void communicationrecipient_request_free(communicationrecipient_request_t *communicationrecipient_request);

communicationrecipient_request_t *communicationrecipient_request_parseFromJSON(cJSON *communicationrecipient_requestJSON);

cJSON *communicationrecipient_request_convertToJSON(communicationrecipient_request_t *communicationrecipient_request);

#endif /* _communicationrecipient_request_H_ */

