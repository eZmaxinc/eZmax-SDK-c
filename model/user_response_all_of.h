/*
 * user_response_all_of.h
 *
 * 
 */

#ifndef _user_response_all_of_H_
#define _user_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_response_all_of_t user_response_all_of_t;

#include "common_audit.h"
#include "field_e_user_type.h"

// Enum  for user_response_all_of

typedef enum  { ezmax_api_definition_user_response_all_of__NULL = 0, ezmax_api_definition_user_response_all_of__AgentBroker, ezmax_api_definition_user_response_all_of__Assistant, ezmax_api_definition_user_response_all_of__Attendance, ezmax_api_definition_user_response_all_of__Customer, ezmax_api_definition_user_response_all_of__Employee, ezmax_api_definition_user_response_all_of__Ezcom, ezmax_api_definition_user_response_all_of__EzsignSigner, ezmax_api_definition_user_response_all_of__EzsignUser, ezmax_api_definition_user_response_all_of__FranchiseCustomerServer, ezmax_api_definition_user_response_all_of__Normal, ezmax_api_definition_user_response_all_of__RewardAdministration, ezmax_api_definition_user_response_all_of__RewardMember, ezmax_api_definition_user_response_all_of__RewardRepresentative, ezmax_api_definition_user_response_all_of__RewardCustomer, ezmax_api_definition_user_response_all_of__RewardDistributorServer, ezmax_api_definition_user_response_all_of__Supplier, ezmax_api_definition_user_response_all_of__VetrxCustomer, ezmax_api_definition_user_response_all_of__Vetrxcustomergroup, ezmax_api_definition_user_response_all_of__VetrxCustomerServer, ezmax_api_definition_user_response_all_of__VetrxManufacturer, ezmax_api_definition_user_response_all_of__VetrxVendor } ezmax_api_definition_user_response_all_of__e;

char* user_response_all_of_e_user_type_ToString(ezmax_api_definition_user_response_all_of__e e_user_type);

ezmax_api_definition_user_response_all_of__e user_response_all_of_e_user_type_FromString(char* e_user_type);



typedef struct user_response_all_of_t {
    int pki_user_id; //numeric
    int fki_language_id; //numeric
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_user_loginname; // string
    struct common_audit_t *obj_audit; //model

} user_response_all_of_t;

user_response_all_of_t *user_response_all_of_create(
    int pki_user_id,
    int fki_language_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_user_loginname,
    common_audit_t *obj_audit
);

void user_response_all_of_free(user_response_all_of_t *user_response_all_of);

user_response_all_of_t *user_response_all_of_parseFromJSON(cJSON *user_response_all_ofJSON);

cJSON *user_response_all_of_convertToJSON(user_response_all_of_t *user_response_all_of);

#endif /* _user_response_all_of_H_ */

