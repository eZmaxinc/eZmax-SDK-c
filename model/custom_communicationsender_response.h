/*
 * custom_communicationsender_response.h
 *
 * Generic Communicationsender Response
 */

#ifndef _custom_communicationsender_response_H_
#define _custom_communicationsender_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_communicationsender_response_t custom_communicationsender_response_t;

#include "custom_contact_name_response.h"

// Enum ECOMMUNICATIONSENDEROBJECTTYPE for custom_communicationsender_response

typedef enum  { ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_NULL = 0, ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_Agent, ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_Broker, ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_User, ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_Mailboxshared } ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e;

char* custom_communicationsender_response_e_communicationsender_objecttype_ToString(ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e e_communicationsender_objecttype);

ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e custom_communicationsender_response_e_communicationsender_objecttype_FromString(char* e_communicationsender_objecttype);



typedef struct custom_communicationsender_response_t {
    int fki_agent_id; //numeric
    int fki_broker_id; //numeric
    int fki_user_id; //numeric
    int fki_mailboxshared_id; //numeric
    ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e e_communicationsender_objecttype; //enum
    struct custom_contact_name_response_t *obj_contact_name; //model
    char *s_email_address; // string
    char *s_phone_e164; // string

} custom_communicationsender_response_t;

custom_communicationsender_response_t *custom_communicationsender_response_create(
    int fki_agent_id,
    int fki_broker_id,
    int fki_user_id,
    int fki_mailboxshared_id,
    ezmax_api_definition__full_custom_communicationsender_response_ECOMMUNICATIONSENDEROBJECTTYPE_e e_communicationsender_objecttype,
    custom_contact_name_response_t *obj_contact_name,
    char *s_email_address,
    char *s_phone_e164
);

void custom_communicationsender_response_free(custom_communicationsender_response_t *custom_communicationsender_response);

custom_communicationsender_response_t *custom_communicationsender_response_parseFromJSON(cJSON *custom_communicationsender_responseJSON);

cJSON *custom_communicationsender_response_convertToJSON(custom_communicationsender_response_t *custom_communicationsender_response);

#endif /* _custom_communicationsender_response_H_ */

