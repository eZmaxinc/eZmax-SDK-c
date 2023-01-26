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

#include "descriptionstatic_response_compound.h"
#include "emailstatic_response_compound.h"
#include "field_e_communicationrecipient_objecttype.h"
#include "field_e_communicationrecipient_type.h"
#include "phonestatic_response_compound.h"

// Enum  for communicationrecipient_response

typedef enum  { ezmax_api_definition__full_communicationrecipient_response__NULL = 0, ezmax_api_definition__full_communicationrecipient_response__Agent, ezmax_api_definition__full_communicationrecipient_response__Agentincorporation, ezmax_api_definition__full_communicationrecipient_response__Assistant, ezmax_api_definition__full_communicationrecipient_response__Broker, ezmax_api_definition__full_communicationrecipient_response__Contact, ezmax_api_definition__full_communicationrecipient_response__Customer, ezmax_api_definition__full_communicationrecipient_response__Employee, ezmax_api_definition__full_communicationrecipient_response__Externalbroker, ezmax_api_definition__full_communicationrecipient_response__Ezcomagent, ezmax_api_definition__full_communicationrecipient_response__Ezcomcompany, ezmax_api_definition__full_communicationrecipient_response__Ezsignsigner, ezmax_api_definition__full_communicationrecipient_response__Franchiseoffice, ezmax_api_definition__full_communicationrecipient_response__Notary, ezmax_api_definition__full_communicationrecipient_response__Rewardmember, ezmax_api_definition__full_communicationrecipient_response__Supplier, ezmax_api_definition__full_communicationrecipient_response__User } ezmax_api_definition__full_communicationrecipient_response__e;

char* communicationrecipient_response_e_communicationrecipient_objecttype_ToString(ezmax_api_definition__full_communicationrecipient_response__e e_communicationrecipient_objecttype);

ezmax_api_definition__full_communicationrecipient_response__e communicationrecipient_response_e_communicationrecipient_objecttype_FromString(char* e_communicationrecipient_objecttype);

// Enum  for communicationrecipient_response

typedef enum  { ezmax_api_definition__full_communicationrecipient_response__NULL = 0, ezmax_api_definition__full_communicationrecipient_response__To, ezmax_api_definition__full_communicationrecipient_response__Cc, ezmax_api_definition__full_communicationrecipient_response__Bcc } ezmax_api_definition__full_communicationrecipient_response__e;

char* communicationrecipient_response_e_communicationrecipient_type_ToString(ezmax_api_definition__full_communicationrecipient_response__e e_communicationrecipient_type);

ezmax_api_definition__full_communicationrecipient_response__e communicationrecipient_response_e_communicationrecipient_type_FromString(char* e_communicationrecipient_type);



typedef struct communicationrecipient_response_t {
    int pki_communicationrecipient_id; //numeric
    field_e_communicationrecipient_objecttype_t *e_communicationrecipient_objecttype; // custom
    int fki_agent_id; //numeric
    int fki_broker_id; //numeric
    int fki_contact_id; //numeric
    int fki_customer_id; //numeric
    int fki_employee_id; //numeric
    int fki_ezsignsigner_id; //numeric
    int fki_franchiseoffice_id; //numeric
    int fki_user_id; //numeric
    int fki_agentincorporation_id; //numeric
    int fki_assistant_id; //numeric
    int fki_externalbroker_id; //numeric
    int fki_ezcomagent_id; //numeric
    int fki_notary_id; //numeric
    int fki_rewardmember_id; //numeric
    int fki_supplier_id; //numeric
    field_e_communicationrecipient_type_t *e_communicationrecipient_type; // custom
    struct descriptionstatic_response_compound_t *obj_descriptionstatic; //model
    struct emailstatic_response_compound_t *obj_emailstatic; //model
    struct phonestatic_response_compound_t *obj_phonestatic; //model

} communicationrecipient_response_t;

communicationrecipient_response_t *communicationrecipient_response_create(
    int pki_communicationrecipient_id,
    field_e_communicationrecipient_objecttype_t *e_communicationrecipient_objecttype,
    int fki_agent_id,
    int fki_broker_id,
    int fki_contact_id,
    int fki_customer_id,
    int fki_employee_id,
    int fki_ezsignsigner_id,
    int fki_franchiseoffice_id,
    int fki_user_id,
    int fki_agentincorporation_id,
    int fki_assistant_id,
    int fki_externalbroker_id,
    int fki_ezcomagent_id,
    int fki_notary_id,
    int fki_rewardmember_id,
    int fki_supplier_id,
    field_e_communicationrecipient_type_t *e_communicationrecipient_type,
    descriptionstatic_response_compound_t *obj_descriptionstatic,
    emailstatic_response_compound_t *obj_emailstatic,
    phonestatic_response_compound_t *obj_phonestatic
);

void communicationrecipient_response_free(communicationrecipient_response_t *communicationrecipient_response);

communicationrecipient_response_t *communicationrecipient_response_parseFromJSON(cJSON *communicationrecipient_responseJSON);

cJSON *communicationrecipient_response_convertToJSON(communicationrecipient_response_t *communicationrecipient_response);

#endif /* _communicationrecipient_response_H_ */

