/*
 * communicationrecipient_response_compound.h
 *
 * A Communicationreciient Object
 */

#ifndef _communicationrecipient_response_compound_H_
#define _communicationrecipient_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communicationrecipient_response_compound_t communicationrecipient_response_compound_t;

#include "descriptionstatic_response_compound.h"
#include "emailstatic_response_compound.h"
#include "field_e_communicationrecipient_objecttype.h"
#include "field_e_communicationrecipient_type.h"
#include "phonestatic_response_compound.h"

// Enum  for communicationrecipient_response_compound

typedef enum  { ezmax_api_definition__full_communicationrecipient_response_compound__NULL = 0, ezmax_api_definition__full_communicationrecipient_response_compound__Agent, ezmax_api_definition__full_communicationrecipient_response_compound__Agentincorporation, ezmax_api_definition__full_communicationrecipient_response_compound__Assistant, ezmax_api_definition__full_communicationrecipient_response_compound__Broker, ezmax_api_definition__full_communicationrecipient_response_compound__Contact, ezmax_api_definition__full_communicationrecipient_response_compound__Customer, ezmax_api_definition__full_communicationrecipient_response_compound__Employee, ezmax_api_definition__full_communicationrecipient_response_compound__Externalbroker, ezmax_api_definition__full_communicationrecipient_response_compound__Ezcomagent, ezmax_api_definition__full_communicationrecipient_response_compound__Ezcomcompany, ezmax_api_definition__full_communicationrecipient_response_compound__Ezsignsigner, ezmax_api_definition__full_communicationrecipient_response_compound__Franchiseoffice, ezmax_api_definition__full_communicationrecipient_response_compound__Notary, ezmax_api_definition__full_communicationrecipient_response_compound__Rewardmember, ezmax_api_definition__full_communicationrecipient_response_compound__Supplier, ezmax_api_definition__full_communicationrecipient_response_compound__User } ezmax_api_definition__full_communicationrecipient_response_compound__e;

char* communicationrecipient_response_compound_e_communicationrecipient_objecttype_ToString(ezmax_api_definition__full_communicationrecipient_response_compound__e e_communicationrecipient_objecttype);

ezmax_api_definition__full_communicationrecipient_response_compound__e communicationrecipient_response_compound_e_communicationrecipient_objecttype_FromString(char* e_communicationrecipient_objecttype);

// Enum  for communicationrecipient_response_compound

typedef enum  { ezmax_api_definition__full_communicationrecipient_response_compound__NULL = 0, ezmax_api_definition__full_communicationrecipient_response_compound__To, ezmax_api_definition__full_communicationrecipient_response_compound__Cc, ezmax_api_definition__full_communicationrecipient_response_compound__Bcc } ezmax_api_definition__full_communicationrecipient_response_compound__e;

char* communicationrecipient_response_compound_e_communicationrecipient_type_ToString(ezmax_api_definition__full_communicationrecipient_response_compound__e e_communicationrecipient_type);

ezmax_api_definition__full_communicationrecipient_response_compound__e communicationrecipient_response_compound_e_communicationrecipient_type_FromString(char* e_communicationrecipient_type);



typedef struct communicationrecipient_response_compound_t {
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

} communicationrecipient_response_compound_t;

communicationrecipient_response_compound_t *communicationrecipient_response_compound_create(
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

void communicationrecipient_response_compound_free(communicationrecipient_response_compound_t *communicationrecipient_response_compound);

communicationrecipient_response_compound_t *communicationrecipient_response_compound_parseFromJSON(cJSON *communicationrecipient_response_compoundJSON);

cJSON *communicationrecipient_response_compound_convertToJSON(communicationrecipient_response_compound_t *communicationrecipient_response_compound);

#endif /* _communicationrecipient_response_compound_H_ */

