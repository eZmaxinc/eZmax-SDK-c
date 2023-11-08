/*
 * communicationrecipient_request_compound.h
 *
 * A Communicationrecipient Object and children
 */

#ifndef _communicationrecipient_request_compound_H_
#define _communicationrecipient_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationrecipient_request_compound_t communicationrecipient_request_compound_t;

#include "field_e_communicationrecipient_type.h"

// Enum  for communicationrecipient_request_compound

typedef enum  { ezmax_api_definition__full_communicationrecipient_request_compound__NULL = 0, ezmax_api_definition__full_communicationrecipient_request_compound__To, ezmax_api_definition__full_communicationrecipient_request_compound__Cc, ezmax_api_definition__full_communicationrecipient_request_compound__Bcc } ezmax_api_definition__full_communicationrecipient_request_compound__e;

char* communicationrecipient_request_compound_e_communicationrecipient_type_ToString(ezmax_api_definition__full_communicationrecipient_request_compound__e e_communicationrecipient_type);

ezmax_api_definition__full_communicationrecipient_request_compound__e communicationrecipient_request_compound_e_communicationrecipient_type_FromString(char* e_communicationrecipient_type);



typedef struct communicationrecipient_request_compound_t {
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

} communicationrecipient_request_compound_t;

communicationrecipient_request_compound_t *communicationrecipient_request_compound_create(
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

void communicationrecipient_request_compound_free(communicationrecipient_request_compound_t *communicationrecipient_request_compound);

communicationrecipient_request_compound_t *communicationrecipient_request_compound_parseFromJSON(cJSON *communicationrecipient_request_compoundJSON);

cJSON *communicationrecipient_request_compound_convertToJSON(communicationrecipient_request_compound_t *communicationrecipient_request_compound);

#endif /* _communicationrecipient_request_compound_H_ */

