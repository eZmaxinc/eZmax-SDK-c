/*
 * communicationrecipient_response.h
 *
 * A Communicationrecipient Object
 */

#ifndef _communicationrecipient_response_H_
#define _communicationrecipient_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationrecipient_response_t communicationrecipient_response_t;

#include "field_e_communicationrecipient_type.h"
#include "phone_response_compound.h"

// Enum  for communicationrecipient_response

typedef enum  { ezmax_api_definition__full_communicationrecipient_response__NULL = 0, ezmax_api_definition__full_communicationrecipient_response__To, ezmax_api_definition__full_communicationrecipient_response__Cc, ezmax_api_definition__full_communicationrecipient_response__Bcc } ezmax_api_definition__full_communicationrecipient_response__e;

char* communicationrecipient_response_e_communicationrecipient_type_ToString(ezmax_api_definition__full_communicationrecipient_response__e e_communicationrecipient_type);

ezmax_api_definition__full_communicationrecipient_response__e communicationrecipient_response_e_communicationrecipient_type_FromString(char* e_communicationrecipient_type);



typedef struct communicationrecipient_response_t {
    int pki_communicationrecipient_id; //numeric
    int fki_agent_id; //numeric
    int fki_broker_id; //numeric
    int fki_contact_id; //numeric
    int fki_customer_id; //numeric
    int fki_employee_id; //numeric
    int fki_ezsignsigner_id; //numeric
    int fki_franchiseoffice_id; //numeric
    int fki_user_id; //numeric
    char *s_email_address; // string
    field_e_communicationrecipient_type_t *e_communicationrecipient_type; // custom
    int fki_agentincorporation_id; //numeric
    int fki_assistant_id; //numeric
    int fki_externalbroker_id; //numeric
    int fki_ezcomagent_id; //numeric
    int fki_notary_id; //numeric
    int fki_rewardmember_id; //numeric
    int fki_supplier_id; //numeric
    struct phone_response_compound_t *obj_phone_sms; //model

} communicationrecipient_response_t;

communicationrecipient_response_t *communicationrecipient_response_create(
    int pki_communicationrecipient_id,
    int fki_agent_id,
    int fki_broker_id,
    int fki_contact_id,
    int fki_customer_id,
    int fki_employee_id,
    int fki_ezsignsigner_id,
    int fki_franchiseoffice_id,
    int fki_user_id,
    char *s_email_address,
    field_e_communicationrecipient_type_t *e_communicationrecipient_type,
    int fki_agentincorporation_id,
    int fki_assistant_id,
    int fki_externalbroker_id,
    int fki_ezcomagent_id,
    int fki_notary_id,
    int fki_rewardmember_id,
    int fki_supplier_id,
    phone_response_compound_t *obj_phone_sms
);

void communicationrecipient_response_free(communicationrecipient_response_t *communicationrecipient_response);

communicationrecipient_response_t *communicationrecipient_response_parseFromJSON(cJSON *communicationrecipient_responseJSON);

cJSON *communicationrecipient_response_convertToJSON(communicationrecipient_response_t *communicationrecipient_response);

#endif /* _communicationrecipient_response_H_ */

