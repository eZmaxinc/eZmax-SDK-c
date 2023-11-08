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

// Enum  for communicationrecipient_request

typedef enum  { ezmax_api_definition__full_communicationrecipient_request__NULL = 0, ezmax_api_definition__full_communicationrecipient_request__To, ezmax_api_definition__full_communicationrecipient_request__Cc, ezmax_api_definition__full_communicationrecipient_request__Bcc } ezmax_api_definition__full_communicationrecipient_request__e;

char* communicationrecipient_request_e_communicationrecipient_type_ToString(ezmax_api_definition__full_communicationrecipient_request__e e_communicationrecipient_type);

ezmax_api_definition__full_communicationrecipient_request__e communicationrecipient_request_e_communicationrecipient_type_FromString(char* e_communicationrecipient_type);



typedef struct communicationrecipient_request_t {
    int pki_communicationrecipient_id; //numeric
    int fki_agent_id; //numeric
    int fki_agentincorporation_id; //numeric
    int fki_broker_id; //numeric
    int fki_customer_id; //numeric
    int fki_employee_id; //numeric
    int fki_assistant_id; //numeric
    int fki_externalbroker_id; //numeric
    int fki_ezsignsigner_id; //numeric
    int fki_notary_id; //numeric
    int fki_supplier_id; //numeric
    int fki_user_id; //numeric
    field_e_communicationrecipient_type_t *e_communicationrecipient_type; // custom

} communicationrecipient_request_t;

communicationrecipient_request_t *communicationrecipient_request_create(
    int pki_communicationrecipient_id,
    int fki_agent_id,
    int fki_agentincorporation_id,
    int fki_broker_id,
    int fki_customer_id,
    int fki_employee_id,
    int fki_assistant_id,
    int fki_externalbroker_id,
    int fki_ezsignsigner_id,
    int fki_notary_id,
    int fki_supplier_id,
    int fki_user_id,
    field_e_communicationrecipient_type_t *e_communicationrecipient_type
);

void communicationrecipient_request_free(communicationrecipient_request_t *communicationrecipient_request);

communicationrecipient_request_t *communicationrecipient_request_parseFromJSON(cJSON *communicationrecipient_requestJSON);

cJSON *communicationrecipient_request_convertToJSON(communicationrecipient_request_t *communicationrecipient_request);

#endif /* _communicationrecipient_request_H_ */

