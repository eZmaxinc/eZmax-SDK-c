/*
 * user_response.h
 *
 * A User Object
 */

#ifndef _user_response_H_
#define _user_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_response_t user_response_t;

#include "common_audit.h"
#include "field_e_user_type.h"
#include "user_response_all_of.h"

// Enum  for user_response

typedef enum  { ezmax_api_definition_user_response__NULL = 0, ezmax_api_definition_user_response__AgentBroker, ezmax_api_definition_user_response__Assistant, ezmax_api_definition_user_response__Attendance, ezmax_api_definition_user_response__Customer, ezmax_api_definition_user_response__Employee, ezmax_api_definition_user_response__Ezcom, ezmax_api_definition_user_response__EzsignSigner, ezmax_api_definition_user_response__EzsignUser, ezmax_api_definition_user_response__FranchiseCustomerServer, ezmax_api_definition_user_response__Normal, ezmax_api_definition_user_response__RewardAdministration, ezmax_api_definition_user_response__RewardMember, ezmax_api_definition_user_response__RewardRepresentative, ezmax_api_definition_user_response__RewardCustomer, ezmax_api_definition_user_response__RewardDistributorServer, ezmax_api_definition_user_response__Supplier, ezmax_api_definition_user_response__VetrxCustomer, ezmax_api_definition_user_response__Vetrxcustomergroup, ezmax_api_definition_user_response__VetrxCustomerServer, ezmax_api_definition_user_response__VetrxManufacturer, ezmax_api_definition_user_response__VetrxVendor } ezmax_api_definition_user_response__e;

char* user_response_e_user_type_ToString(ezmax_api_definition_user_response__e e_user_type);

ezmax_api_definition_user_response__e user_response_e_user_type_FromString(char* e_user_type);



typedef struct user_response_t {
    int pki_user_id; //numeric
    int fki_language_id; //numeric
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_user_loginname; // string
    struct common_audit_t *obj_audit; //model

} user_response_t;

user_response_t *user_response_create(
    int pki_user_id,
    int fki_language_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    common_audit_t *obj_audit
);

void user_response_free(user_response_t *user_response);

user_response_t *user_response_parseFromJSON(cJSON *user_responseJSON);

cJSON *user_response_convertToJSON(user_response_t *user_response);

#endif /* _user_response_H_ */

